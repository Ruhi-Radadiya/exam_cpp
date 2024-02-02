//5. Write a Program to handle ambuigity error in Hybrid inheritance.
#include<iostream>
using namespace std;

class P{
	public:
		int invest;
		void getP(){
		
			cout<<"Enter investment:";
			cin>>invest;
		}
};

class Q : public P
{
	public:
		int income;
		void getQ(){
				
			cout<<"Enter income:";
			cin>>income;
		}
};

class R : public P
{
	public:
		int expence;
		void getR(){
			
			cout<<"Enter expence:";
			cin>>expence;
		}
};

class S : public Q,public R
{
	public:
		int salary;
		void getS(){
			
			cout<<"Enter salary :";
			cin>>salary;
			cout<<"your total amount is:"<<Q::invest+income-expence+salary;
		}	
};
int main(){
	S s1;
	
	s1.Q::getP();
	s1.getQ();
	s1.getR();
	s1.getS();
	
	return 0;
}