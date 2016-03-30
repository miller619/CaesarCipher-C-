/*CyclicShift.cpp
Constructor: Initialising the fUpperClass and fLowerClass
Methods: Encrypt and Decrypt

Author: Mohammed Khondhokar Isteak Ahamed.
Id: 4310713.
Problem Set: 1.
Unit: COS30008 Data Structure and Patterns.
Lecturer: Sim Kwan Yong.
*/

#include "CyclicShift.h"
using namespace std;


cycle::cycle()
{
	//constructor
	for (int i = 0; i < 26; i++)
	{
		fUpperCase[25] = 'A' + i;
		fLowerCase[25] = 'a' + i;
	}
}

string& cycle::Encrypt(string& aOriginalMessage, int &aKey) const
{

	int lencripted;
	//store the length of the input string
	int count = aOriginalMessage.length();
	//loop through each character of the string
	for (int i = 0; i <= count ; i++)
	{
		//check if the present character is alphabet
		if (isalpha(aOriginalMessage[i]))
		{
			//typecast (int) and check if its uppercase
			if ((int)aOriginalMessage[i] >= 65 && (int)aOriginalMessage[i] <= 90) {
				//typecast the character to its ASCII
				//shift
				//modulo 26 is used to keep the count confined within 60 to 90
				lencripted = (((int)aOriginalMessage[i] - 65 + aKey) % 26) + 65;
			}
			//or check if lower case
			else if ((int)aOriginalMessage[i] >= 97 && (int)aOriginalMessage[i] <= 122) {
				//typecast the character to its ASCII
				//shift
				//modulo 26 is used to keep the count confined within 97 to 122
				lencripted = (((int)aOriginalMessage[i] - 97 + aKey) % 26) + 97;
			}
		}
		else {
			//or if not an alphabet, print as it is.
			lencripted = aOriginalMessage[i];
		}
		//typecast back to the respective alphabet
		char aOriginalMessage = (char)lencripted;
		//print
		cout<< aOriginalMessage;
	}
	cout << endl;
	return aOriginalMessage;
}

string& cycle::Decrypt(string& aEncryptedMessage, int &aKey) const
{
	int lencripted;
	
	//get length
	int count = aEncryptedMessage.length();
	//loop through each character
	for (int i = 0; i <= count; i++)
	{
		//check if alphabet
		if (isalpha(aEncryptedMessage[i]))
		{
			int store = (int)aEncryptedMessage[i];
			//check upper case
			 if (store >= 65 && store <= 90) {
				 int temp = store - 65 - aKey;
				 //shift
				 if(temp < 0 ){
					 lencripted = ((store - 65 - aKey) % 26) + 91;
				 }
				 else {
					 lencripted = ((store - 65 - aKey) % 26) + 65;
				 }
				
		}
			 //check lower case
			else if (store >= 97 && store <= 122) {
				int temp = store - 97 - aKey;
				//shift
				if (temp < 0) {
					lencripted = ((store - 97 - aKey) % 26) + 123;
				}
				else {
					lencripted = ((store - 97 - aKey) % 26) + 97;
				}
			}
		}
		else {
			//or print as it is
			lencripted = aEncryptedMessage[i];
		}
		//typecast back to alphabet
		char aEncryptedMessage = (char)lencripted;
		cout << aEncryptedMessage;
	}
	cout << endl;
	return aEncryptedMessage;
}



