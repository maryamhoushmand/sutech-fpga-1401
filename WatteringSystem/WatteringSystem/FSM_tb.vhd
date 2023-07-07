LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
ENTITY FSM_tb IS
END FSM_tb;
 
ARCHITECTURE behavior OF FSM_tb IS 
 
    COMPONENT FSM
    PORT(
         clk : IN  std_logic;
         reset : IN  std_logic;
         T : IN  std_logic;
         L : IN  std_logic;
         M : IN std_logic_vector(2 downto 0);
         H_seg : OUT  std_logic;
         idle_seg : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal reset : std_logic := '0';
   signal T : std_logic := '0';
   signal L : std_logic := '0';
   signal M : std_logic_vector(2 downto 0) :=(others => '0');

 	--Outputs
   signal H_seg : std_logic;
   signal idle_seg : std_logic;

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: FSM PORT MAP (
          clk => clk,
          reset => reset,
          T => T,
          L => L,
          M => M,
          H_seg => H_seg,
          idle_seg => idle_seg
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      wait for clk_period*10;

      -- insert stimulus here 
		reset <= '1';
		wait for 100 ns; -- St0
		reset <= '0';
		T <= '0';
		L <= '0';
		M <= "000";
		wait for 100 ns; -- St1
		T <= '0';
		L <= '0';
		M <= "111";
		wait for 100 ns; --St0 
		T <= '1';
		L <= '1';
		M <= "010";
		wait for 100 ns; --St0
		T <= '1';
		L <= '1';
		M <= "000";
		wait for 100 ns; --St1
		T <= '0';
		L <= '0';
		M <= "011"; 
		wait for 100 ns; --St1
		T <= '1';
		L <= '1';
		M <= "010";
		wait for 100 ns; --St1
		T <= '1';
		L <= '1';
		M <= "111";
		wait for 100 ns; --St0
		T <= '1';
		L <= '1';
		M <= "111";
		
   end process;

END;
