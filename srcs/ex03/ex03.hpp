#pragma once
#include <string>
#include <iostream>

using namespace std;

class person
{
private:
	string	m_first_name;
	string	m_last_name;
	int		m_age;
public:
	person(string first_name, string last_name, int age);
	person();
	~person();
	void	details(void);
};


