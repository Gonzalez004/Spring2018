#include <iostream>
#include <string>
#include "SmashPlayer.h"
using namespace std;
string Input;
int HealthInput;
int DamageInput;
bool AliveInput;
int Guess;
int main() {
		SmashPlayer Player1;
		cout << "What's your character Name?" << endl;
		getline(cin, Input);
		cout << "How much damage does he give?" << endl;
		cin >> DamageInput;
		cout << "What's his health?" << endl;
		cin >> HealthInput;
		cout << "Guess 1 or 2 to see if he's alive" << endl;
		cin >> Guess;
		if (Guess == 1) {
			AliveInput = true;
		}
		else AliveInput = false;

		Player1.InitPlayer(HealthInput, AliveInput, DamageInput, Input);

		Player1.PrintPlayer();

	return 0;
}
