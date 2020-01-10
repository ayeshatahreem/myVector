#include <iostream>
#include "myVector.h"

using namespace std;

int main()
{
	char choice='Y';
	cout<<"Do you want to implement operator overloading? :(Y/N)"<<endl;
	cin>>choice;
	while(choice=='Y')
	{
	myVector v1(10),v2;
	cout<<"*********************Implementing operators*************************"<<endl;
	cout<<"Implementing cin operator as follows: "<<endl;
	cin>>v1;
	cout<<"Implementing cout operator as follows: "<<endl;
	cout<<v1<<endl;
	cout<<"Implementing array addition operator as follows: "<<endl;
	v1+5;
	cout<<"Implementing cout operator as follows: "<<endl;
	cout<<v1<<endl;
	cout<<"Implementing last element deletion operator as follows: "<<endl;
	-v1;
	cout<<"Implementing cout operator as follows: "<<endl;
	cout<<v1<<endl;
	cout<<"Implementing cin operator as follows: "<<endl;
	cin>>v2;
	cout<<"Implementing assignment operator as follows: "<<endl;
	v1=v2;
	cout<<"Implementing cout operator as follows: "<<endl;
	cout<<v1<<endl;
	cout<<"Implementing [] operator as follows: "<<endl;
	v1[1]=5;
	cout<<"Implementing cout operator as follows: "<<endl;
	cout<<v1<<endl;
	cout<<"Do you want to implement operator overloading? :(Y/N)"<<endl;
	cin>>choice;
	}
	system("pause");
	return 0;
}
