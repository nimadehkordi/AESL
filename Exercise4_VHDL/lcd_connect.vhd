----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    18:42:13 06/17/2019 
-- Design Name: 
-- Module Name:    lcd_connect - Behavioral 
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

entity lcd_connect is
    Port ( rs_in : in  STD_LOGIC;
           en_in : in  STD_LOGIC;
           data_in : in  STD_LOGIC_VECTOR (3 downto 0);
           rs_out : out  STD_LOGIC;
           rw_out : out  STD_LOGIC;
           en_out : out  STD_LOGIC;
           data_out : out  STD_LOGIC_VECTOR (3 downto 0);
           back_light_in : in  STD_LOGIC;
           back_light_out : out  STD_LOGIC);
end lcd_connect;

architecture Behavioral of lcd_connect is

begin
		rs_out <= rs_in;
		rw_out <= '0';
		en_out <= en_in;
		data_out <= data_in;
		back_light_out <= back_light_in;
end Behavioral;

