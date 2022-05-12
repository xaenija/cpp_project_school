#pragma once
#include <string>
#include <iostream>
#include "character.h"
#include "student.h"
#include "director.h"
using namespace std;

class Teacher :public Character
{
	string subject;
	class Student* st;
	class Director* direct;

public:
	Teacher();
	void teach();
	string info();
	void hello_director();
	void Get_student(Student*);
	void Get_director(Director*);
};