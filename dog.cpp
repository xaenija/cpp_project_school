#include "dog.h"


Dog::Dog()
{
	type = "Dog";
	direct = nullptr;
}

void Dog::Get_director(Director* getDirector)
{
	direct = getDirector;
}


void Dog::bark_or_bite(int mood)
{
	if (mood < 5)
	{
		cout << "Dog: RRR! \n";
		cout << "Director: SHIT! \n";
		direct->change_mood_bad();
	}
	else
		cout << "Dog: Bark! \n";

}