//2. Array Of Object (Bank Management System) 
//Requirements(A/C Number , A/C Name , A/C Type , A/C Branch , A/C Balance ) Search Record By A/C Number.

#include<iostream>
using namespace std;

class A{
	public:
		 int number;
		
	void setData(){
		cout<<"Enter your AC number:";
		cin>>number;
		
	if(number==1111){
		cout<<"Your name is : Riya"<<endl;
		cout<<"Your AC type is : Saving"<<endl;
		cout<<"Your branch is : varachha"<<endl;
		cout<<"Your bank balance is : 120000 $"<<endl;
	}else if(number==2222){
		cout<<"Your name is : Priya"<<endl;
		cout<<"Your AC type is : FD"<<endl;
		cout<<"Your branch is : Hirabaug"<<endl;
		cout<<"Your bank balance is : 170000 $"<<endl;
	}else if(number==3333){
		cout<<"Your name is : Raj"<<endl;
		cout<<"Your AC type is : Joint"<<endl;
		cout<<"Your branch is : Bhagal"<<endl;
		cout<<"Your bank balance is : 240000 $"<<endl;
	}else{
		cout<<"not found...";
	}	
	}	
};
int main(){
	A a1;
	
	a1.setData();
	
	return 0;
}