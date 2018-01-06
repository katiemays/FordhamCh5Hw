// Katie Mays
// Nov. 16, 2017
// HW #8: converts 24 hr to 12 hr

#include <iostream>
using namespace std;

// prototype
void input (int& hour, int& min);
int conversion (int hour, char& type);
void output (int hour, int min, char type);

int main()
{
	// variables
	int hour, min;
	char type, rerun;
	do{
		input(hour, min);
		hour = conversion(hour, type);
		output (hour, min, type);

		cout << "Do you want to do another conversion? \n";
		cin  >> rerun;
	
	} while (rerun == 'y' || rerun == 'Y');

	return 0;
}

void input (int& hour, int& min)
{
	cout << "Enter hours in 24-hour notation (0-24) : ";
	cin  >> hour;
	cout << "             Enter the minutes (00-59) : ";
	cin  >> min;
}

int conversion (int hour, char& type)
{
	if (hour < 12)
		type = 'A';
	else
		type = 'P';

	if (hour == 0)
		hour = 12;

	return (hour < 13) ? hour : hour - 12;
}

void output (int hour, int min, char type)
{
	cout << "The time converted to 12-hour format is : " << hour << ":";
	cout.width(2);
	cout.fill('0');
	cout << min << " ";
	cout << ((type == 'A') ? "A.M." : "P.M.") << endl;
} 
