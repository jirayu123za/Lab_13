#include<iostream>
#include<string>
using namespace std;

template <typename currentType>
void mySwap(currentType &x,currentType &y);

int main(){
	int x,y;
	cin >> x >> y;
	cout << "Before swapping:\n";
	cout << "x = " << x << ", y = " << y << "\n";
	mySwap (x,y);
	cout << "After swapping:\n";
	cout << "x = " << x << ", y = " << y << "\n";
	
	return 0;
}

template <typename currentType>
void mySwap(currentType &x,currentType &y)
{
	currentType temp;
	temp = x;
	x = y;
	y = temp;
}