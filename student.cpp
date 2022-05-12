#include "student.h"

Student::Student()
{
	grade = 3;
	group = 2;
	name = "Nikolai";
	age = 12;
	knowledge = 5;
	direct = nullptr;



}

void Student::Get_director(Director* getDirector)
{
	direct = getDirector;
}


void Student::learn()
{
	if (knowledge < 10)
		knowledge += 1;
	cout << "Student: Now my knowledge is " << knowledge << " !\n";
}

void Student::answer()
{
	if (knowledge > 5)
	{
		if (grade < 5)
		{
			grade += 1;
		}
		cout << "Student: Right answer \n";
		direct->change_mood_good();

	}
	else
	{

		if (grade > 1)
		{
			grade -= 1;
		}
		cout << "Student: Wrong answer \n";
		direct->change_mood_bad();
	}

	cout << "Student: Now my grade is " << to_string(grade);
}

string Student::info()
{
	string s;
	s += "Student: my name is "; s += name; s += "\n";
	s += "I am "; s += to_string(age); s += " years old."; s += "\n";
	s += "My grade is "; s += to_string(grade); s += "\n";
	return s;
}