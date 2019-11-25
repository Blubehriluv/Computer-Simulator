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
	
	for (int sift = 0; 0 < memory[counter]; sift++)
	{
		cout << sift << ": " << memory[counter] << endl;
	}

}
