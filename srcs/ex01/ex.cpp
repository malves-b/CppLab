#include <iostream>
#include <cstdlib>

using namespace std;

int main(void)
{
	int days;
	cout << "Number of days: ";

	cin >> days; //read a value to the variable

	int hours = days * 24;
	cout << days << " days have " << hours << " hours" << endl;
	// system("pause");
	return (0);
}