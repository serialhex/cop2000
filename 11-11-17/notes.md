# NOTES OF PHENOMINAL AWESOMENESS!!!! #

## C-Strings ##

{code c++}

// all the following are equivalent
char LAST[16];
char LAST[16]="Andrews";
char LAST[16] = {'A','n','d','r','e','w','s','\0'};

LAST[0]='A';
LAST[1]='n';
LAST[2]='d';
LAST[3]='r';
LAST[4]='e';
LAST[5]='w';
LAST[6]='s';
// must have this!!!
LAST[7]='\0';

// putting a string into a c-string
LAST="Andrews";  /* Example of a typical coding error */
strcpy (LAST, "Andrews");  /* Store string data in LAST array */

// copying only a few elements...
char STRING1[10]="Nathan";
char STRING2[10];
strncpy (STRING2, STRING1, 3);  /* copy the first 3 characters of STRING1 to STRING2 */
// STRING2 is not terminated, must be done manually!!
STRING2[3]='\0';

// input of strings:
cin >> LAST;  /* Read keyboard data into the LAST array */

// output of strings
cout << STRINGNAME;
//  or
char WORD[10]="Hello";
for (C=0; C < 5; C++) cout << WORD[C];
for (C=0; C < strlen(WORD); C++) cout << WORD[C];

// also:
C=0;
while (WORD[C]!='\0') {
	cout << WORD[C];
	C=C+1;
}
// this is near fool-proof:
C=0;
while (WORD[C]!='\0' && C<SIZE) {
	cout << WORD[C];
	C=C+1;
}

{endcode}