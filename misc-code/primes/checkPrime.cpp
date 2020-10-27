#include <iostream>

using namespace std;

bool checkPrime(int num){
	bool prime = true;
	if(num == 0 || num == 1){
		prime = false;
	}
	else{
	  	for(int i = 2; i <= num/2; ++i){
			if(num % i == 0){
					prime =false;
					break;
			}
	  	}
			
	}
	return prime;
}

int main(){
		int num;
		bool flag = false;
		cout << "Enter number: ";
		cin >> num;
		for(int i = 2; i <= num/2; ++i){
				if(checkPrime(i)){
						if(checkPrime(num -1)){
								cout << num << " = "
									 << i << " + "
									 << num - i << "\n";
								flag = true;
						}
				}
		}
		if(!flag){
				cout << "Can't be expressed!" << "\n";
		}
		return 0;
}

