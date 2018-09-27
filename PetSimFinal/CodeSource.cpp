#include <iostream>
#include <string>
#include <ctime>
#include "Pet.h"
using namespace std;

string ChoicePet;
string PetName;
int PetType = 0;
enum PetType { START, DOG, CAT, HEDGEHOG, HORSE };


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


			if (ChoicePet.compare("Dog") == 0) {
				cout << "What is the name of your Dog?" << endl;
				getline(cin, PetName);
				Pet.InitDog(PetName);
				PetType = DOG;
			}
			break;
		case DOG:
			Pet.PrintInfo();
			system("pause");
			break;
		}//Switch
	}//while
	return 0;
}//Main
