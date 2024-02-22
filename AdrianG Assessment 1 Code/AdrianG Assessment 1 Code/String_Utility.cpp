#include "String_Utility.h"
#include <iostream>

using namespace std;

String::String() {
	cout << "String Constructor";
}

String::String(const char* _str) {

}

String::String(const String& _other) {

}

String::~String() {
	cout << "String Destructor";
}