#include <iostream>

using namespace std;

int main()
{
	char names[6][50];
	int i, j; 
	
	for (int i = 1; i < 6; i++)
	{
		char name[50];
		
		cout << "Enter name of the person " << i << endl;
		cin.getline(name, 100);

		for (j = 0; j < 50; j++)
		{
			names[i][j] = name[j];
		}
	}

	for (i = 1; i <= 5; i++)
	{
		cout << "Name " << i << ": ";
		for (j = strlen(names[i]); j >= 0; j--)
		{
			cout << names[i][j];
		}
		cout << endl;
	}
	system("pause");
	return 0;

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	/*//set max number of names to enter
	const int numNames = 6;
	//setup the 2d array that will store names
	char names[numNames][100];

	//loop through input and populate the array
	for (int i = 1; i < numNames; i++)
	{
		char name[100];
		cout << "Enter name of person " << i << endl;
		//this will get all of the characters up to the carriage return key.
		//it will get the space which if you enter both a first and last name
		//will be needed
		cin.getline(name, 100);
		for (int j = 0; j < 100; j++)
		{
			names[i][j] = name[j];
		}
	}
	//loop through the input and print
	for (int i = 1; i <= 5; i++)
	{
		cout << "Name " << i << ": ";
		for (int j = strlen(names[i]); j >= 0; j--)
		{
			cout << names[i][j];
		}
		cout << endl;
	}
	system("pause");
	return 0;*/
}