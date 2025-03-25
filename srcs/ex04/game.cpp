#include "game.hpp"

game::game(const string& name, float value, int hours)
{
	this->name	= name;
	this->value		= value;
	this->hours		= hours;
	this->cost		= 0;
}

game::game(void)
{
	this->name	= "default";
	this->hours		= 0;
	this->value		= 0;
	this->cost		= 0;
}

game::~game(){}

const game& game::compare(const game& game) const
{
	if (game.hours > hours)
		return game;
	return *this;
}

void	game::update(float value){
	cost = value;
	calc();
}

void	game::play(int time){
	hours += time;
	calc();
}

void	game::display()const{
	cout << fixed;
	cout.precision(2);

	cout << name << " R$"
	<< cost << " "
	<< hours << "h = R$"
	<< cost << "/h\n";
}
