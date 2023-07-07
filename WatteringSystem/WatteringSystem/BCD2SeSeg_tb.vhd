LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
ENTITY BCD2SeSeg_tb IS
END BCD2SeSeg_tb;
 
ARCHITECTURE behavior OF BCD2SeSeg_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT BCD2SevSeg
    PORT(
         MakeH : IN  std_logic;
         MakeIdle : IN  std_logic;
         SevenSeg : OUT  std_logic_vector(6 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal MakeH : std_logic := '0';
   signal MakeIdle : std_logic := '0';

 	--Outputs
   signal SevenSeg : std_logic_vector(6 downto 0);

 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: BCD2SevSeg PORT MAP (
          MakeH => MakeH,
          MakeIdle => MakeIdle,
          SevenSeg => SevenSeg
        );

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      -- insert stimulus here
			MakeH <= '0';
			MakeIdle <= '0';
			wait for 10 ns;
			MakeH <= '1';
			wait for 50 ns;
			MakeH <= '0';
			MakeIdle <= '1';
			wait for 200 ns;
			MakeH <= '1';
			MakeIdle <= '0';

      wait;
   end process;

END;
