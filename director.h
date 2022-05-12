#pragma once
#include <string>
#include <iostream>
#include "character.h"
using namespace std;

class Director :public Character
{
	int director_mood;

public:
	Director();
	void change_mood_bad();
	void pet_dog();
	void fire_teacher();
	void change_mood_good();
	string info();

};