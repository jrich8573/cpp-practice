#include <iostream>
#include <cmath>
//#include "roots.h"

using namespace std;


int main(){

    float a, b, c, x1, x2, determinant, realPart, imaginaryPart;
    cout << "Enter coefficients a, b, c: ";
    cin >> a >> b >> c;
    determinant = (b*b) -(4*a*c);

    cout << "The determinant is: " << determinant << '\n';

    if (determinant > 0){
        x1 = (-b + sqrt(determinant))/(2*a);
        x2 = (-b - sqrt(determinant))/(2*a);
        cout << "The roots are real and different." << "\n";
        cout << "x1 = " << x1 << "\n";
        cout << "x2 = " << x2 << "\n";
    }
    else if(determinant == 0){
        cout << "The roots are real and the same" << "\n";
        x1 = (-b + sqrt(determinant))/(2*a);
        cout << "x1 = x2 = " << x1 << "\n";
    }
    else{
        realPart = -b/(2*a);
        imaginaryPart = sqrt(-determinant)/(2*a);
        cout << "The roots are complex and different." << "\n";
        cout << "x1 = " << realPart << " + " << imaginaryPart << "i" << "\n";
        cout << "x2 = " << realPart << " - " << imaginaryPart << "i" << "\n";
    }
    return 0;
}
