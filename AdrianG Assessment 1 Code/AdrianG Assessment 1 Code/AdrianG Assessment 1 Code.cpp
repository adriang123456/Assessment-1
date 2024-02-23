// AdrianG Assessment 1 Code.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "String_Utility.h"

using namespace std;

int main() {

	char test_1[12] = "Hello";
	char test_2[11] = "World";

	// making the class
	String* Test = new String("Hello World");

	//Test->Length(temp);

	//Test->CharacterAt(temp, 1);
	//Test->CharacterAt("Hello", 2);

	//Test->StrEqualTo("Hello World", "Hell World");

	Test->StrAppend("World");

}
