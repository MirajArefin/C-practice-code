//Author : Miraj Arefin
#include <iostream>
using namespace std;
int fibonacci(int num);
int main(){
	int n;
	cout << "How many number in the series you want?" << endl;
	cin >> n;
	for(int i = 0; i < n; i++){
		cout << fibonacci(i) << "  ";
	}
	cout << endl;
}
int fibonacci(int num){
	if(num == 0 || num == 1){
		return num;
	}
	else
		return fibonacci(num-1)+fibonacci(num-2);
}
