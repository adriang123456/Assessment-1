// AdrianG Assessment 1 Code.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include "String_Utility.h"
#include <string>


using namespace std;

int main() {

	//char input[15] = "";
	//cin >> input;

	char holder[20] = "hello world";
	char test_1[12] = "Hello ";
	char test_2[11] = "World";

	// making the class
	String* Test = new String("Hello World");

	//Test->Length();

	//// Testing that the functions work

	//Test->CharacterAt(2);
	//Test->StrEqualTo("Hello World");

	//Test->StrAppend("look");
	Test->StrPreppend("World ");

	//Test->CStr();

	//Test->ToLower("HELLO WORLD");
	//Test->ToUpper("hello world");

	//Test->Find("text");

	//ofstream Wfile("file.txt");
	//Wfile << "Hello World, from Computer overlords";
	//Wfile.close();

	//ifstream file("file.txt");
	//string word;

	//while (getline(file, word)) {
	//	//cout << word;
	//}

	//file.close();

	//ifstream file("file.txt");

	//string line;
	//getline(file, line);

	//int position = 0;

	//if (position < line.size()) {
	//	if (character == line[position]) {
	//		cout << position;
	//	}
	//}

	//cout << word[35];
	//cout << word.size();
	//string c = "H";

	//if (strstr(word, "p")) {
	//	cout << "found !" << endl;
	//}

	delete Test;
	Test = nullptr;

}
