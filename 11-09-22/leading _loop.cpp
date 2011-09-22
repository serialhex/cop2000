#include <iostream>  /* Standard Input/Output header file */
using namespace std;

int C;  /* Counter */

int main (void)
{
  C = 1;                  /* Initialize counter to start at one */
  while (C<=5)            /* Test for repetition/exit BEFORE the body */
    {                     /* Start a pass through the loop */
      cout << "Hello\n";  /* This step is the "body" of the loop */
      C = C + 1;          /* Increment C by one */
    }                     /* End the pass through the loop */

  // for loop
  float N;
  for ( N=1.1; N<=1.5; N=N+0.1 ) cout << "Hello\n";

  return 0;               /* Return zero error code to parent process */
}