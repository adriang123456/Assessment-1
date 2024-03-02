// AdrianG Assessment 1 Code.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
#include "String_Utility.h"



using namespace std;

int main() {

	//char input[15] = "";
	//cin >> input;

	char holder[20] = "Hello world";
	char test_1[12] = "Hello ";
	char test_2[11] = "World";

	// making the class
	String* Test = new String("Hello World");

	//Test->Length();

	//// Testing that the functions work

	//Test->CharacterAt(2);
	//Test->StrEqualTo("Hello World");

	//Test->StrAppend(" look");
	//Test->StrPreppend("World ");

	//Test->CStr();

	//Test->ToLower("HELLO WORLD");
	//Test->ToUpper("hello world");

	//Test->Find("Hello");    // text in the txt file - Hello World, from Computer overlords 
	//Test->Find_I(4, "Computer"); 
	Test->Replace("Hello", "Goodbye");

	//Test->Read();
	//Test->Write();


	delete Test;
	Test = nullptr;

}
