#pragma once
#include <string>
#include <iostream>
#include "character.h"
#include "director.h"

using namespace std;
class Student :public Character
{
	int grade;
	int group;
	class Director* direct;



public:
	Student();

	void learn();

	void answer();
	string info();
	void Get_director(Director*);


};