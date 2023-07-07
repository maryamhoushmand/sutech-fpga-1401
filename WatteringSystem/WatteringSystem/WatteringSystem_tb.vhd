LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
ENTITY WatteringSystem_tb IS
END WatteringSystem_tb;
 
ARCHITECTURE behavior OF WatteringSystem_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT WatteringSystem
    PORT(
         clk : IN  std_logic;
         reset : IN  std_logic;
         T : IN  std_logic;
         L : IN  std_logic;
         M : IN  std_logic_vector(2 downto 0);
         T_out : OUT  std_logic;
         L_out : OUT  std_logic;
         M_out : OUT  std_logic_vector(2 downto 0);
         State : OUT  std_logic;
         Seg : OUT  std_logic_vector(6 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal reset : std_logic := '0';
   signal T : std_logic := '0';
   signal L : std_logic := '0';
   signal M : std_logic_vector(2 downto 0) := (others => '0');

 	--Outputs
   signal T_out : std_logic;
   signal L_out : std_logic;
   signal M_out : std_logic_vector(2 downto 0);
   signal State : std_logic;
   signal Seg : std_logic_vector(6 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: WatteringSystem PORT MAP (
          clk => clk,
          reset => reset,
          T => T,
          L => L,
          M => M,
          T_out => T_out,
          L_out => L_out,
          M_out => M_out,
          State => State,
          Seg => Seg
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

      wait;
   end process;

END;
