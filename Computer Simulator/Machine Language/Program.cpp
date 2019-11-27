#include <string>
#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include "Download.h"

//Makes input and output keywords easier and take less time to type.
using namespace std;

void DisplayMemory()
{
	cout << "***MEMORY DUMP***" << endl;
	cout << endl;
	int counter = 0;
	int numbering = 1;
	int* holder;
	
	for (int sift = -1; sift < memory[counter]; sift++)
	{
		holder = &memory[counter];
		cout << numbering << ": " << holder << endl;
		counter++;
		numbering++;
	}
	cout << "***MEMORY DUMP COMPLETE***" << endl;
	cout << endl;
}
