/*
// arrnote.cpp
// array accessed with array notation
#include <iostream>
using namespace std;
int main()
{ //array
   int intarray[5] = { 31, 54, 77, 52, 93 };
   for(int j=0; j<5; j++) //for each element,
     cout << intarray[j] << endl; //print value
   return 0;
}
*/
// ptrnote.cpp
// array accessed with pointer notation
#include <iostream>
using namespace std;
int main()
{ //array
    int intarray[5] = { 31, 54, 77, 52, 93 };
    for (int j = 0; j < 5; j++) //for each element,
        cout << *(intarray + j) << endl; //print value
    return 0;
}
/*
 expression *(intarray+j) in PTRNOTE has exactly the same effect as intarray[j] in
ARRNOTE, and the output of the programs is identical

The C++ compiler is smart enough to take the size of the data into account when it performs
arithmetic on data addresses. It knows that intarray is an array of type int because it was
declared that way. So when it sees the expression intarray+3, it interprets it as the address of
the fourth integer in intarray, not the fourth byte
*/

