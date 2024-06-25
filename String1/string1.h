// string1.h - opravena a rozsirena definice tridy string
#include <iostream>
using std::ostream;
using std::istream;

#ifndef STRING1_H_
#define STRING1_H_

class String
{
private:
	char* str;  	// ukazatel na retezec
	int len; 	// delka retezce
	static int num_strings;	// pocet objektu
	static const int CINLIM = 80; 	// vstupni limit cin
public:
	// konstruktory a dalsi metody
	String(const char* s);
	String(); 	//implicitni konstruktor
	String(const String&);		//kopiruj konstruktor
	~String(); 		//destruktor
	int length() const { return len; }
	// metody pretizeneho operatoru
	String& operator=(const String&);
	String& operator=(const char*);
	char& operator[](int i);
	const char& operator[](int i) const;
	// pratele pretizeneho operatoru
	friend bool operator<(const String& st, const String& st2);
	friend bool operator>(const String& st1, const String& st2);
	friend bool operator==(const String& st, const String& st2);
	friend ostream& operator<<(ostream& os, const String& st);
	friend istream& operator>>(istream& is, String& st);
	// staticka funkce
	static int HowMany();
};
#endif
