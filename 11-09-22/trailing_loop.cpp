#include <iostream>  /* Standard Input/Output header file */
using namespace std;

int C;  /* Counter */

int main (void)
{
  C = 1;                   /* Initialize counter to start at one */
  do
    {                      /* Start a pass through the loop */
      cout << "Hello\n";   /* This step is the "body" of the loop */
      C = C + 1;           /* Increment C by one */
    }                      /* End the pass through the loop */
  while (C<=5);            /* Test for repetition/exit AFTER the body */
  return 0;                /* Return zero error code to parent process */
}