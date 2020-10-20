/*

	Constructors
The ENGLOBJ example shows two ways that member functions can be used to give values to the
data items in an object. Sometimes, however, it’s convenient if an object can initialize itself
when it’s first created, without requiring a separate call to a member function. Automatic initialization is carried out using a special member function called a constructor. A constructor is a
member function that is executed automatically whenever an object is created. (The term constructor is sometimes abbreviated ctor, especially in comments in program listings.)

There are some unusual aspects of constructor functions. First, it is no accident that they have
exactly the same name (Counter in this example) as the class of which they are members. This
is one way the compiler knows they are constructors.

count()
{ count = 0; }
However, this is not the preferred approach (although it does work). Here’s how you should
initialize a data member:
count() : count(0)
{ }

If multiple members must be initialized, they’re separated by commas. The result is the initializer
list (sometimes called by other names, such as the member-initialization list).
someClass() : m1(7), m2(33), m2(4) ← initializer list
{ }


	*/

	// counter.cpp
	// object represents a counter variable
#include <iostream>
using namespace std;
////////////////////////////////////////////////////////////////
class Counter
{
private:
	unsigned int count; //count
public:
	Counter() : count(0) //constructor
	{ /*empty body*/
	}
	void inc_count() //increment count
	{
		count++;
	}
	int get_count() //return count
	{
		return count;
	}
};
////////////////////////////////////////////////////////////////
int main()
{
	Counter c1, c2; //define and initialize
	cout << "\nc1 =" << c1.get_count(); //display
	cout << "\nc2 = " << c2.get_count();
	c1.inc_count(); //increment c1
	c2.inc_count(); //increment c2
	c2.inc_count(); //increment c2
	cout << "\nc1 =" << c1.get_count(); //display again
	cout << "\nc2 =" << c2.get_count();
	cout << endl;
	return 0;
}