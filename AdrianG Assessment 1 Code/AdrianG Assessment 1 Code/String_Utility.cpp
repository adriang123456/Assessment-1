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

void String::StrPreppend(const char* str)
{
	char str_1[10] = "Hello";
	char result[20] = "";

	strcpy_s(result, str);
	strcat_s(result, sizeof result, str_1);

	cout << result;
}

void String::ToLower(const char* str)
{
	char holder[20] = "";
	strcpy_s(holder, str);
	for (int i = 0; i < strlen(holder); i++) {
		holder[i] = holder[i] + 32;

		//if (holder[i] == int(holder[i])) { holder[i] = holder[i] - 32; }  the thing that should detect the space but doesn't ask about this
	}

	cout << holder;
}

void String::ToUpper(const char* str)
{
	char holder[20] = "";
	strcpy_s(holder, str);

	for (int i = 0; i < strlen(holder); i++) {
		holder[i] = holder[i] - 32;

	}

	cout << holder;
}
