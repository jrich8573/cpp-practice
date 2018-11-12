#ifndef __PERSON_H__
#define __PERSON_H__

#include <iostream>

class Person{
	
private:
	string name;
	int age;

pubic:
	// default constructor
	Person::Person():
	name(""), age(0)
	{
	}
	// 2 parm constructor
	Person::Person(string name, int age):
		name(name), age(age){
	}
	
	// copy constructor prevents implicit swallow copy	
	Person::Person(const Person &other){
		cout << "Copy Constructor running!" << '\n';
		name = other.name;
		age = other.age;

	}
	// class print function
	void Person::print() const{
		cout << name << ": " << age << '\n';
	}
};


#endif
