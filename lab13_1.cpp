#include<iostream>
using namespace std;

int fibonacci(int x);

int main(){
    int x;
    cin >> x;
    cout << fibonacci(x);
    return 0; 
}

int fibonacci(int x){
	int sum = 0;
	if(x == 0){
		return sum;
	}else if(x == 1){
		sum = 1;
		return sum;
	}else{
		sum = sum+fibonacci(x-1) + fibonacci(x-2);
		return sum;
	}
}