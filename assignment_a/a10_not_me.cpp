#include <iostream>
using namespace std;
#include <string>
#define NSIZE 15
#define SSNSIZE 9
#define USIZE 8
#define PSIZE 9


int main()
{
    char FIRST[NSIZE+1];
    char LAST[NSIZE+1];
    char SSN[SSNSIZE+1];
    char UNAME[USIZE+1];
    char PWORD[PSIZE+1];
    int PS;
    int PT;
    
    cout << "Account Generating Program.\n";
    cout << "Written by Justin Waters - 11/17/2001\n\n";
    
    cout << "First Name? ";
    cin >> FIRST;
    
    for(PS=0; PS<strlen(FIRST); PS++)
	if (isupper (FIRST[PS]))
    FIRST[PS] = tolower(FIRST[PS]);
    
    
    cout << "Last Name? ";
    cin >> LAST;
    
    for(PS=0; PS<strlen(LAST); PS++)
	if (isupper (LAST[PS]))
    LAST[PS] = tolower(LAST[PS]);
    
    do
    {
    cout << "Social Security Number?";
    cin >> SSN;
    } 
    while (strlen(SSN) != SSNSIZE);
      
    for(PS=0; PS<strlen(LAST) && PS<4; PS++)
    UNAME[PS] = LAST[PS] ;
    
    PT=0;
    while(PT < USIZE && PT < strlen(LAST)+4) {
        for(PS=0; PS<4 && PS<strlen(LAST); PS++) {
            UNAME[PT] = LAST[PS]; 
            PT++;
        }
        for(PS=5; PS<SSNSIZE; PS++) {
            UNAME[PT] = SSN[PS];
            PT++;
        }
    }
    UNAME[PT] = '\0';
    
    PT=0;
    while(PT< PSIZE && PT< strlen(FIRST)+5)
    {
    for(PS=0; PS<5; PS++)
    {
    PWORD[PT] = SSN[PS]; 
    PT++;
    }
    for(PS=0; PS<4 && PS< strlen(FIRST); PS++)
    {
    PWORD[PT] = FIRST[PS];
    PT++;
    }
    }
    PWORD[PT] = '\0';
    
    cout<<"\nUsername: "<<UNAME<<endl;
    cout<<"Password: "<<PWORD<<endl;
    
    system("pause");
    return 0;
}
