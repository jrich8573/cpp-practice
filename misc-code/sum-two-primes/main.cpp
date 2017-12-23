// attribute to @coder_forevers
// Determine if a number can be expessed as the sum of two prime numbers

#include <iostream>

using namespace std;

bool checkPrime(int n);

int main(){

    int n = 0;
    bool flag = false;

    cout << "Enter a positive integer: ";
    cin >> n;

    for(int i = 2; i <= n/2; ++i){
        if(checkPrime(i)){
            if(checkPrime(n - i)){
                //cout << n << " Can be expressed as the sum of two primes." << '\n';
                cout << n << " = " << i << " + " << n - i << "\n";
                flag = true;
            }
        }
    }
    if(!flag)
        cout << n << " cannot be expressed as the sum of two primes.";
    return 0;
}

bool checkPrime(int n){
    bool isPrime = true;

    for(int i = 2; i <= n/2; ++i){
        if(n % i == 0){
            isPrime = false;
            break;
        }
    }
    return isPrime;
}
