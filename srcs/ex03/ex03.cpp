#include "ex03.hpp"

person::person(string first_name, string last_name, int age)
{
	m_first_name = first_name;
	m_last_name = last_name;
	m_age = age;
}

person::person()
{
	m_first_name = "default";
	m_last_name = "default";
	m_age = 100;
}

person::~person()
{
	
}

void	person::details(void)
{
	cout << "First name: " << m_first_name << endl
	<< "Last_name: " << m_last_name << endl
	<< "Age: " << m_age << endl;
}
