#pragma once

#include <string.h>
#include <iostream>

using namespace std;

class game{

private:
	string	name;
	float	value;
	int		hours;
	int		cost;
	void	calc();
public:
	game(const string& titulo, float value, int time);
	game(void);
	~game();
	const game& compare(const game& game) const;
	void	update(float value);
	void	play(int time);
	void	display() const;
};

inline	void	game::calc(){
	if (hours > 0)
		cost = value / hours;
}