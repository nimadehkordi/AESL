----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    22:55:38 06/01/2019 
-- Design Name: 
-- Module Name:    top_module - Behavioral 
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

entity top_module is
    Port ( clk : in std_logic;
			  rst : in std_logic;
			  led_out : out  STD_LOGIC;
           sda : inout  STD_LOGIC;
           scl : inout  STD_LOGIC);
end top_module;


architecture Behavioral of top_module is
signal data : std_logic_vector(7 downto 0);
signal rst_debounced : std_logic;

signal data_to_master : std_logic_vector(7 downto 0);    
signal read_req : std_logic;
signal data_valid : std_logic;
signal data_from_master : std_logic_vector(7 downto 0);

begin
	-- debounce the reset
	Inst_debounce: entity work.debounce 
	PORT MAP(
		Clock => clk,
		button_in => rst,
		pulse_out => rst_debounced
	);
	
	Inst_I2C_slave: entity work.I2C_slave 
	PORT MAP(
		scl => scl,
		sda => sda,
		clk => clk,
		rst => rst_debounced,
		read_req => read_req,
		data_to_master => data_to_master,
		data_valid => data_valid,
		data_from_master => data_from_master
	);
	
	Inst_i2c_check: entity work.i2c_check 
	PORT MAP(
		clk => clk,
		rst => rst_debounced,
		read_req => read_req,
		data_to_master => data_to_master,
		data_valid => data_valid,
		data_from_master => data_from_master,
		led_out => led_out
	);

end Behavioral;

