#include <iostream>
#include <string>
#include <ctime>
#include "Pet.h"
using namespace std;

string ChoicePet;
string PetName;
string AreYouSureAnswer;
string WhatTheyWantToDo;
int PetType = 0;
enum PetType { START, AreYouSure, DOG, CAT, HEDGEHOG, HORSE };


int main() {
	Dog Pet;
	srand(time(NULL));

	//cout << "Your pet " << Name << " Has been adpoted by you!" << endl;
	//cout << "Coungraluation" << endl;
	while (1) {
		switch (PetType) {
		case START:
			cout << "Welcome to Pet Sim!" << endl;
			cout << "What pet do you want?" << endl;
			cout << "Dog(D)?" << endl;
			getline(cin, ChoicePet);


			if (ChoicePet.compare("Dog") == 0 || ChoicePet.compare("dog") == 0 || ChoicePet.compare("D") == 0 || ChoicePet.compare("d") == 0) {
				cout << "What is the name of your Dog?" << endl;
				getline(cin, PetName);
				PetType = AreYouSure;
			}
			else {
				cout << "Invalid" << endl;
			}
			break;
		case AreYouSure:
			cout << "Are you sure you want " << PetName << " as your pet?" << endl;
			cout << "Yes or No?" << endl;
			getline(cin, AreYouSureAnswer);
			if (AreYouSureAnswer.compare("Yes") == 0 || AreYouSureAnswer.compare("yes") == 0 || AreYouSureAnswer.compare("Y") == 0 || AreYouSureAnswer.compare("y") == 0) {
				PetType = DOG;
				Pet.InitDog(PetName);
			}
			else if (AreYouSureAnswer.compare("No") == 0 || AreYouSureAnswer.compare("no") == 0 || AreYouSureAnswer.compare("N") == 0 || AreYouSureAnswer.compare("n") == 0) {
				PetType = START;
			}
			else {
				cout << "Invalid" << endl;
			}
			break;
		case DOG:
			Pet.PrintInfo();
			cout << "What Do You want to do?" << endl;
			cout << "Feed?" << endl;
			cout << "Play?" << endl;
			cout << "Clean?" << endl;
			cout << "Water" << endl;
			cout << "Bathroom?" << endl;
			cout << "Medicine?" << endl;
			getline(cin, WhatTheyWantToDo);
			if (WhatTheyWantToDo.compare("Feed") == 0) {
				Pet.Feed();
				//Pet.Restrictions();
				//Pet.GoDown();
				//Pet.Die();
			}
			else if (WhatTheyWantToDo.compare("Play") == 0) {
				Pet.Play();
				//Pet.Restrictions();
				//Pet.GoDown();
				//Pet.Die();
			}
			else if (WhatTheyWantToDo.compare("Clean") == 0) {
				Pet.Clean();
				//Pet.Restrictions();
				//Pet.GoDown();
				//Pet.Die();
			}
			else if (WhatTheyWantToDo.compare("Water") == 0) {
				Pet.Water();
				//Pet.Restrictions();
				//Pet.GoDown();
				//Pet.Die();
			}
			else if (WhatTheyWantToDo.compare("Bathroom") == 0) {
				Pet.Bathroom();
				//Pet.Restrictions();
				//Pet.GoDown();
				//Pet.Die();
			}
			else if (WhatTheyWantToDo.compare("Medicine") == 0) {
				Pet.Medicine();
				//Pet.Restrictions();
				//Pet.GoDown();
				//Pet.Die();
			}
			else {
				cout << "Invalid" << endl;
			}
			cout << "=================================================================================" << endl;
			Pet.Restrictions();
			Pet.GoDown();
			//system("pause");
			break;
		}//Switch
	}//while
	return 0;
}//Main
