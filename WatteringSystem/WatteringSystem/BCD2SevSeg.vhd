library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity BCD2SevSeg is
		port( MakeH : IN std_logic;
				MakeIdle : IN std_logic;
				SevenSeg : OUT std_logic_vector(6 downto 0)
				);
end BCD2SevSeg;

architecture Behavioral of BCD2SevSeg is

begin

process(MakeH, MakeIdle)
	begin
		if(MakeH = '1') then
			SevenSeg <= "0110110";
		elsif(MakeIdle = '1') then
			SevenSeg <= "0000001";
		end if;
end process;

end Behavioral;

