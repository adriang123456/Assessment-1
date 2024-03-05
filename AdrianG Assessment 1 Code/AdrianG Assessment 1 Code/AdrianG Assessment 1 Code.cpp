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
	
	//Test->Length();  // expected result ---

	//Test->CharacterAt(2);    // expected result ---
	//Test->StrEqualTo("Hello World");    // expected result ---

	//Test->StrAppend(" look");    // expected result ---
	//Test->StrPreppend("World ");    // expected result ---

	//Test->CStr();    // expected result ---

	//Test->ToLower("HELLO WORLD");    // expected result ---
	//Test->ToUpper("hello world");    // expected result ---

	//Test->Find("Hello");    // text in the txt file - Hello World, from Computer overlords     // expected result ---
	//Test->Find_I(4, "Computer");     // expected result ---
	//Test->Replace("Hello", "Goodbye");   ---- needs work ---- sort of works    // expected result ---

	//Test->Read();    // expected result ---
	//Test->Write();    // expected result ---

	//Testing that the overloaded == works and returns true;   ---- ---- doesn't seem to work for some reason
	Test->operator== ("Hello World");    // expected result ---

	// Testing the overloaded [] works and returns the character at the indicated index
	//cout << Test->operator[](1);    // expected result ---

	// Testing the overloaded = works
	//Test->operator=("Hello");    // expected result ---

	//Testing the overloaded + works
	//Test->operator+("Boo");    // expected result ---

	// Testing the overloaded += work
	//Test->operator+=(" Hello");    // expected result ---


	// Deletes the class created
	delete Test;
	Test = nullptr;

}
