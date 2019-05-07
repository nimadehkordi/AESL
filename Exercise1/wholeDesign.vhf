--------------------------------------------------------------------------------
-- Copyright (c) 1995-2013 Xilinx, Inc.  All rights reserved.
--------------------------------------------------------------------------------
--   ____  ____ 
--  /   /\/   / 
-- /___/  \  /    Vendor: Xilinx 
-- \   \   \/     Version : 14.7
--  \   \         Application : sch2hdl
--  /   /         Filename : wholeDesign.vhf
-- /___/   /\     Timestamp : 05/07/2019 20:57:00
-- \   \  /  \ 
--  \___\/\___\ 
--
--Command: sch2hdl -intstyle ise -family spartan6 -flat -suppress -vhdl C:/Projects/Exercise1/wholeDesign.vhf -w C:/Projects/Exercise1/wholeDesign.sch
--Design Name: wholeDesign
--Device: spartan6
--Purpose:
--    This vhdl netlist is translated from an ECS schematic. It can be 
--    synthesized and simulated, but it should not be modified. 
--

library ieee;
use ieee.std_logic_1164.ALL;
use ieee.numeric_std.ALL;
library UNISIM;
use UNISIM.Vcomponents.ALL;

entity wholeDesign is
   port ( button_down : in    std_logic; 
          button_up   : in    std_logic; 
          clk_24      : in    std_logic; 
          freq_out    : out   std_logic_vector (2 downto 0); 
          led         : out   std_logic);
end wholeDesign;

architecture BEHAVIORAL of wholeDesign is
   signal freq_out_DUMMY : std_logic_vector (2 downto 0);
   component ledBlinker
      port ( clk_24 : in    std_logic; 
             freq   : in    std_logic_vector (2 downto 0); 
             led    : out   std_logic);
   end component;
   
   component frequencyController
      port ( clk         : in    std_logic; 
             button_down : in    std_logic; 
             button_up   : in    std_logic; 
             freq        : out   std_logic_vector (2 downto 0));
   end component;
   
begin
   freq_out(2 downto 0) <= freq_out_DUMMY(2 downto 0);
   XLXI_1 : ledBlinker
      port map (clk_24=>clk_24,
                freq(2 downto 0)=>freq_out_DUMMY(2 downto 0),
                led=>led);
   
   XLXI_2 : frequencyController
      port map (button_down=>button_down,
                button_up=>button_up,
                clk=>clk_24,
                freq(2 downto 0)=>freq_out_DUMMY(2 downto 0));
   
end BEHAVIORAL;


