----------------------------------------------------------------------------------
-- Company:
-- Engineer: Nima Riahi Dehkordi
--
-- Create Date:    15:13:30 05/12/2019
-- Design Name:
-- Module Name:    lcdController - Behavioral
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

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity lcdController is
    Port ( clk_24 : in  STD_LOGIC;
           reset_n : in  STD_LOGIC;
           dataIn : in  STD_LOGIC_VECTOR (7 downto 0);
           posX : in  STD_LOGIC_VECTOR (3 downto 0);
           posY : in  STD_LOGIC;
           writeData : in  STD_LOGIC;
           ready : out  STD_LOGIC;
           en : out  STD_LOGIC;
           rw : out  STD_LOGIC;
           rs : out  STD_LOGIC;
			     backLightStatus : IN std_logic;
           backLight : out  STD_LOGIC;
           data : inout  STD_LOGIC_VECTOR (3 downto 0)
           );
end lcdController;

architecture Behavioral of lcdController is
  type state_type is (initialize, ready_state, send);
  signal state : state_type := initialize;
  CONSTANT  freq  : INTEGER := 24; --system clock frequency in MHz
  signal dataIn_internal : STD_LOGIC_VECTOR(7 downto 0);
  signal address_internal : STD_LOGIC_VECTOR(6 downto 0);
begin

	backlight <= backLightStatus;
  -- state machine which controlls the lcd Module
  controller_fsm: process(clk_24, reset_n)
  VARIABLE clk_count : INTEGER := 0; --event counter for timing
  begin
	 if rising_edge(clk_24) then
      case( state ) is
        when initialize =>
          ready <= '0';
          en <= '0';
          clk_count := clk_count + 1;
          IF(clk_count < (10 * freq)) THEN  --wait for 300 ns at least
            en <= '1';
          ELSIF(clk_count < (20010 * freq)) THEN       --wait 20 ms
            data <= "0000";
            rw <= '0';
            rs <= '0';
            state <= initialize;
          ELSIF(clk_count < (20020 * freq)) THEN  --wait for 300 ns at least
            en <= '1';
          ELSIF(clk_count < (30020 * freq)) THEN    --wait 10 ms
            data <= "0011";
            rw <= '0';
            rs <= '0';
            state <= initialize;
          ELSIF(clk_count < (30030 * freq)) THEN  --wait for 300 ns at least
            en <= '1';
          ELSIF(clk_count < (30130 * freq)) THEN    --wait 100 us
            data <= "0011";
            rw <= '0';
            rs <= '0';
            state <= initialize;
          ELSIF(clk_count < (30140 * freq)) THEN  --wait for 300 ns at least
            en <= '1';
          ELSIF(clk_count < (30240 * freq)) THEN   --wait 100 us
            data <= "0011";
            rw <= '0';
            rs <= '0';
            state <= initialize;
          ELSIF(clk_count < (30250 * freq)) THEN  --wait for 300 ns at least
            en <= '1';
          ELSIF(clk_count < (30350 * freq)) THEN   --wait 100 us
            data <= "0010";
            rw <= '0';
            rs <= '0';
            state <= initialize;
          ELSIF(clk_count < (30360 * freq)) THEN  --wait for 300 ns at least
            en <= '1';
          ELSIF(clk_count < (30460 * freq)) THEN  --wait 100 us
            data <= "0010";
            rw <= '0';
            rs <= '0';
            state <= initialize;
          ELSIF(clk_count < (30470 * freq)) THEN  --wait for 300 ns at least
            en <= '1';
          ELSIF(clk_count < (30570 * freq)) THEN  --wait 100 us
            data <= "1100";
            rw <= '0';
            rs <= '0';
            state <= initialize;
          ELSIF(clk_count < (30580 * freq)) THEN  --wait for 300 ns at least
            en <= '1';
          ELSIF(clk_count < (30680 * freq)) THEN  --wait 100 us
            data <= "0000";
            rw <= '0';
            rs <= '0';
            state <= initialize;
          ELSIF(clk_count < (30690 * freq)) THEN  --wait for 300 ns at least
            en <= '1';
          ELSIF(clk_count < (30790 * freq)) THEN  --wait 100 us
            data <= "1100";
            rw <= '0';
            rs <= '0';
            state <= initialize;
          ELSIF(clk_count < (30800 * freq)) THEN  --wait for 300 ns at least
            en <= '1';
          ELSIF(clk_count < (30900 * freq)) THEN  --wait 100 us
            data <= "0000";
            rw <= '0';
            rs <= '0';
            state <= initialize;
          ELSIF(clk_count < (30910 * freq)) THEN  --wait for 300 ns at least
            en <= '1';
          ELSIF(clk_count < (40910 * freq)) THEN  --wait 10 ms
            data <= "0001";
            rw <= '0';
            rs <= '0';
            state <= initialize;
          ELSIF(clk_count < (30920 * freq)) THEN  --wait for 300 ns at least
            en <= '1';
          ELSIF(clk_count < (41020 * freq)) THEN  --wait 100 us
            data <= "0000";
            rw <= '0';
            rs <= '0';
            state <= initialize;
          ELSIF(clk_count < (41030 * freq)) THEN  --wait for 300 ns at least
            en <= '1';
          ELSIF(clk_count < (41130 * freq)) THEN  --wait 100 us
            data <= "0110";
            rw <= '0';
            rs <= '0';
            state <= initialize;
          ELSE                                   --initialization complete
            clk_count := 0;
            ready <= '1';
            state <= ready_state;
          END IF;

        when ready_state =>
          IF(writeData = '1') THEN
            ready <= '0';
            dataIn_internal <= dataIn;
            address_internal <= posY & "00" & posX;
            clk_count := 0;
            state <= send;
          ELSE
            ready <= '1';
            rs <= '0';
            rw <= '0';
            data <= "0000";
            clk_count := 0;
            state <= ready_state;
          END IF;

        when send =>
          ready <= '0';
          clk_count := clk_count + 1;
          IF(clk_count < (10 * freq)) THEN  --wait for 300 ns at least
            en <= '1';
          ELSIF (clk_count < (110 * freq)) THEN --wait for 100 us
            en <= '0';
            rs <= '0';
            rw <= '0';
            data <= '1' & address_internal(6 downto 4);
          ELSIF (clk_count < (120 * freq)) THEN --wait for 300 ns at least
            en <= '1';
          ELSIF (clk_count < (220 * freq)) THEN --wait for 100 us
            en <= '0';
            rs <= '0';
            rw <= '0';
            data <= address_internal(3 downto 0);
          ELSIF (clk_count < (230 * freq)) THEN --wait for 300 ns at least
            en <= '1';
          ELSIF (clk_count < (330 * freq)) THEN --wait for 100 us
            en <= '0';
            rs <= '1';
            rw <= '0';
            data <= dataIn_internal(7 downto 4);
          ELSIF (clk_count < (340 * freq)) THEN --wait for 300 ns at least
            en <= '1';
          ELSIF (clk_count < (440 * freq)) THEN --wait for 100 us
            en <= '0';
            rs <= '1';
            rw <= '0';
            data <= dataIn_internal(3 downto 0);
          ELSE
            clk_count := 0;
            state <= ready_state;
          END IF;
      end case;

      --reset
      IF(reset_n = '1') THEN
          state <= initialize;
          clk_count := 0;
      END IF;

    end if;
  end process;

--  controller_fsm_output : process(state)
--  begin
--    if state = initialize then
--
--    elsif wait_for_input then
--
--    elsif write_to_output then
--
--    else
--
--    end if;
--  end process;

end Behavioral;
