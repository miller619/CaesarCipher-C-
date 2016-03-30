/*Main.cpp

Author: Mohammed Khondhokar Isteak Ahamed.
Id: 4310713.
Problem Set: 1.
Unit: COS30008 Data Structure and Patterns.
Lecturer: Sim Kwan Yong.
*/
#include <iostream>
#include "CyclicShift.h"
#include <string>

using namespace std;

int main()
{
	//object of class cycle
	cycle lcode;
	//variable to store key
	int lkey;
	//variable to input string
	string loriginal;
	

		//prompt input
		cout << "Enter text: ";
		getline(cin, loriginal);
		//shift by
		cout << "Enter shift step: ";
		cin >> lkey;
		//so that the shift key is ignored while encrypting
		cin.ignore();

		char select;
		//choose encrypt or decrypt
		cout << "press 1 to encript or press 2 to decript: ";
		cin >> select;
		if (select == '1') {
				//call encrypt method
				lcode.Encrypt(loriginal, lkey);
		}

		else if (select == '2') {
				//call decrypt method
				lcode.Decrypt(loriginal, lkey);			
		}
		else {
			cout << "Invalid input";
		}
	return 0;
}