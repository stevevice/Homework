#include<iostream>

using namespace std;

int main()
{
	char name[3][20];
	int i, j;

		for (int i = 1; i < 3; i++)
	{
		char names[20];

		cout << "Enter your name. ";
		cin.getline(names, 20);

		for (j = 0; j < 20; j++)
		{
			name[i][j]= names[j];
		}
	}
	for (int i = 1; i < 3; i++)
	{
		cout << "Name: ";
		for (j = strlen(name[i]); j >= 0; j--)
		{
		cout << name[i][j];
		}
		cout << endl;
	}
	system("pause");
	return 0;
}








/*if (i = 1)
{
	char name[20];
	cout << "Enter your First Name \n";
	cin.getline(name, 20);
}

else
{
	char name[20];
	cout << "Enter your Last Name \n";
	cin.getline(name, 20);
}*/