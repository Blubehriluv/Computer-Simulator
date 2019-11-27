#include <string>
#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include "Download.h"
#include "Time.h"
#include "stdint.h"
#include "cstdint"
#include "sstream"

//Makes input and output keywords easier and take less time to type.
using namespace std;

//This method displays all memory locations and values.
void DisplayMemory()
{
	cout << "***MEMORY DUMP***" << endl;
	cout << endl;

	//A counter to move through the array.
	int counter = 0;
	//A numbering counter for the print display.
	int numbering = 1;
	
	//A for loop runs through the memory locations and prints them.
	for (int sift = -1; sift < memory[counter]; sift++)
	{
		//Created a variable to hold the memory value for printing.
		int* holder = &memory[counter];
		cout << numbering << ": " << holder << endl;
		counter++;
		numbering++;
	}
	cout << "***MEMORY DUMP COMPLETE***" << endl;
	cout << endl;
	
	WaitResponse();
}

//This method allows the user to load a word into the program to begin.
void Load()
{
	//This prevents the user from loading further.
	if (stopLoading == true)
	{
		cout << "A word has been loaded." << endl;
		cout << "Please run the program." << endl;
		cout << endl;
		
		WaitResponse();
	}
	//If the value isn't zero, the zero needs to be loaded
	else if (zeroValue == true)
	{
		//The IP is set at 0 and prints this to the user.
		InstructPointer(true);
	}
	//The IP returns to let the method load the number.
	else if (zeroValue == false)
	{
		acc += 0;
		cout << "0 has been loaded into the accumulator." << endl;
		cout << endl;
		stopLoading = true;
		
		WaitResponse();
	}	
}

void Accumulator()
{
	
}

void Manipulator()
{
	//int* holder = &memory[globalCounter];
	uintptr_t holder = reinterpret_cast<uintptr_t>(&memory[globalCounter]);

	(void const)memory[globalCounter];
	ostringstream s;
	s << memory[globalCounter];
	ostringstream s2;
	static_cast<ostringstream&>(s2 << memory[globalCounter]).str();
	string please = static_cast<ostringstream&>(ostringstream().flush() << memory[globalCounter]).str();
	
	
	cout << "Converter is holding: " << please << endl;
	system("Pause");


	string help = "never";
	
	//for (int i = 0; i < help.length; i++)
	{
		
	}
	
	int selector = rand() % 5 + 1;

	if (selector == 1)
	{
		cout << "1 is chosen" << endl;
	}
	if (selector == 2)
	{
		cout << "2 is chosen" << endl;
	}
	if (selector == 3)
	{
		cout << "3 is chosen" << endl;
	}
	if (selector == 4)
	{
		cout << "4 is chosen" << endl;
	}
	if (selector == 5)
	{
		cout << "5 is chosen" << endl;
	}
}

//
void Run()
{
	Manipulator();
	do
	{
		if (acc == 0)
		{
			cout << "     Equal to 0!" << endl;
			
			Manipulator();
			
		}
		else if (acc < 150)
		{
			cout << "     Less than 150!" << endl;
			Manipulator();
		}
		else if (acc > 500)
		{
			cout << "     More than 500!" << endl;
			Manipulator();
		}
		else if (acc == 69)
		{
			cout << "     Equal to 69!" << endl;
			Manipulator();
		}
		else
		{
			cout << "" << endl;
			Manipulator();
		}
				
		InstructPointer(false);
		
	}while (globalCounter != 99);

	cout << "Run is complete." << endl;
	system("Pause");
}





//This method provides the user with a defined list of possible commands.
void Help()
{
	cout << "DisplayMem - Displays all memory locations and values or 'dump memory'" << endl;
	cout << "Load - Loads a program into memory" << endl;
	cout << "Run - Runs the program in memory" << endl;
	cout << "Help - Displays this help menu" << endl;
	cout << "Exit - Exits this shell" << endl;
	cout << endl;
	
	WaitResponse();
}