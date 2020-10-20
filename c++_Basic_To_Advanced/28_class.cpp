// smallobj.cpp
// demonstrates a small, simple object
#include <iostream>
using namespace std;
////////////////////////////////////////////////////////////////
class smallobj //define a class
{
private:
	int somedata; //class data
public:
	void setdata(int d) //member function to set data
	{
		somedata = d;
	}
	void showdata() //member function to display data
	{
		cout << "Data is " << somedata << endl;
	}
};
////////////////////////////////////////////////////////////////
int main()
{
	smallobj s1, s2; //define two objects of class smallobj
	s1.setdata(1066); //call member function to set data
	s2.setdata(1776);
	s1.showdata(); //call member function to display data
	s2.showdata();
	return 0;
}
/*
private and public
The body of the class contains two unfamiliar keywords: private and public. What is their
purpose?
A key feature of object-oriented programming is data hiding. This term does not refer to the
activities of particularly paranoid programmers; rather it means that data is concealed within a
class so that it cannot be accessed mistakenly by functions outside the class. The primary
mechanism for hiding data is to put it in a class and make it private. Private data or functions
can only be accessed from within the class. Public data or functions, on the other hand, are
accessible from outside the class. 

Functions Are Public, Data Is Private
Usually the data within a class is private and the functions are public. This is a result of the
way classes are used. The data is hidden so it will be safe from accidental manipulation, while
the functions that operate on the data are public so they can be accessed from outside the class.
However, there is no rule that says data must be private and functions public; in some circumstances you may find you’ll need to use private functions and public data.

Defining an object is similar to
defining a variable of any data type: Space is set aside for it in memory

Defining objects in this way means creating them. This is also called instantiating them. The
term instantiating arises because an instance of the class is created. An object is an instance
(that is, a specific example) of a class. Objects are sometimes called instance variables.

 Member functions of a class can be accessed only by an object of that class

 (The dot operator is also called the class member access operator.)




*/