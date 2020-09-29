#include <iostream>
#include <string>

using namespace std;

char caesar(char c){

    if(isalpha(c)){ //is char c alphanumeric
        c = toupper(c); 
        c = (((c - 65)+3)%26)+65;
    }
    return c; // if not alphanumeric
}

int main(){
    string input;
    do{
        cout << "Enter Text: \n";
        getline(cin, input);
        string output = "";
        for(int x = 0; x < input.length(); x++){
            output += caesar(input[x]);
        }
        cout << output << "\n";
    }
    while(!input.empty());

    return 0;
}