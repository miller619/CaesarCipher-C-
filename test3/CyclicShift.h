/*CyclicShift.h
Header file

Author: Mohammed Khondhokar Isteak Ahamed.
Id: 4310713.
Problem Set: 1.
Unit: COS30008 Data Structure and Patterns.
Lecturer: Sim Kwan Yong.
*/

#pragma once
#include <iostream>
#include <string>
class cycle
{
private:
	char fUpperCase[26];
	char fLowerCase[26];
public:
	cycle();
	
	std::string& Encrypt(std::string& aOriginalMessage, int &aKey)const;

	std::string& Decrypt(std::string& aEncryptedMessage, int &aKey)const;
};

