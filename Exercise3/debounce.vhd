library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity debounce is
    port(   Clock : in std_logic;
            button_in : in std_logic;
            pulse_out : out std_logic
        );
end debounce;

architecture behav of debounce is

--the below constants decide the working parameters.
--the higher this is, the more longer time the user has to press the button.
constant COUNT_MAX : integer := 6000000; --250 ms * 24 MHz = 250000 * 24 = 60

signal count : integer := 0;
type state_type is (idle,wait_time); --state machine
signal state : state_type := idle;

begin

process(Clock)
begin
    if(rising_edge(Clock)) then
        case (state) is
            when idle =>
                if(button_in = '0') then
                    state <= wait_time;
                else
                    state <= idle; --wait until button is pressed.
                end if;
                pulse_out <= '0';
            when wait_time =>
                if(count = COUNT_MAX) then
                    count <= 0;
                    if(button_in = '0') then
                        pulse_out <= '1';
                    end if;
                    state <= idle;
                else
                    count <= count + 1;
                end if;
        end case;
    end if;
end process;

end architecture behav;
