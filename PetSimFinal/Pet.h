#pragma once
#include <iostream>
#include <string>
using namespace std;

//Base class
class Pet {
private:
protected:
	int Hunger; //Feed
	int Bored; //Play
	int Cleanliness; //Clean
	int Thirst; //Water
	int PeepPoop; //Bathroom
	int Health;//Medicine
	string Name;
public:
	void Feed(); //Hunger
	void Play(); //Bored
	void Clean(); //Cleanliness
	void Water(); //Thirst
	void Bathroom(); //PeepPoop
	void Medicine();//Health
	void PrintInfo();
	void Restrictions();
	void GoDown();
	void Die();
};

// Sub class inheriting from Base Class(Pet) 
class Dog : public Pet {
private:

public:
	void InitDog(string N);
	void PrintInfo();
};

/*class kitty : public Pet {
private:

public:

void InitKitty(string N);
void PrintInfo();

};
class HedgeHog : public Pet {
private:

public:
void InitHedgeHog(string N);
void PrintInfo();

};
class Horse : public Pet {
private:

public:
void InitHorse(string N);
void PrintInfo();

};*/
