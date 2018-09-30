#include "Pet.h"
/////////////////////////////////////////////////////////////////////////////////
void Pet::Feed() {
	Hunger -= rand() % 20;
}
void  Pet::Play() {
	Bored -= rand() % 20;
}
void  Pet::Clean() {
	Cleanliness += rand() % 20;
}
void  Pet::Water() {
	Thirst -= rand() % 20;
}
void  Pet::Bathroom() {
	PeepPoop -= rand() % 20;
}
void  Pet::Medicine() {
	Health += rand() % 20;
}
void  Pet::PrintInfo() {
	cout << "Your pet " << Name << "'s stats:" << endl;
	cout << "The hunger level is " << Hunger << endl;
	cout << "The level of cleanliness is " << Cleanliness << endl;
	cout << "The level of thirst is " << Thirst << endl;
	cout << "The need to go to the bathroom is " << PeepPoop << endl;
	cout << "The overall health of your pet is " << Health << endl;
}
void Pet::Restrictions() {
	////////////////////
	if (Hunger < 0) {
		Hunger = 0;
	}
	if (Hunger > 100) {
		Hunger = 100;
	}
	////////////////////
	if (Bored < 0) {
		Bored = 0;
	}
	if (Bored > 100) {
		Bored = 100;
	}
	////////////////////
	if (Cleanliness < 0) {
		Cleanliness = 0;
	}
	if (Cleanliness > 100) {
		Cleanliness = 100;
	}
	////////////////////
	if (Thirst < 0) {
		Thirst = 0;
	}
	if (Thirst > 100) {
		Thirst = 100;
	}
	////////////////////
	if (PeepPoop < 0) {
		PeepPoop = 0;
	}
	if (PeepPoop > 100) {
		PeepPoop = 100;
	}
	////////////////////
	if (Health < 0) {
		Health = 0;
	}
	if (Health > 100) {
		Health = 100;
	}
}
void Pet::GoDown() {
	int Decision;
	////////////////////
	Decision = rand() % 2;
	if (Decision == 0) {
		Hunger += rand() % 10;
	}
	////////////////////
	Decision = rand() % 2;
	if (Decision == 0) {
		Bored += rand() % 10;
	}
	////////////////////
	Decision = rand() % 2;
	if (Decision == 0) {
			Cleanliness -= rand() % 10;
	}
	////////////////////
	Decision = rand() % 2;
	if (Decision == 0) {
		Thirst += rand() % 10;
	}
	////////////////////
	Decision = rand() % 2;
	if (Decision == 0) {
		PeepPoop += rand() % 10;
	}
}
void Pet::Die() {
	/*	Hunger -= rand() % 20;
	Bored -= rand() % 20;
	Cleanliness += rand() % 20;
	Thirst -= rand() % 20;
	PeepPoop -= rand() % 20;
	Health += rand() % 20;
	*/
	////////////////////
	if (Hunger > 90) {
		Health -= 10 ; 
	}
	else if (Hunger < 89 && Hunger > 50) {
		Health -= 5;
	}
	////////////////////
	if (Bored > 90) {
		Health -= 5;
	}
	else if (Bored < 89 && Bored > 50) {
		Health -= 2;
	}
	////////////////////
	if (Cleanliness < 10) {
		Health -= 10;
	}
	else if (Cleanliness < 50 && Cleanliness > 11) {
		Health -= 2;
	}
	////////////////////
	if (Thirst > 90) {
		Health -= 10;
	}
	else if (Thirst < 89 && Thirst > 50) {
		Health -= 5;
	}
	////////////////////
	if (PeepPoop > 90) {
		Health -= 5;
	}
	else if (Bored < 89 && Bored > 50) {
		Health -= 2;
	}
	if (Health < 0 || Health == 0) {
		cout << "Your Pet Health Reached Under 0" << endl;
		cout << "Game Over" << endl;
		system("pause");
		exit(0);
	}
	////////////////////
}
/////////////////////////////////////////////////////////////////////////////////
void Dog::InitDog(string N) {
	Hunger = rand() % 25;
	Bored = rand() % 25;
	Cleanliness = rand() % 50 + 50;
	Thirst = rand() % 25;
	PeepPoop = rand() % 25;
	Health = 90;
	Name = N;
}

void Dog::PrintInfo() {
	cout << "Your pet " << Name << "'s stats:" << endl;
	cout << "The hunger level is " << Hunger << endl;
	cout << "The boredom level is " << Bored << endl;
	cout << "The level of cleanliness is " << Cleanliness << endl;
	cout << "The level of thirst is " << Thirst << endl;
	cout << "The need to go to the bathroom is " << PeepPoop << endl;
	cout << "The overall health of your pet is " << Health << endl;
}
/////////////////////////////////////////////////////////////////////////////////
/*	Hunger -= rand() % 20;
	Bored -= rand() % 20;
	Cleanliness += rand() % 20;
	Thirst -= rand() % 20;
	PeepPoop -= rand() % 20;
	Health += rand() % 20;
*/
