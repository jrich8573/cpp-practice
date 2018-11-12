// Custom Objects as Map Keys
// FYI: map will always sort according to the position of within the map


#include<iostream>
#include<map>

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
               // cout << "Copy Constructor running!" << '\n';
               name = other.name;
               age = other.age;

       }
       // class print function
       // the print fucntion must by const because the iterator returns a constant object	
       void print() const{
               cout << name << ": " << age << flush;
       }
      
       // we need to write our own operator <
       // the parm is marked const because we don't want it to change what it is operating on (accesser function)
       // the parm is a reference because we don't want a copy of the person (& is more efficient)
       // the function is const because we don't want the method  to change the Person objects it is working on
     bool operator<(const Person &other) const{
	   if(name == other.name){
		return age < other.age; // compares age
	  }else{
	   	return name < other.name; //compare name
	   }
     }
};
 
int main(){

	//map object with user defind class as the value
	map<Person, int> people;

	people[Person("Mike", 40)] = 20;
	people[Person("Mike", 400)] = 100;
	people[Person("Sue", 30)] = 1;
	people[Person("Raj", 20)] = 2;
		
	for(map<Person, int>::iterator it = people.begin(); it != people.end(); it++){
		cout << it->second << ": " << flush;
		it->first.print();
		cout << '\n';
	}
	
     

	return 0;
};
