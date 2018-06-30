#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

void checkOperator(int choice, float oldTotal, float &newTotal, int newNumber, string &operation){
	if (choice == 1){
		newTotal = oldTotal+newNumber;
		operation = "+";
	}
	if (choice == 2){
		newTotal = oldTotal-newNumber;
		operation = "-";
	}
	if (choice == 3){
		newTotal = oldTotal*newNumber;
		operation = "*";
	}
	if (choice == 4){
		newTotal = oldTotal/newNumber;
		operation = "/";
	}
	/*if (choice == 5){
		number = number*newNumber;
		cout << number << " % " << newNumber << " = " << number%newNumber << endl;
		number = number%newNumber;
		operation = "%";
	}*/
}

int main(){
	//initializations
	float firstT, secondT, thirdT, fourthT = 0.0;
	int first, second, third, fourth, final, solT = 0;
	string firstO, secondO, thirdO, fourthO;
	bool solutionExist;

	//input
	cout << "This is a quick program Beau made to figure out a problem he was too lazy to do." << endl;
	cout << "Please enter the first number: ";
	cin >> first;
	cout << "Now enter the second number: ";
	cin >> second;
	cout << "Now enter the third number: ";
	cin >> third;
	cout << "Now enter the fourth number: ";
	cin >> fourth;
	cout << "Now enter the solution: ";
	cin >> final;

	//calculations
	for (int x = 1; x <= 2; x++){
		checkOperator(x, 0, firstT, first, firstO);
		for (int y = 1; y <= 4; y++){
			checkOperator(y, firstT, secondT, second, secondO);
			for (int z = 1; z <= 4; z++){
				checkOperator(z, secondT, thirdT, third, thirdO);
				for (int q = 1; q <= 4; q++){
					checkOperator(q, thirdT, fourthT, fourth, fourthO);
					if (fourthT == final){
						cout << "--------------------------------------" << endl;
						cout << "((" << firstO << first << secondO << second << ")" << thirdO << third << ")" << fourthO << fourth << " = " << final << endl;
						cout << "First operator: " << firstO << endl;
						cout << "Second operator: " << secondO << endl;
						cout << "Third operator: " << thirdO << endl;
						cout << "Fourth operator: " << fourthO << endl;
						cout << "--------------------------------------" << endl;
						solutionExist = true;
						solT += 1;
					}
				}
			}
		}
	}

	cout << "There are " << solT << " ways to reach the solution." << endl;
	if (solutionExist != true)
		cout << "There does not exist a combination of operators to reach the solution." << endl;

}
