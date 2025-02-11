#include "../../cpp00.hpp"

using namespace std;

int main(void)
{
	Dog Bruce;
	cout << "What is your pet name? ";
	cin >> Bruce.name;
	cout << "What is your pet age? ";
	cin >> Bruce.age;
	cout << "What is your pet race? ";
	cin >> Bruce.race;

	cout << "\nYour pet is named: " << Bruce.name << endl;
	cout << "Your pet is: " << Bruce.age << endl;
	cout << "Your pet is: " << Bruce.race << endl;

	cout << "\n--- Select an option ---\n";
	cout << "(1) - Photo\n" << "(2) - bark\n" << "(3) - sleep\n\n\n";
	int option;
	cin >> option;
	switch (option)
	{
	case 1:
		Bruce.photo();
		break;
	case 2:
		Bruce.bark();
		break;
	default:
		Bruce.sleep();
	}
	return 0;
}
