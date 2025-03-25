#include "game.hpp"

int main(void)
{
	game colection[3] = 
	{
		game {"GTA", 90.0f, 30},
		game {"Doom", 60.0f, 120},
		game {"GOW", 80.0f, 40},
	};

	cout << "ALL GAMES:\n";
	for (short i = 0; i < 3; i++)
		colection[i].display();
	
	const	game* top= &colection[0];

	colection[0].play(200);
	
	for (short i = 0; i < 3; i++)
		top = &top->compare(colection[i]);
	
	
	cout << "Game more played:\n";
	top->display();
}
