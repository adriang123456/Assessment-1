#pragma once
class String
{
public: // constructors and destructors
	String();
	String(const char* _str);
	~String();

public:		// functions
	int Length(char* _index);
	char CharacterAt(const char* str, int index);
	bool StrEqualTo(const char* str, const char* str1);

public:	// variables

	int Index;
};







//	const char& CharacterAt(size_t _index) const;  pos remove if not needed
//
//	bool EqualTo(const String& _other) const;
//
//	String& Append(const String& _str);
//	String& Prepend(const String& _str);
//
//	const char* CStr() const;
//
//	String& ToLower();
//	String& ToUpper();
//
//	size_t Find(const String& _str);
//	size_t Find(size_t _startIndex, const String& _str);
//
//	String& Replace(const String& _find, const String& _replace);
//
//	String& ReadFromConsole();
//	String& WriteToConsole();
//
//public:
//	bool operator==(const String& _other);
//	bool operator!=(const String& _other);
//
//	String& operator=(const String& _str);
//
//	char& operator[](size_t _index);
//	const char& operator[](size_t _index) const;




