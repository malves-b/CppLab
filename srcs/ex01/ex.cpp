#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main(void)
{
	int days;
	cout << setw(5) << "Number of days: ";

	cin >> days; //read a value to the variable

	int hours = days * 24;
	cout << days << " days have " << hours << " hours" << endl;
	// system("pause");
	return (0);
}