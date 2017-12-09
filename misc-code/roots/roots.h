#ifndef __ROOTS_H__
#define __ROOTS_H__


#include <iostream>
#include<cmath>


class Roots{

    public:
	//default constructor
        Roots()
	:float a, float b, float c, float x1, float x2, float determinant, float realPart, float imaginaryPart;
        {}

// TODO finish writing Roots class 
	//constructor
	Roots(float a, float b, float c){
		
	
	}

	//copy construtor
	

	//move constructor
	
	// < operator
	operator< (){
	
	}
    	

	// = operator
	operator= (){
	
	}
private:
    float a;
    float b;
    float c;
    float d;
    float e;
    float determinant;
    float realPart;
    float imaginaryPart;
};
#endif
