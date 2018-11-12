// Custom Objects as Map Values
// FYI: map will always sort according to the position of within the map


#include<iostream>
#include<map>
//#include "person.h"

using namespace std;

class Person{
private:
         string name;
         int age;
 
public:
        // default constructor
       Person():
       name(""), age(0)
       {
       }
       // 2 parm constructor
       Person(string name, int age):
               name(name), age(age){
       }
       
       // copy constructor prevents implicit swallow copy      
       Person(const Person &other){
               cout << "Copy Constructor running!" << '\n';
               name = other.name;
               age = other.age;

       }
       // class print function
       void print() const{
               cout << name << ": " << age << '\n';
       }
};
 
int main(){

	//map object with user defind class as the value
	map<int, Person> people;

	people[0] = Person("Mike", 40);
	people[1] = Person("Vicky", 30);
	people[2] = Person("Raj", 20);
		
	for(map<int, Person>::iterator it = people.begin(); it != people.end(); it++){
		cout << it->first << ": " << flush;
		it->second.print();
	}
	
     

	return 0;
};
