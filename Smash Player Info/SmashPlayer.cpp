#include "SmashPlayer.h"
void SmashPlayer::InitPlayer(int H, bool A, int GD, string N) {
	Health = H;
	Alive = A;
	GiveDamage = GD;
	Name = N;
}
void SmashPlayer::PrintPlayer() {
	cout << "Your Character is " << Name << endl;
	cout << "His Health is " << Health << endl;
	cout << "The damage he gives when he hits someone is " << GiveDamage << endl;
	if (Alive == true) {
		cout << "And right now he is Alive" << endl;
	}
	else cout << "And right now he is Dead" << endl;

	cout << "/////////////////////////////////////////////" << endl;
}
