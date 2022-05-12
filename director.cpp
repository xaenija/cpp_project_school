#include "director.h"

Director::Director()
{
	director_mood = 2;
	name = "Ivan";
	age = 55;
	knowledge = 10;


}

void Director::change_mood_bad()
{
	director_mood -= 1;
	cout << "Director: Now my mood is: " << director_mood << "\n";
}

void Director::pet_dog()
{
	cout << "Director: Good Boy!\n";
	director_mood += 1;
	cout << "Now my mood is: " << director_mood << "\n";

}

void Director::change_mood_good()
{
	cout << "Director: Great answer!\n";
	director_mood += 1;
	cout << "Now my mood is: " << director_mood << "\n";

}

void Director::fire_teacher()
{
	if (director_mood < 5)
	{
		cout << "Director: You are fired! \n";
		cout << "";
		cout << "\nYOU LOSE\n";

	}
	else
	{
		cout << "Director: Have a good day. \n";
		cout << "";
		cout << "\nYOU WIN\n";

	}




}


string Director::info()
{
	string s;
	s += "Director: my name is "; s += name; s += "\n";
	s += "I am "; s += to_string(age); s += " years old."; s += "\n";
	s += "My mood is "; s += to_string(director_mood); s += "\n";
	return s;
}