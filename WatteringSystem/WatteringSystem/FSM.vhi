
-- VHDL Instantiation Created from source file FSM.vhd -- 00:06:28 07/06/2023
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

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

	Inst_FSM: FSM PORT MAP(
		clk => ,
		reset => ,
		T => ,
		L => ,
		M => ,
		H_seg => ,
		idle_seg => 
	);


