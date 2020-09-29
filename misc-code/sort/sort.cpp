#include <iostream>

using namespace std;

// method to sort a binary array in linear time
void sort(int A[], int n){

   // count the number of 0's
   int zero = 0;
   for(int i = 0; i < n; i++){
       if(A[i] == 0){
           zero++;
       }
   }
   int k = 0;
   while(zero--){
       A[k++] = 0; 
   }
   while(k < n){
       A[k++] = 1;
   }
}

int main(){

    int A[] = {0,0,1,0,1,1,0,1,0,0};
    int n = sizeof(A)/sizeof(A[0]);

    sort(A,n);
    return 0;
}