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

bool String::StrEqualTo(const char* str, const char* str1)
{
	if (str == str1) { cout << "True"; }
	else if (str != str1) { cout << "False"; }

	return this;
}
