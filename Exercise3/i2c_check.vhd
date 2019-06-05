----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    22:54:29 06/01/2019 
-- Design Name: 
-- Module Name:    i2c_check - Behavioral 
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
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity i2c_check is
    Port ( 
	 clk              : in    std_logic;
	 rst              : in    std_logic;
    -- User interface
    read_req         : in   std_logic;
    data_to_master   : out    std_logic_vector(7 downto 0);
    data_valid       : in   std_logic;
    data_from_master : in   std_logic_vector(7 downto 0);
	 led_out : out std_logic);
end i2c_check;

architecture Behavioral of i2c_check is

begin
	
	process(clk)
	begin
		if rising_edge(clk) then
			if(data_valid = '1') then
				led_out <= '1';
			else
				led_out <= '0';
			end if;
		end if;
	end process; 

end Behavioral;

