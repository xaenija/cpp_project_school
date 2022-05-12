#include <iostream>
#include <string>
#include "character.h"
#include "director.h"
#include "dog.h"
#include "student.h"
#include "teacher.h"
using namespace std;

void enter()
{
	if (cin.get() == '\n')
	{
		cout << "" << endl;
	}
}

int main()
{
	//#ifdef _DEBUG
	//	FILE* IN, * OUT;
	//	freopen_s(&IN, "input.txt", "r", stdin);
	//	freopen_s(&OUT, "output.txt", "w", stdout);
	//#endif
	Teacher teacher;
	Student student;
	Director director;
	Dog dog;
	teacher.Get_director(&director);
	teacher.Get_student(&student);
	dog.Get_director(&director);
	student.Get_director(&director);
	int n;
	int tries;



	cout << "This is a schol simulator. The point of this game is to get the Director in a good mood, which means it is > 5!";
	enter();
	cout << "If the director fires the teacher you LOSE.";
	enter();


	cout << "Now meet the people at the school!";
	enter();
	cout << student.info(); 
	enter();
	cout << teacher.info();
	enter();
	cout << director.info();
	enter();
	dog.bark_or_bite(6);
	enter();


	cout << "Please enter how many tries you would like to have!";
	cin >> tries;

	cout << "What do you want to do?";
	cout << "(1) Teacher: I will teach!";
	cout << "(2) Student: I will answer!";
	cout << "(3) Director: I will pet the dog!";
	cout << "(4) Dog: Bark!";



	while (tries > 0)
	{
		cin >> n;
		if (n == 1)
		{
			teacher.teach();

		}

		if (n == 2)
		{
			student.answer();
		}


		if (n == 3)
		{
			director.pet_dog();
		}

		if (n == 4)
		{
			cout << "\nChoose a number between 1 and 10!\n";
			int a;
			cin >> a;
			dog.bark_or_bite(a);
		}
		--tries;
	}
	enter();



	cout << "\nSometime later the teacher meets the director in the hallway...";
	enter();


	cout << "\nTeacher: I will greet the Director.";
	enter();

	teacher.hello_director();

	enter();


}