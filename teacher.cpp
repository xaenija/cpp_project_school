#include "teacher.h"

Teacher::Teacher()
{
		subject = "Maths";
		name = "Victor";
		age = 32;
		knowledge = 9;
		st = nullptr;
		direct = nullptr;

}


	void Teacher::Get_student(Student* getStudent)
	{
		st = getStudent;
	}

	void Teacher::teach()
	{
		cout << "Teacher: 2+2=4\n";
		st->learn();
	}

	void Teacher::Get_director(Director* getDirector)
	{
		direct = getDirector;
	}


	string Teacher::info()
	{
		string s;
		s += "Teacher: my name is "; s += name; s += "\n";
		s += "I am "; s += to_string(age); s += " years old."; s += "\n";
		s += "I teach "; s += subject; s += "\n";
		return s;
	}

	void Teacher::hello_director()
	{

		cout << "Teacher: Good morning \n";
		direct->fire_teacher();
		

	}