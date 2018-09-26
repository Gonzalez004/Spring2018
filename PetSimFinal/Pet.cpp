#include "Pet.h"
/////////////////////////////////////////////////////////////////////////////////
void Pet::Feed() {
	Hunger -= rand() % 20;
}
void  Pet::Play() {
	Bored -= rand() % 20;
}
void  Pet::Clean() {
	Cleanliness -= rand() % 20;
}
void  Pet::Water() {
	Thirst -= rand() % 20;
}
void  Pet::Bathroom() {
	PeepPoop -= rand() % 20;
}
void  Pet::Medicine() {
	Health -= rand()% 20;
}
void  Pet::PrintInfo() {
	cout << "Your pet " << Name << "'s stats:" << endl;
	cout << "The hunger level is " << Hunger << endl;
	cout << "The level of cleanliness is " << Cleanliness << endl;
	cout << "The level of thirst is " << Thirst << endl;
	cout << "The need to go to the bathroom is " << PeepPoop << endl;
	cout << "The overall health of your pet is " << endl;
}
void Pet::Restrictions() {
	//int Hunger; 
	//int Bored;
	//int Cleanliness; 
	//int Thirst;
	//int PeepPoop;
	//int Health;
	////////////////////
	if (Hunger < 0)
		Hunger = 0;
	if (Hunger > 100)
		Hunger = 100;
	////////////////////
	if (Bored < 0)
		Bored = 0;
	if (Bored > 100)
		Bored = 100;
	////////////////////
	if (Cleanliness < 0)
		Cleanliness = 0;
	if (Cleanliness > 100) 
		Cleanliness = 100;
}
/////////////////////////////////////////////////////////////////////////////////
void Dog::InitDog(string N) {
	Hunger = rand() % 100;
	Bored = rand() % 100;
	Cleanliness = rand() % 100;
	Thirst = rand() % 100;
	PeepPoop = rand() % 100;
	Health = rand() % 100;
	Name = N;
}

void Dog::PrintInfo() {
	cout << "Your pet " << Name << "'s stats:" << endl;
	cout << "The hunger level is " << Hunger << endl;
	cout << "The level of cleanliness is " << Cleanliness << endl;
	cout << "The level of thirst is " << Thirst << endl;
	cout << "The need to go to the bathroom is " << PeepPoop << endl;
	cout << "The overall health of your pet is " << endl;
}
/////////////////////////////////////////////////////////////////////////////////
/*
	int Hunger; //Feed
	int Bored; //Play
	int Cleanliness; //Clean
	int Thirst; //Water
	int PeepPoop; //Bathroom
	int Health;//Medicine
	string Name;

	void Feed(); //Hunger
	void Play(); //Bored
	void Clean(); //Cleanliness
	void Water(); //Thirst
	void Bathroom(); //PeepPoop
	void Medicine();//Health
	void PrintInfo();
	void Restrictions(); 
*/
