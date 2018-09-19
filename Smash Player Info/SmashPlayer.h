#pragma once
#include <iostream>
#include <string>
using namespace std;

class SmashPlayer {
public:
	void InitPlayer(int H, bool A, int GD, string N);
	void PrintPlayer();

private:
	int Health;
	bool Alive;
	int GiveDamage;
	string Name;
};
