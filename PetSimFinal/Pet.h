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
	int Dirty; //Clean
	int Thirst; //Water
	int PeepPoop; //Bathroom
	int Health;//Medicine
	string Name;
	int Decision;//All Go Down Functions
	double HighScore = 0;
public:
	void Feed(); //Hunger
	void Play(); //Bored
	void Clean(); //Cleanliness
	void Water(); //Thirst
	void Bathroom(); //PeepPoop
	void Medicine();//Health
	void PrintInfo();
	void Restrictions();
	void GoDownHunger();
	void GoDownBored();
	void GoDownDirty();
	void GoDownThirst();
	void GoDownPeepPoop();
	void Die();
};

// Sub class inheriting from Base Class(Pet) 
class Dog : public Pet {
private:

public:
	void InitDog(string N);
//	void PrintInfo();
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
