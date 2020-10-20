/*
const Objects
In several example programs, we’ve seen that we can apply const to variables of basic types
such as int to keep them from being modified. In a similar way, we can apply const to objects
of classes. When an object is declared as const, you can’t modify it. It follows that you can
use only const member functions with it, because they’re the only ones that guarantee not to
modify it. The CONSTOBJ program shows an example.

*/
// constObj.cpp
// constant Distance objects
#include <iostream>
using namespace std;
////////////////////////////////////////////////////////////////
class Distance //English Distance class
{
private:
	int feet;
	float inches;
public: //2-arg constructor
	Distance(int ft, float in) : feet(ft), inches(in)
	{ }
	void getdist() //user input; non-const func
	{
		cout << '\nEnter feet : '; cin >> feet;
		cout << 'Enter inches : '; cin >> inches;
	}
	void showdist() const //display distance; const func
	{
		cout << feet << '\' - ' << inches << '\'';
	}
};
////////////////////////////////////////////////////////////////
int main()
{
	const Distance football(300, 0);
	// football.getdist(); //ERROR: getdist() not const
	cout << 'football = ';
	football.showdist(); //OK
	cout << endl;
	return 0;
}