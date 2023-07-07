library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity WatteringSystem is
	port(clk : IN std_logic;
		  reset : IN std_logic;
		  T : IN std_logic;
		  L : IN std_logic;
		  M : IN std_logic_vector(2 downto 0);
		  T_out : OUT std_logic;
		  L_out : OUT std_logic;
		  M_out : OUT std_logic_vector(2 downto 0);
		  State : OUT std_logic;
		  Seg : OUT std_logic_vector(6 downto 0)
		  );
end WatteringSystem;

architecture Behavioral of WatteringSystem is

	signal temp_MakeH, temp_MakeIdle: std_logic;
	
	COMPONENT FSM
	PORT(
		clk : IN std_logic;
		reset : IN std_logic;
		T : IN std_logic;
		L : IN std_logic;
		M : IN std_logic_vector(2 downto 0);          
		H_seg : OUT std_logic;
		idle_seg : OUT std_logic
		);
	END COMPONENT;

	COMPONENT BCD2SevSeg
	PORT(
		MakeH : IN std_logic;
		MakeIdle : IN std_logic;          
		SevenSeg : OUT std_logic_vector(6 downto 0)
		);
	END COMPONENT;
	
begin

	Inst_FSM: FSM PORT MAP(
		clk => clk,
		reset => reset,
		T => T,
		L => L,
		M => M,
		H_seg => temp_MakeH,
		idle_seg => temp_MakeIdle
	);
	
	Inst_BCD2SevSeg: BCD2SevSeg PORT MAP(
		MakeH => temp_MakeH,
		MakeIdle => temp_MakeIdle,
		SevenSeg => Seg
	);
	
	State <= temp_MakeH;
	T_out <= T;
	L_out <= L;
	M_out <= M;
	
end Behavioral;

