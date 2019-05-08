----------------------------------------------------------------------------------
-- Company:
-- Engineer:
--
-- Create Date:    20:17:50 05/07/2019
-- Design Name:
-- Module Name:    frequencyController - Behavioral
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
use ieee.numeric_std.all;


-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity frequencyController is
    Port ( clk : in  STD_LOGIC;
           freq : out  STD_LOGIC_VECTOR (2 downto 0);
           button_down : in  STD_LOGIC;
           button_up : in  STD_LOGIC);
end frequencyController;

architecture Behavioral of frequencyController is

COMPONENT debounce
	PORT(
		Clock : IN std_logic;
		button_in : IN std_logic;          
		pulse_out : OUT std_logic
		);
	END COMPONENT;

  signal but_up_deb : std_logic; --debounced signals
  signal but_down_deb : std_logic;
  signal freq_int : STD_LOGIC_VECTOR(2 downto 0) := "000";
begin

	Inst_debounce_up: debounce PORT MAP(
		Clock => clk,
		button_in => button_up,
		pulse_out => but_up_deb
	);
		Inst_debounce_down: debounce PORT MAP(
		Clock => clk,
		button_in => button_down,
		pulse_out => but_down_deb
	);

  process(clk, but_up_deb, but_down_deb)
  begin
	if (rising_edge(clk)) then
    if but_up_deb = '1' and unsigned(freq_int) < 7 then
       freq_int <= STD_LOGIC_VECTOR(unsigned(freq_int) + 1);
    elsif but_down_deb = '1' and unsigned(freq_int) > 0 then
       freq_int <= STD_LOGIC_VECTOR(unsigned(freq_int) - 1);
	 else
		 freq_int <= freq_int;
    end if;
	end if;
  end process;

  freq <= freq_int;
end Behavioral;
