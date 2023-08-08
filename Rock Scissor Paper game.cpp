#include<iostream>
using namespace std;
int main() {
	int y, x;
	string Comp_Chosen;
	bool again;
	do {
		 again = false;
		srand(time(0));
		// Random number between 1 and 3
		// Random number formula (rand()*(higher-lower+1)+lower
		y = (rand() % 3) + 1;
		switch (y)
		{
		case 1:
			Comp_Chosen = "Rock";
			x = 1;
			break;
		case 2:
			Comp_Chosen = "Paper";
			x = 2;
			break;
		case 3:
			Comp_Chosen = "Scissors";
			x = 3;
			break;
		}
		int choice;
		cout << "Enter your Choice \n1 : For Rock\n2 : For Paper\n3 : For Scissors" << endl;
		cin >> choice;
		while (choice < 0 || choice>3) {
			cout << "Choice must be between 1 and 3 \n Enter your choice again : " << endl;
			cin >> choice;
		}

		cout << "Computer choice is : " << Comp_Chosen << endl;;
		if (x == 1 && choice == 3 || choice == 1 && x == 3) {
			cout << "The Rock smashes scissors : Rock wins  " << endl;
		}
		else if (x == 3 && choice == 2 || x == 2 && choice == 3) {
			cout << "Scissor cuts paper : Scissors win " << endl;
		}
		else if (x == 2 && choice == 1 || x == 1 && choice == 2) {
			cout << "Paper wraps rock : Paper wins " << endl;
		}
		else if (x == choice) {
			cout << "Choices are same game will be played again " << endl;
			again = true;
		}
	} while (again == true);
}