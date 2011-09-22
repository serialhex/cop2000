# Loops

pre-test loops, post-test loops  
aka  
leading decision loops, trailing decision loops  

avoid `do-while` or `while-do` (or even `do-untl`) when talking to people about looping  

**_AVOID MIDDLE-DECISION LOOPS_**   ...yeah foo!  

changing boundary conditions can give different values for loops.  

four parts of a counting control loop (may not happen in this order):
1. initialization
2. body
3. increment
4. test

`do` must always be followed by a `while` - thus, use braces!  

`for`-loops are leading-decicion structures  
`for (INIT; TEST; INC) BODY;`  
or  

	for (INIT; TEST; INC)
		{
		BODY;
		}

sentinel value: a value to stop a loop.  
  
guards need to be on sentinal loops for post-test loops  
primeing values need to be on sentinal loops for pre-test loops  