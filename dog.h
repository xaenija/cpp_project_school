#pragma once
#include <string>
#include <iostream>
#include "director.h"
using namespace std;

class Dog
{
	string type;
	class Director* direct;
public:
	Dog();
	void bark_or_bite(int mood);
	void Get_director(Director*);
};