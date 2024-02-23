#include "String_Utility.h"
#include <iostream>

using namespace std;

// constructors and destructors
String::String() {
}
String::String(const char* _str) {
}
String::~String() {
}

// length function
int String::Length(char* _index) {

	int length = strlen(_index);
	cout << length;
	return length;
}

// function that figures out what is at that index
char String::CharacterAt(const char* str, int index)
{
	Index = index;
	char CharAt = str[Index];

	cout << CharAt;
	return CharAt;
}

// the function which figures out if one string is the same as another
bool String::StrEqualTo(const char* str, const char* str1)
{
	if (str == str1) { cout << "True"; }
	else { cout << "False"; }

	return this;
}


void String::StrAppend(const char* str)
{
	char str_1[20] = "Hello";
	strcat_s(str_1, sizeof str_1, str);

	cout << str_1;
}
