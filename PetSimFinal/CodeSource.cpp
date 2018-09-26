#include <iostream>
#include <String>
#include "Pet.h"
using namespace std;

char ChoicePet;
string PetName;
int PetType = 0;
enum PetType { START, DOG, CAT, HEDGEHOG, HORSE };


int main() {
	Dog Pet;


	//cout << "Your pet " << Name << " Has been adpoted by you!" << endl;
	//cout << "Coungraluation" << endl;

	switch (PetType) {
	case START:
		cout << "Welcome to Pet Sim!" << endl;
		cout << "What pet do you want?" << endl;
		cout << "Dog(D)?" << endl;
		cin >> ChoicePet;

		
		if (ChoicePet == 'D') {
			cout << "What is the name of your Dog?" << endl;
			//getline(cin, PetName);
			//cin >> PetName;
			
			Pet.InitDog(PetName);
			PetType = DOG;
			cout << "flag1";
		}
		break;
	case DOG:
		Pet.PrintInfo();
		system("pause");
		break;
	}//Switch
	return 0;
}//Main