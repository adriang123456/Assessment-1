#include "String_Utility.h"
#include <iostream>
#include <string>

using namespace std;

// constructors and destructors
String::String() {
}
String::String(const char* _str) {
}
String::~String() {
}

// length function
int String::Length(const char* _index) {

	size_t length = strlen(_index);
	cout << length;
	cout << "\n\n\n\n";

	return length;
}

// function that figures out what is at that index
char String::CharacterAt(const char* str, int index)
{
	Index = index;
	char CharAt = str[Index];

	cout << CharAt;
	cout << "\n\n\n\n";

	return CharAt;
}

// the function which figures out if one string is the same as another
bool String::StrEqualTo(const char* str, const char* str1)
{
	if (str == str1) { cout << "True"; }
	else { cout << "False"; }

	cout << "\n\n\n\n";

	return this;
}


void String::StrAppend(const char* str)
{
	char str_1[20] = "Hello";
	strcat_s(str_1, sizeof str_1, str);

	cout << str_1;
	cout << "\n\n\n\n";

}

void String::StrPreppend(const char* str)
{
	char str_1[10] = "Hello";
	char result[20] = "";

	strcpy_s(result, str);
	strcat_s(result, sizeof result, str_1);

	cout << result;
	cout << "\n\n\n\n";

}

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
