// Multimap 
// allows for duplicate keys



#include <iostream>
#include <map>

using namespace std;


int main(){

	multimap<int, string> lookup;
	lookup.insert(make_pair(30, "Mike"));
	lookup.insert(make_pair(10, "Vicky"));
	lookup.insert(make_pair(30, "Raj"));
	lookup.insert(make_pair(20, "Bob"));

	for(multimap<int, string>::iterator it = lookup.begin(); it != lookup.end(); it++){
		cout << it->first << ": " << it->second << '\n';	
	}
	
	cout << '\n';

	for(multimap<int, string>::iterator it = lookup.find(20); it != lookup.end(); it++){
		cout << it->first << ": " << it->second << '\n';	
	}
	cout << '\n';

	// iterate through a range in a multimap	
	pair<multimap<int, string>::iterator, multimap<int, string>::iterator> its = lookup.equal_range(30);
	
	for(multimap<int, string>::iterator it = its.first; it != its.second; it++){
		cout << it->first << ": " << it->second << '\n';	
	}
	cout << '\n';

	// auto key work (c++ 11 syntax)	
	auto its2 = lookup.equal_range(30);
	
	for(multimap<int, string>::iterator it = its2.first; it != its2.second; it++){
		cout << it->first << ": " << it->second << '\n';	
	}
	cout << '\n';
    return 0;
}
