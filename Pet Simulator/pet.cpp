#include"pet.h"
#include <ctime>
int one;
int two;
int three;
int four;
int five;
int loop = 1;
void pet::pet1(string n, int c, int h, int t, int b, int p, bool i) {
	hunger = h;
	cleanliness = c;
	thirst = t;
	boredom = b;
	needspotty = p;
	isdead = i;
	name = n;

}

void pet::printPet() {
	cout << name << endl;
	cout << "hunger is " << hunger << endl;
	cout << "cleaniness is " << cleanliness << endl;
	cout << "thirst is " << thirst << endl;
	cout << "boredom is " << boredom << endl;
	cout << "needs potty is " << needspotty << endl;
	//put more stuff here
}

void pet::feed() {
	hunger++;

}
void pet::clean() {
	cleanliness++;
}
void pet::water() {
	thirst++;

}
void pet::play() {
	boredom++;
}
void pet::bathroom() {
	needspotty++;
}
void pet::sub() {
	one = rand() % loop;
	two = rand() % loop;
	three = rand() % loop;
	four = rand() % loop;
	five = rand() % loop;

	hunger = hunger - one;
	cleanliness = cleanliness - two;
	thirst = thirst - three;
	boredom = boredom - four;
	needspotty = needspotty - five;
	loop++;
}
void pet::die() {
	if (hunger <= 0) {
		cout << "Your pet is dead bruther." << endl;
		system("pause");
		exit(0);
	}
	if (thirst <= 0) {
		cout << "Your pet is dead bruther." << endl;
		system("pause");
		exit(0);
	}



}
/*cleanliness = c;
thirst = t;
boredom = b;
needspotty = p;
isdead = i;
name = n;*/
