--------------------------------------------------------------------------------
-- Company: 
-- Engineer: Nima Riahi Dehkordi
--
-- Create Date:   18:49:50 05/18/2019
-- Design Name:   
-- Module Name:   C:/Projects/Exercise2/lcdController_testbench.vhd
-- Project Name:  Exercise2
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: lcdController
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
 
ENTITY lcdController_testbench IS
END lcdController_testbench;
 
ARCHITECTURE behavior OF lcdController_testbench IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT lcdController
    PORT(
         clk_24 : IN  std_logic;
         reset_n : IN  std_logic;
         dataIn : IN  std_logic_vector(7 downto 0);
         posX : IN  std_logic_vector(3 downto 0);
         posY : IN  std_logic;
         writeData : IN  std_logic;
         ready : OUT  std_logic;
         en : OUT  std_logic;
         rw : OUT  std_logic;
         rs : OUT  std_logic;
         backLight : OUT  std_logic;
         data : INOUT  std_logic_vector(3 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clk_24 : std_logic := '0';
   signal reset_n : std_logic := '0';
   signal dataIn : std_logic_vector(7 downto 0) := (others => '0');
   signal posX : std_logic_vector(3 downto 0) := (others => '0');
   signal posY : std_logic := '0';
   signal writeData : std_logic := '0';

	--BiDirs
   signal data : std_logic_vector(3 downto 0);

 	--Outputs
   signal ready : std_logic;
   signal en : std_logic;
   signal rw : std_logic;
   signal rs : std_logic;
   signal backLight : std_logic;

   -- Clock period definitions
   constant clk_24_period : time := 42 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: lcdController PORT MAP (
          clk_24 => clk_24,
          reset_n => reset_n,
          dataIn => dataIn,
          posX => posX,
          posY => posY,
          writeData => writeData,
          ready => ready,
          en => en,
          rw => rw,
          rs => rs,
          backLight => backLight,
          data => data
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
      reset_n <= '0';
		wait for 100 ns;	
		reset_n <= '1';
		
      wait for clk_24_period*10;
		
      -- insert stimulus here 
		

      wait;
   end process;

END;
