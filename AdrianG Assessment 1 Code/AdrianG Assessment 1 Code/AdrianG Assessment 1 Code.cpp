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
	String* Test_1(Test);
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
	//Test->Replace("Hello", "Goodbye");   ---- needs work ---- sort of works

	//Test->Read();
	//Test->Write();

	//Testing that the overloaded == works and returns true;   ---- ---- doesn't seem to work for some reason
	Test->operator== ("Hello World");

	// Testing the overloaded [] works and returns the character at the indicated index
	//cout << Test->operator[](1);

	// Testing the overloaded = works
	//Test->operator=("Hello");

	//Testing the overloaded + works
	//Test->operator+("Boo");

	// Testing the overloaded += work
	//Test->operator+=(" Hello");

	delete Test;
	Test = nullptr;

}
