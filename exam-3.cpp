//3. Give an example which shows Exception handling of division by zero exception.
#include<iostream>
using namespace std;

int main(){
	int x=44;
	int y=0;
	int z;
	
	try{
		if(y==0){
			throw 9;
		}else{
			z=x/y;
			cout<<z<<endl;
		}
	}
	catch(int a)
	{
		cout<<"ERROR - THE NUMBER IS CANNOT DIVIDE BY 0..."<<endl;
	}
}