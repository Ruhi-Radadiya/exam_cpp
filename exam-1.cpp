//1. Write a C++ program to print factorial series using recursion.
#include<iostream>
using namespace std;

int main(){
	int a;
	int b;
	int i;
	
	cout<<"Enter any number:";
	cin>>a;
	
	for(i=1;i<=a;i++){
		b = a*(a-1);
	}
	
	cout<<b;
}