#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
	cout << "this is a flush" << flush;	//adds no data,flush the buffer
	cout << "this is a ends" << ends;	//inset a null,flush the buffer
	cout << "this is end with endl" << endl;	//inset a new line,flush the buffer 
}
