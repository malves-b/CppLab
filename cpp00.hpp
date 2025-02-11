#include <iostream>
#include <string>

using namespace std;

class Dog{
	public:
		Dog() : name(""), race(""), age(1), damage(5) {}

		int	cast_spell()
		{
			return damage;
		}

		void sleep()
		{
			cout << "\nzzZZzz\n\n";
		}

		void photo()
		{
			cout <<	"    / \\__\n";
			cout << "   (    @\\_____\n";
			cout << "   /         O\n";
			cout << "  /   (_____/\n";
			cout << " /_____/   U\n\n";
		}

		void bark()
		{
			cout << "Au au Au\n";
		}
		string name;
		string race;
		int age;
	private:
		int damage;
};
