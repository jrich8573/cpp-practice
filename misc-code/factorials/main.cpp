// fining factorials

#include <iostream>

using namespace std;

int main(){

    // using unsigned for both int and long because we are not using negatives.
    // this will provide memory allocation of 2^32 where signed is 2^31. 
    unsigned int n;
    unsigned long long factorial = 1;

    cout << "Enter a positive integer: ";
    cin >> n;

    for(int i =1; i <= n; ++i){

        factorial *= i;
    }

    cout << "Factirial of " << n << " = " << factorial << "\n";

    return 0;
}
