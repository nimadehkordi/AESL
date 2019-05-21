--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   19:28:57 05/20/2019
-- Design Name:   
-- Module Name:   C:/Projects/Exercise2/writeData_test.vhd
-- Project Name:  Exercise2
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: writeText
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY writeData_test IS
END writeData_test;
 
ARCHITECTURE behavior OF writeData_test IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT writeText
    PORT(
         clk_24 : IN  std_logic;
         backLightStatus : IN  std_logic;
         data : INOUT  std_logic_vector(3 downto 0);
         en : OUT  std_logic;
         rw : OUT  std_logic;
         rs : OUT  std_logic;
         backLight : OUT  std_logic;
         ready_out : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal clk_24 : std_logic := '0';
   signal backLightStatus : std_logic := '0';

	--BiDirs
   signal data : std_logic_vector(3 downto 0);

 	--Outputs
   signal en : std_logic;
   signal rw : std_logic;
   signal rs : std_logic;
   signal backLight : std_logic;
   signal ready_out : std_logic;

   -- Clock period definitions
   constant clk_24_period : time := 42 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: writeText PORT MAP (
          clk_24 => clk_24,
          backLightStatus => backLightStatus,
          data => data,
          en => en,
          rw => rw,
          rs => rs,
          backLight => backLight,
          ready_out => ready_out
        );

   -- Clock process definitions
   clk_24_process :process
   begin
		clk_24 <= '0';
		wait for clk_24_period/2;
		clk_24 <= '1';
		wait for clk_24_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      wait for clk_24_period*10;

      -- insert stimulus here 

      wait;
   end process;

END;
