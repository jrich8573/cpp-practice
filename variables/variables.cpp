#include <iostream>



using namespace std;


int main(){

    // 4 byte int vars range is -2B to 2B
    // 2 byte short int vars range is -32768 to 32767

    int a = 4; // 4bytes
    short b = 5; // 2bytes truncates the decimal
    float c = 5.3; // 4 bytes
    double d = 5.4; // 8 bytes more precise than float
    unsigned int e = 58; // stores only positive values
    const string NAME = "Batman"; // convention when using constants is to use uppercase
    cout << a << '\n';
    cout << &a << '\n'; //&a is the address of a
    cout << b << '\n';
    cout << c << '\n';
    cout << d << '\n';
    cout << e << '\n';
    cout << NAME << '\n';

    return 0;
}
