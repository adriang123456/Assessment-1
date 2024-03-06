// AdrianG Assessment 1 Code.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
#include "String_Utility.h"

using namespace std;

// The main function of the custom string class assessment
int main() {

	// making the class
	String* Test = new String("Hello World");
	String* Test_1(Test);



	//// Testing that the functions work for Assessment 2, just requires uncommmenting
	
	//Test->Length();  // expected result ---  11

	//Test->CharacterAt(2);    // expected result ---   l
	//Test->StrEqualTo("Hello World");    // expected result ---  True

	//Test->StrAppend(" look");    // expected result ---  Hello World look
	//Test->StrPreppend("World ");    // expected result ---  World Hello World

	//Test->CStr();    // expected result ---  Hello World

	//Test->ToLower("HELLO WORLD");    // expected result --- hello world
	//Test->ToUpper("hello world");    // expected result ---	HELLO WORLD

	//Test->Find("Hello");    // text in the txt file - Hello World, from Computer overlords x2    // expected result --- Index > 0
	//Test->Find_I(2, "Computer");     // expected result --- Index 3, will return -1 if not in range
	//Test->Replace("Hello", "Goodbye");   // expected result --- Goodbye World, from Computer overlords Goodbye World, from Computer overlords

	//Test->Read();    // expected result ---  Successful input of a string without spaces
	//Test->Write();    // expected result ---	prints the above string

	//Testing that the overloaded == works and returns true;   ---- ---- doesn't seem to work for some reason
	//Test->operator== ("Hello World");    // expected result --- True 

	// Testing the overloaded [] works and returns the character at the indicated index
	//cout << Test->operator[](1);    // expected result ---  e

	// Testing the overloaded = works
	//Test->operator=("Hello");    // expected result --- Hello

	//Testing the overloaded + works
	//Test->operator+("Boo");    // expected result --- Hello WorldBoo

	// Testing the overloaded += work
	//Test->operator+=(" Hello");    // expected result --- Hello World Hello

	// Testing the overloaded < works
	//Test->operator< ("z");    // expected result --- True

	// Deletes the class created
	delete Test;
	Test = nullptr;

}
