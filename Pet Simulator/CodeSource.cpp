#include <iostream>
#include <string>
#include <ctime>
#include "pet.h" 

using namespace std;

string input;
char choice;
int room = 1;
int main() {
	srand(time(NULL));
	//instantiate pets (create/stamp)
	pet polly;
	pet chewbatman;



	cout << "whats yo pet?" << endl;
	getline(cin, input);

	polly.pet1(input, 100, 100, 100, 100, 100, true);

	while (1) {
		//switch (room) {
		//case 1:
		polly.printPet();
		cout << "What do you want to do?" << endl;
		cout << "Feed(f), Clean(c), Water(w), PLay(p), and Bathroom(b)" << endl;
		cin >> choice;
		if (choice == 'F' || choice == 'f') {
			polly.feed();
		}
		else if (choice == 'C' || choice == 'c') {
			polly.clean();
		}
		else if (choice == 'W' || choice == 'w') {
			polly.water();
		}
		else if (choice == 'P' || choice == 'p') {
			polly.play();
		}
		else if (choice == 'B' || choice == 'b') {
			polly.bathroom();
		}
		else
			cout << "Invalid" << endl;
		polly.sub();
		polly.die();

		//break;
		//}
	}
}
