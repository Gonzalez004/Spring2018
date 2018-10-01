#include "Pet.h"
/////////////////////////////////////////////////////////////////////////////////
void Pet::Feed() {
	HighScore =HighScore+1;
	Hunger -= rand() % 20;
}
void  Pet::Play() {
	HighScore = HighScore + 1;
	Bored -= rand() % 20;
}
void  Pet::Clean() {
	HighScore = HighScore + 1;
	Dirty -= rand() % 20;
}
void  Pet::Water() {
	HighScore = HighScore + 1;
	Thirst -= rand() % 20;
}
void  Pet::Bathroom() {
	HighScore = HighScore + 1;
	PeepPoop -= rand() % 20;
}
void  Pet::Medicine() {
	HighScore = HighScore + 1;
	Health += rand() % 20;
}
void  Pet::PrintInfo() {
	cout << "Your pet " << Name << "'s stats:" << endl;
	cout << "The hunger level is " << Hunger << endl;
	cout << "The boredness level is " << Bored << endl;
	cout << "The dirty level is " << Dirty << endl;
	cout << "The thirst level is " << Thirst << endl;
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
	if (Dirty < 0) {
		Dirty = 0;
	}
	if (Dirty > 100) {
		Dirty = 100;
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
////////////////////
void Pet::GoDownHunger() {
	Decision = rand() % 2;
	if (Decision == 0) {
		Hunger += rand() % 10;
	}
}
////////////////////
void Pet::GoDownBored() {
	Decision = rand() % 2;
	if (Decision == 0) {
		Bored += rand() % 10;
	}
}
////////////////////
void Pet::GoDownDirty() {
	Decision = rand() % 2;
	if (Decision == 0) {
		Dirty += rand() % 10;
	}
}
////////////////////
void Pet::GoDownThirst() {
	Decision = rand() % 2;
	if (Decision == 0) {
		Thirst += rand() % 10;
	}
}
////////////////////
void Pet::GoDownPeepPoop() {
	Decision = rand() % 2;
	if (Decision == 0) {
		PeepPoop += rand() % 10;
	}
}
void Pet::Die() {
	////////////////////
	if (Hunger > 90) {
		Health -= 20;
	}
	else if (Hunger < 90 && Hunger > 50) {
		Health -= 10;
	}
	else if (Hunger < 50 && Hunger > 25) {
		Health -= 5;
	}
	////////////////////
	if (Bored > 90) {
		Health -= 5;
	}
	else if (Bored < 90 && Bored > 50) {
		Health -= 2;
	}
	else if (Bored < 50 && Bored > 25) {
		Health -= 1;
	}
	////////////////////
	if (Dirty > 90) {
		Health -= 10;
	}
	else if (Dirty < 80 && Dirty > 50) {
		Health -= 5;
	}
	else if (Dirty < 50 && Dirty > 25) {
		Health -= 2;
	}
	////////////////////
	if (Thirst > 90) {
		Health -= 20;
	}
	else if (Thirst < 90 && Thirst > 50) {
		Health -= 5;
	}
	else if (Thirst < 50 && Thirst > 25) {
		Health -= 2;
	}
	////////////////////
	if (PeepPoop > 90) {
		Health -= 5;
	}
	else if (PeepPoop < 90 && PeepPoop > 50) {
		Health -= 2;
	}
	else if (PeepPoop < 50 && PeepPoop > 25) {
		Health -= 1;
	}
	////////////////////
	if (Health < 0 || Health == 0) {
		cout << "Your Pet Health Reached Under 0" << endl;
		cout << "Your highscore is " << HighScore << endl;
		cout << "Game Over" << endl;
		system("pause");
		exit(0);
	}
	////////////////////
}



/////////////////////////////////////////////////////////////////////////////////
void Dog::InitDog(string N) {
	Hunger = rand() % 10;
	Bored = rand() % 10;
	Dirty = rand() % 10;
	Thirst = rand() % 10;
	PeepPoop = rand() % 10;
	Health = 90;
	Name = N;
}
/////////////////////////////////////////////////////////////////////////////////
