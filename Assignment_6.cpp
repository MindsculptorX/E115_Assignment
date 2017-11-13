//#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;

void printGreeting() {
	cout << "Have a good day" << endl;
}

void divideNumbers(float a, float b) {
	if(b==0){
		cout<<"can't divide by zero"<< endl;
	}else{
		cout << a / b << endl;
	}
}

int factorial(int num){
	if (num <= 0)return 0;
	if (num == 1)return 1;
	return num * factorial(num - 1);
}

void fibo(int N) {	//
	if (N <= 0)return;
	vector<int> fibo(N, 1);  ///{1}
	fibo[0]=0;   //fibo[1]  ///out of index
	for (int i = 2; i < N; i++) {
		fibo[i] = fibo[i - 1] + fibo[i - 2];
	}
	for (int i = 0; i < N; i++) {
		cout << fibo[i] << ',';
	}
	cout << endl;
	
}
int main()
{
	printGreeting();
	divideNumbers(6, 5);
	cout<<factorial(5)<<endl;//120
	fibo(10);
	//system("pause");
    return 0;
}
