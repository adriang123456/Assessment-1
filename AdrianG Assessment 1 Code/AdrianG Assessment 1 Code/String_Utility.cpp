#include "String_Utility.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// constructors and destructors
String::String() : holder(nullptr), size (0) {
}
String::String(const char* str) {
	int size = strlen(str);
	
	holder = new char[size + 1];
	strncpy_s(holder, size + 1 , str, size);

	//cout << strlen(holder);
}
String::String(const String& other) {
	size = other.size;
	holder = new char[size + 1];
	strncpy_s(holder, size + 1, other.holder, size + 1);
}
String::~String() {
	delete holder;
	holder = nullptr;
}

// length function
int String::Length() {

	size_t length = strlen(holder);
	cout << length;
	cout << "\n\n\n\n";

	return length;
}

// function that figures out what is at that index
char String::CharacterAt(int index)
{
	Index = index;
	char CharAt = holder[Index];

	cout << CharAt;
	cout << "\n\n\n\n";

	return CharAt;
}

// the function which figures out if one string is the same as another
bool String::StrEqualTo(const char* other)
{
	if (strcmp(holder, other) == 0) { cout << "True"; }
	else { cout << "False"; }

	cout << "\n\n\n\n";

	return this;
}

// This function appends a char array with another  
void String::StrAppend(const char* other)
{
	string appended = holder;
	appended.append(other);
	
	cout << appended;
	cout << "\n\n\n\n";
}

// This function prepends a char array with another
void String::StrPreppend(const char* str)
{
	string prepended = str;
	prepended.append(holder);

	cout << prepended;
	cout << "\n\n\n\n";

}

const char* String::CStr() const
{
	cout << holder;
	return holder;
}

// This function makes all uppercase letters, lowercase
void String::ToLower(const char* str)
{
	char holder[20] = "";
	strcpy_s(holder, str);
	for (int i = 0; i < strlen(holder); i++) {
		holder[i] = tolower(holder[i]);
	}

	cout << holder;
	cout << "\n\n\n\n";

}

// This function makes all the lowercase letters, uppercase
void String::ToUpper(const char* str)
{
	char holder[20] = "";
	strcpy_s(holder, str);

	for (int i = 0; i < strlen(holder); i++) {
		holder[i] = toupper(holder[i]);

	}

	cout << holder;
	cout << "\n\n\n\n";

}


//size_t String::Find(const char* str) {      -- -- -- -- --  find the index of at least the start hopefully of the string
//	//ifstream readfile("file.txt");
//
//	//int count;
//	//long location = 0;
//	//for (; (count = readfile.get()) != EOF; ++location) {
//	//	if (count == str) {
//	//		return location;
//	//	}
//	//}
//	//
//}

size_t String::Find_I(int index, const char* str) {
	
	
	return size_t();
}   // start searching from the selected index for the index of the string


