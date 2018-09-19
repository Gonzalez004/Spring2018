#pragma once
#include<string>
#include <iostream>
using namespace std;
class pet
{
public:
	void pet1(string n, int c, int h, int t, int b, int p, bool i);
	void printPet();

	//add feed, wash, water, play, walk
	//time function
	void sub();
	void feed();
	void clean();
	void water();
	void play();
	void bathroom();
	void die();

private:
	int hunger;
	int cleanliness;
	int thirst;
	int boredom;
	int needspotty;
	bool isdead;
	string name;
};
