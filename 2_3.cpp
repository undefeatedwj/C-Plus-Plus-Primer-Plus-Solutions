#include <iostream>

using namespace std;

void printMice();
void printRun();

int main()
{
	for(int i = 0; i < 2; i++)
	{
		printMice();
	}
	
	for(int i = 0; i < 2; i++)
	{
		printRun();
	}

	system("pause");
	return 0;
}

void printMice()
{
	cout << "Three blind mice" << endl;
}

void printRun()
{
	cout << "See how they run" << endl;
}