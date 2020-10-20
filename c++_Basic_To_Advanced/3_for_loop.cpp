#include<iostream>
#include <iomanip> //for setw
#define INT int
using namespace std;
int main()
{
	INT numb; //define loop variable
	for (numb = 1; numb <= 10; numb++) //loop from 1 to 10
	{
		cout <<setw(4)<< numb; //display 1st column
		INT cube = numb * numb * numb; //calculate cube
		cout <<setw(6)<< cube << endl; //display 2nd column
		#include "endBrace.h"
		cin.get();
	return 0;
	#include "endBrace.h"