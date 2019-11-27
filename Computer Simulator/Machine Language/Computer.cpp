#include <string>
#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include "Download.h"

//Makes input and output keywords easier and take less time to type.
using namespace std;

int memory[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25,26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99};
int acc;

void InstructPointer()
{
	//int arrayCounter;
	for (int counter = 0; counter < 100; counter++)
	{
		
	}
}

//Prints the command list and accepts input from the user.
void CommandList()
{
	//Command list to be printed
	cout << "***Command List***" << endl;
	cout << endl;
	cout << " - DisplayMem" << endl;
	cout << " - Load" << endl;
	cout << " - Run" << endl;
	cout << " - Help" << endl;
	cout << " - Exit" << endl;
	cout << endl;
	cout << "Ready?" << endl;
	cout << ">";

	//User input is accepted here.
	string userInput;
	cin >> userInput;
	cout << endl;

	//Changes the input to fully uppercase to be checked easier.
	transform(userInput.begin(), userInput.end(), userInput.begin(), ::toupper);
	
	if (userInput == "DISPLAYMEM")
	{
		DisplayMemory();
	}

	if (userInput == "LOAD")
	{
		cout << "This works.. " << userInput << endl;
		system("Pause");
	}

	if (userInput == "RUN")
	{
		cout << "This works.. " << userInput << endl;
		system("Pause");
	}

	if (userInput == "HELP")
	{
		cout << "This works.. " << userInput << endl;
		system("Pause");
	}

	if (userInput == "EXIT")
	{
		cout << "This works.. " << userInput << endl;
		system("Pause");
	}

	else
	{
		cout << "Please enter one of the commands" << endl;
		cout << endl;
		CommandList();
	}
}

//An opener to make the Computer seem more realistic.
void RunIntroduction()
{
	cout << "SuperSimple Operating System" << endl;
	cout << "Version 0.0.4.  Copyright by Taylor McKenzie" << endl;
	cout << endl;
	cout << endl;
	CommandList();
}

//The very beginning of the program.
int main()
{
	RunIntroduction();
}