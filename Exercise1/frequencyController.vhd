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

begin

	freq <= "110";

end Behavioral;

