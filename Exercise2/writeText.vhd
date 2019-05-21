 ----------------------------------------------------------------------------------
-- Company:
-- Engineer:
--
-- Create Date:    19:20:16 05/19/2019
-- Design Name:
-- Module Name:    writeText - Behavioral
-- Project Name:
-- Target Devices:
-- Tool versions:
-- Description:
--
-- Dependencies:
--
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;


-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity writeText is
  port(
  clk_24 : IN std_logic;
  backLightStatus : IN std_logic;
  data : INOUT std_logic_vector(3 downto 0);
  en : OUT std_logic;
  rw : OUT std_logic;
  rs : OUT std_logic;
  backLight : OUT std_logic;
  ready_out : out std_logic; -- just exists for debugging purpose
  reset_n : in std_logic
  );
end writeText;

architecture Behavioral of writeText is

  signal  ready :  STD_LOGIC;
  signal  writeData :  STD_LOGIC;
  signal  posX :  STD_LOGIC_VECTOR (3 downto 0);
  signal  posY :  STD_LOGIC;
  signal  dataOut :  STD_LOGIC_VECTOR (7 downto 0);
  signal  reset_n_debounced :  STD_LOGIC;

	COMPONENT lcdController
	PORT(
		clk_24 : IN std_logic;
		reset_n : IN std_logic;
		dataIn : IN std_logic_vector(7 downto 0);
		posX : IN std_logic_vector(3 downto 0);
		posY : IN std_logic;
		writeData : IN std_logic;
		data : INOUT std_logic_vector(3 downto 0);
		ready : OUT std_logic;
		en : OUT std_logic;
		rw : OUT std_logic;
		rs : OUT std_logic;
		backLightStatus : IN std_logic;
		backLight : OUT std_logic
		);
	END COMPONENT;

  COMPONENT debounce
	PORT(
		Clock : IN std_logic;
		button_in : IN std_logic;
		pulse_out : OUT std_logic
		);
	END COMPONENT;

  CONSTANT  freq  : INTEGER := 24; --system clock frequency in MHz

  subtype letter is STD_LOGIC_VECTOR (7 downto 0);
  type word_type is array (0 to 15) of letter;
  --AESL EX02
  constant text_to_write : word_type := ("01000001", "01000101", "01010011", "01001100", "00100000", "01000101", "01011000", "00110000", "00110010", "00100000", "00100000", "00100000", "00100000", "00100000", "00100000", "00100000");
  begin

  ready_out <= ready;

  Inst_debounce: debounce PORT MAP(
		Clock => clk_24,
		button_in => reset_n,
		pulse_out => reset_n_debounced
	);

  Inst_lcdController: lcdController PORT MAP(
		clk_24 => clk_24,
		reset_n => reset_n_debounced,
		dataIn => dataOut,
		posX => posX,
		posY => posY,
		writeData => writeData,
		ready => ready,
		en => en,
		rw => rw,
		rs => rs,
		backLight => backLight,
		backLightStatus => backLightStatus,
		data => data
	);

  writeText : process(clk_24,reset_n_debounced)
  VARIABLE letter_count : integer range 0 to 15 := 0; --event counter for timing
  begin
    if rising_edge(clk_24) then
      if(letter_count < word_type'length) then
        if ready = '1' then
          writeData <= '1';
          posX <= std_logic_vector(to_unsigned(letter_count, posX'length));
          posY <= '0';
          dataOut <= text_to_write(letter_count);
          letter_count := letter_count + 1;
        end if;
      end if;
    end if;
    IF(reset_n_debounced = '1') THEN
         letter_count := 0;
    END IF;
  end process;

end Behavioral;
