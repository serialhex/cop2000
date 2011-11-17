# POINTERS!!!!!
(fun :P )

{code c++}


int X = 2;

/*
add   0    1    2    3
X |0000|0000|0000|0010|
                     ^^location
                     | contents
*/

int * Xp;	// pointer to an integer
Xp = &X;	// Xp gets assigned the address of X
*Xp = 6;	// wherever Xp points to, put a 6
Xp = 6;		// put 6 into the address of Xp, so it will point to address 6

int swap() {}

{endcode}