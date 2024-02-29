// AdrianG Assessment 1 Code.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "String_Utility.h"

using namespace std;

int main() {

	//char input[15] = "";
	//cin >> input;

	char holder[20] = "hello world";
	char test_1[12] = "Hello ";
	char test_2[11] = "World";

	// making the class
	String* Test = new String("Hello World");

	Test->Length();
	
	//// Testing that the functions work

	Test->CharacterAt(2);
	Test->StrEqualTo("Hello World");

	Test->StrAppend(" World");
	//Test->StrPreppend("World ");

	////CStr ask to clarify what it wants you to return

	//Test->ToLower("HELLO WORLD");
	//Test->ToUpper("hello world");


	delete Test;
	Test = nullptr;

}
