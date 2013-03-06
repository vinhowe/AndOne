#include "stdafx.h"
#include <windows.h>
#include <fstream>
#include <string>
#include <random>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

// Random number game

int randnum()
{
int input = 0; //The number the user inputs to.
srand(GetTickCount()); // Seeds rand to a millisecond resolution 
int hiddennum = rand() % 100 + 1; // Initializes the hidden number

while(input != hiddennum) {
	input = 0;
cout << "What's the number? " << endl; // Asks the random number
cin >> input; // Lets the user input their guess
if (input == hiddennum) // In the case that the guess matches the hidden number
{
	cout << "Congratulations! You've got it!" << endl; // Feedback to congratulate the user
}
else // If it doesn't match, this is the handler
{
	if (input > hiddennum) // Answer is lower
	{
		cout << "Nope, Lower!" << endl;
}
	else if (input < hiddennum) // Answer is higher
	{
	cout << "Nope, Higher!" << endl;
	}
	continue; // Restarts the loop
    }
  }
return 0;
}



int ask()
{
string name; // Name string.
int age; // Age integer.
string school; // School string.
string grade; // Grade (Level of school) string.
string favcolor; // Favorite color string.
string inquirylocation; // Location at time of inquiry string.
string birthlocation; // Location the user was born string.
string homelocation; // Location of the user's home string.
string passwrd; // User's Windows password string.
ifstream in("DataSheet.txt"); // File the inquiry will read from.
ofstream out("Datasheet.txt"); // File the inquiry will write to.

//Asks the user's name:

cout  << "Hello, What's your name? "; //Initial prompt.
cin >> name; //Actually collects the info.
out << "Name: " << name << endl; //Spits it into DataSheet.
cout << name << " is my name!" << endl; //Gives the illusion of commonness and friendliness.

//Asks how old the user is:

cout  << "How old are you? ";
cin >> age;
out  << "Age: " << age << endl;
cout << "Oh, I'm " << age << " also!" << endl;

//Asks the name of the school the user attends:

cout  << "What school do you go to? ";
cin >> school;
out << "School: " << school << endl;
cout << "I go there too!" << endl;

//Asks the school level of the user:

cout  << "What level of school are you in? ";
getline(std::cin, grade);
out << "School level: " << grade << endl;
cout << "Same here. :)" << endl;

cout  << "What's your favorite color? ";
cin >> favcolor;
out << "Favorite color: " << favcolor << endl;
   for(unsigned int i=0;i<favcolor.length();i++) // This process capitalizes the string.
   {
      favcolor[i] = toupper(favcolor[i]);
   }
cout << "I ABSOLUTLEY LOVE " << favcolor << endl; // Outputs the capitalized string.

//Asks the user's location at the date of the inquiry:

cout  << "Where are you at the moment? ";
getline(std::cin, inquirylocation); // New method is used here, The entire line is collected.
out << "Location on inquiry date: " << inquirylocation << endl;
cout << "I'd like to be anywhere but stuck in this binary" << endl;


//Asks the user's birth location:

cout  << "Where were you born? ";
getline(std::cin, birthlocation); 
out << "Birth location: " << birthlocation << endl;
cout << "I was born there too!" << endl;

//Asks the user's home location:

cout  << "Where do you live? ";
getline(std::cin, homelocation); 
out << "Home location: " << homelocation << endl;
cout << "I live here >> :/ <<" << endl;


//Asks the user's Windows account password:

cout  << "What's your Windows password? ";
//Disables echo output, enabling the user to write their password without anyone seeing. 
HANDLE hStdin = GetStdHandle(STD_INPUT_HANDLE);
DWORD mode = 0;
GetConsoleMode(hStdin, &mode);
SetConsoleMode(hStdin, mode & (~ENABLE_ECHO_INPUT));
cin >> passwrd; // Asks the password with the now disabled echo text.
SetConsoleMode(hStdin, mode);
out << "Password: " << passwrd << endl;
cout << endl << "Hehe. We have so much in common. Hehe" << endl;

//Wraps the inquiry up:

Sleep(2000);
system("cls");
cout << "Well, Goodbye!" << endl;
system("pause");
return 0;
}

int vectors()
{
	int pi2;
	int* pi1 = &pi2;
vector<int> v1;
for(int i1 = 0; i1 <= 50000; i1++)
{
		v1.push_back(i1);
		pi1 = &i1;
		cout << v1[i1] << endl;
}
	system("pause");
	cout << *pi1 << endl;
	return *pi1;
} 

int main()
{
	vectors();
	return 0;
}


