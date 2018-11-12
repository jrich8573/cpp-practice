// cpp-practice 
// std::maps

// notes:
// next to vetors, map are the next most critical structure
// stores key value pairs, and acts like a look table 



#include <iostream>
#include <map>


using namespace std;


int main(){


	// map object called ages. inherits map instance variables and methods
	map<string, int> ages;
	
	// one way of inserting data into a map uses the overloaded "array" [ ] operator 
	// within [ ]  in the key and the RHS is the value
	ages["Mike"] = 40;
	ages["Raj"] = 20;
	ages["Vicky"] = 30;
	cout << '\n';	
	cout << "Raj's ages is: " << ages["Raj"] << '\n';
	cout << '\n';	
	
	// using  std:pair to construct a key/value pair to insert into the map
	pair<string, int> addToMap("Peter",100);
	ages.insert(addToMap);
	
	// another way to do this is to use the constructor directly
	ages.insert(pair<string, int>("Tom", 83));
	
	// another way is to use the function make_pair, which will create the pair using the appropriate data types
	ages.insert(make_pair("Martha", 34));

	// keys in a map are unique, so this bit overwrite Mike's age with 70
	ages["Mike"] = 70; 
	cout << "Mike's age is: " << ages["Mike"] << '\n';
	cout << '\n';	

	// will add Sue with age = 0
	// not what we want
	cout << "This will output Sue's age as 0, even if Sue does not exist in the map: " << ages["Sue"] << '\n';
	cout << '\n';

	// test for the existence of a key value pair in the map, without adding keys to the map, usng the find method
	if(ages.find("Vicky") != ages.end()){
		cout << "Found Vicky!" << '\n';
	}else{
	   	cout << "Key not found" << '\n';
	}		
	// iterating through maps calls the class iterator
	// map instance variables first and second correspond to first = key and second = value
	cout << '\n';
	cout << "The table of key/value pairs: " << '\n';
	for(map<string, int>::iterator it = ages.begin(); it != ages.end(); it++){
		cout << it->first << ": " << it->second << '\n';
	}
	
	cout << '\n';	
 	cout << "Using std::pair to inspect the contents of the map: " << '\n';	
	for(map<string, int>::iterator it = ages.begin(); it != ages.end(); it++){
		pair<string, int> age = *it;
		cout << age.first << ": " << age.second << '\n';
	}

	return 0;
}
