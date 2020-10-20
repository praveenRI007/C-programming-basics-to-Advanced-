/*
Like constructors, destructors do not have a return value. They also take no arguments (the
assumption being that there’s only one way to destroy an object).
The most common use of destructors is to deallocate memory that was allocated for the object
by the constructor.
 We’ll investigate these activities in Chapter 10, "Pointers.” Until then we
won’t have much use for destructors.


Since there are now two explicit constructors with the same name, Distance(), we say the
constructor is overloaded. Which of the two constructors is executed when an object is created
depends on how many arguments are used in the definition:
Distance length; // calls first constructor
Distance width(11, 6.0); // calls second constructor
*/
// englcon.cpp
// constructors, adds objects using member function
#include <iostream>
using namespace std;
////////////////////////////////////////////////////////////////
class Distance //English Distance class
{
private:
	int feet;
	float inches;
public: //constructor (no args)
	Distance() : feet(0), inches(0.0)
	{ }
	//constructor (two args)
	Distance(int ft, float in) : feet(ft), inches(in)
	{ }
	void getdist() //get length from user
	{
		cout << "\nEnter feet : "; cin >> feet;
		cout << "Enter inches : "; cin >> inches;
	}
	void showdist() //display distance
	{
		cout << feet << "\' -" << inches << '\"';
	}
	void add_dist(Distance, Distance); //declaration
};
//--------------------------------------------------------------
//add lengths d2 and d3
void Distance::add_dist(Distance d2, Distance d3)
{
	inches = d2.inches + d3.inches; //add the inches
	feet = 0; //(for possible carry)
	if (inches >= 12.0) //if total exceeds 12.0,
	{ //then decrease inches
		inches -= 12.0; //by 12.0 and
		feet++; //increase feet
	} //by 1
	feet += d2.feet + d3.feet; //add the feet
}
////////////////////////////////////////////////////////////////
int main()
{
	Distance dist1, dist3; //define two lengths
	Distance dist2(11, 6.25); //define and initialize dist2
	dist1.getdist(); //get dist1 from user
	dist3.add_dist(dist1, dist2); //dist3 = dist1 + dist2
	//display all lengths
	cout << "\ndist1 = "; dist1.showdist();
	cout << "\ndist2 = "; dist2.showdist();
	cout << "\ndist3 = "; dist3.showdist();
	cout << endl;
	return 0;
}