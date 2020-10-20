/*

Suppose you want to pass an argument by reference for efficiency, but not only do you want
the function not to modify it, you want a guarantee that the function cannot modify it.

*/
//constarg.cpp
//demonstrates constant function arguments
void aFunc(int& a, const int& b); //declaration
int main()
{
	int alpha = 7;
	int beta = 11;
	aFunc(alpha, beta);
	return 0;
}
//--------------------------------------------------------------
void aFunc(int& a, const int& b) //definition
{
	a = 107; //OK
	b = 111; //error: can’t modify constant argument
}