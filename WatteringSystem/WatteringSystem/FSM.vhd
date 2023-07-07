library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity FSM is
	Port(clk : IN std_logic;
		  reset : IN std_logic;
		  T : IN std_logic;
		  L : IN std_logic;
		  M : IN std_logic_vector(2 downto 0);
		  H_seg : OUT std_logic;
		  idle_seg : OUT std_logic
		  );
end FSM;

architecture Behavioral of FSM is
	Type States is(st0, st1);
	signal p_s, n_s : States;
	
begin
	process(clk, reset, n_s)
		begin
			if(rising_edge(clk)) then
				if(reset = '1') then
					p_s <= st0;
				else
					p_s <= n_s;
				end if;
			end if;
		end process;
		
		process(p_s, T, L, M)
			begin
				case p_s IS
					when st0 => 
						if((T = '0') and (L = '0') and (M > "011")) then
							n_s <= st0;
						elsif((T = '1' OR L = '1' ) and (M > "001")) then
							n_s <= st0;
						elsif((T = '1' OR L = '1' ) and (M <= "001")) then
							n_s <= st1;
						elsif((T = '0') and (L = '0') and (M <= "011"))then
							n_s <= st1;
						end if;
					when st1 =>
						if((T = '0') and (L = '0') and (M < "111")) then
							n_s <= st1;
						elsif((T = '1' OR L = '1' ) and (M < "011")) then
							n_s <= st1;
						elsif((T = '1' OR L = '1' ) and (M >= "011")) then
							n_s <= st0;
						elsif(M >= "111") then
							n_s <= st0;
						end if;
					when others =>
						n_s <= st0;
				end case;
			end process;
			
			H_seg <= '1' when(p_s = st1) else '0';
			idle_seg <= '1' when (p_s = st0) else '0';
					
end Behavioral;

