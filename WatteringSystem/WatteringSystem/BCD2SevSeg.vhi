
-- VHDL Instantiation Created from source file BCD2SevSeg.vhd -- 00:05:42 07/06/2023
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT BCD2SevSeg
	PORT(
		MakeH : IN std_logic;
		MakeIdle : IN std_logic;          
		SevenSeg : OUT std_logic_vector(6 downto 0)
		);
	END COMPONENT;

	Inst_BCD2SevSeg: BCD2SevSeg PORT MAP(
		MakeH => ,
		MakeIdle => ,
		SevenSeg => 
	);


