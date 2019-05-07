-- LED blinking example

-- include the standard libraries
library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

-- define the module
entity ledBlinker is port(
	clk_24 : in std_logic;   	-- the 24 MHz clock of the FPGA
	led	 : out std_logic;		-- output of the led signal
	freq : in std_logic_vector(2 downto 0) --input to control the frequency of the blinking of LED
);
end ledBlinker;

-- define the behavior of the module
architecture behavior of ledBlinker is
	-- internal storage of the output signal
	signal led_int : std_logic := '0';
	signal freq_int : std_logic_vector(2 downto 0) := "111";
	
	-- frequency = 1 Hz -> 2 signal changes per second
	-- incoming clock has 24 MHz -> need to count to 12,000,000
	-- -> 24 bit counter required
	signal counter : std_logic_vector(23 downto 0) := (others => '0');
	
begin
	process(clk_24) -- react to changes on the clock
	begin
		if rising_edge(clk_24) then  -- positive edge triggered logic
			case freq is
			when "000" =>
				led_int <= '0';
			when "001" =>
				if unsigned(counter) = 16000000 then  
					counter <= (others => '0'); -- reset all bit to 0
					led_int <= not led_int;		 -- change led state
				else
					-- increment the counter
					counter <= std_logic_vector(unsigned(counter) + 1);
				end if;
			when "010" =>
				if unsigned(counter) = 14000000 then  
					counter <= (others => '0'); -- reset all bit to 0
					led_int <= not led_int;		 -- change led state
				else
					-- increment the counter
					counter <= std_logic_vector(unsigned(counter) + 1);
				end if;
			when "011" =>
				if unsigned(counter) = 12000000 then  
					counter <= (others => '0'); -- reset all bit to 0
					led_int <= not led_int;		 -- change led state
				else
					-- increment the counter
					counter <= std_logic_vector(unsigned(counter) + 1);
				end if;
			when "100" =>
				if unsigned(counter) = 10000000 then  
					counter <= (others => '0'); -- reset all bit to 0
					led_int <= not led_int;		 -- change led state
				else
					-- increment the counter
					counter <= std_logic_vector(unsigned(counter) + 1);
				end if;
			when "101" =>
				if unsigned(counter) = 8000000 then  
					counter <= (others => '0'); -- reset all bit to 0
					led_int <= not led_int;		 -- change led state
				else
					-- increment the counter
					counter <= std_logic_vector(unsigned(counter) + 1);
				end if;
			when "110" =>
				if unsigned(counter) = 6000000 then  
					counter <= (others => '0'); -- reset all bit to 0
					led_int <= not led_int;		 -- change led state
				else
					-- increment the counter
					counter <= std_logic_vector(unsigned(counter) + 1);
				end if;
			when "111" =>
				if unsigned(counter) = 4000000 then  
					counter <= (others => '0'); -- reset all bit to 0
					led_int <= not led_int;		 -- change led state
				else
					-- increment the counter
					counter <= std_logic_vector(unsigned(counter) + 1);
				end if;
			when others =>
				led_int <= '0';
			end case;			
		end if;	
	end process;
	-- connect internal storage to outgoing signal
	led <= led_int;
end behavior;
