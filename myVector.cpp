#include <iostream>
#include "myVector.h"
using namespace std;
	
ostream &operator << (ostream& out,const myVector& v)
{
	out<<"The maximum capacity of array comes out to be: "<<v.capacity<<endl;
	out<<"The size of array comes out to be as follows:  "<<v.size<<endl;
	out<<"The elements of array comes out to be as follows:"<<endl;
	for(int i=0;i<v.size;i++)
	{
		out<<v.arrayPtr[i]<<" ";
		if((i+1)%8==0)
		{
			cout<<endl;
		}
	}
	cout<<endl;
	return out;
}

istream &operator >> (istream& in, myVector& v)
{
    cout<<"The maximum capacity of array you want?: "<<endl;
	in>>v.capacity;
	cout<<"The size of array you want?:  "<<endl;
	in>>v.size;
	cout<<"Enter the elements of array one by one: "<<endl;
	for(int i=0;i<v.size;i++)
	{
		in >> v.arrayPtr[i];
	}
	return in;
}

myVector::myVector()
{
	capacity=2;
	size=0;
	arrayPtr=new int [size];
	for(int i=0;i<size;i++)
	{
		arrayPtr[i]=0;
	}
}

myVector::myVector(int v)
{
	capacity=v;
	size=0;
	arrayPtr=new int [capacity];
	for(int i=0;i<capacity;i++)
	{
		arrayPtr[i]=0;
	}
}

myVector::myVector(const myVector& v)
{
	capacity=v.capacity;
	size=v.size;
	for(int i=0;i<size;i++)
	{
		arrayPtr[i]=v.arrayPtr[i];
	}
}

int myVector::get_capacity()
{
	return capacity;
}

myVector &myVector::operator+ (int v)
{
	size++;
	if(size>capacity)
	{
	int *B = new int[capacity];
	for(int i=0;i<size;i++)
	{
		B[i]=arrayPtr[i];
	}
	capacity=capacity*2;
	delete [] arrayPtr;
	arrayPtr =new int [capacity];
	for(int i=0;i<size-1;i++)
	{
		arrayPtr[i]=B[i];
	}
	arrayPtr[size]=v;
	}
	else
		arrayPtr[size]=v;
	return *this;
}

void myVector::operator-()
{
	arrayPtr[size]=0;
	size=size-1;
}

myVector &myVector::operator+(const myVector& v)
{
	int t,t1;
	t=capacity+v.capacity;
	t1=size+v.size;
	capacity=t;
	myVector b(t);
	int i=0;
	for(;i<size;i++)
	{
		b.arrayPtr[i]=arrayPtr[i];
	}
	size=t1;
	for(int k=0;i<size;k++)
	{
		b.arrayPtr[i]=v.arrayPtr[k];
	}
	delete []arrayPtr;
	arrayPtr =new int[capacity];
	for(int i=0;i<size;i++)
	{
		arrayPtr[i]=b.arrayPtr[i];
	}
	return *this;
}

void myVector::operator=(const myVector& v)
{
	if(capacity<v.capacity)
	{
		capacity=v.capacity;
		size=v.size;
		for(int i=0;i<size;i++)
		{
			arrayPtr[i]=v.arrayPtr[i];
		}
	}
	else
	{
		capacity=v.capacity;
		delete [] arrayPtr;
		arrayPtr=new int[capacity];
		for(int i=0;i<size;i++)
		{
			arrayPtr[i]=v.arrayPtr[i];
		}
	}
}

int &myVector::operator[](int index )const
{
	if(index>=0 && index<=capacity)
	{
		return arrayPtr[index];
	}
}

void myVector::operator!()
{
	cout<<"Capacity: "<<capacity<<endl;
	cout<<"Size: "<<size<<endl;
	cout<<"Array elements: ";
	for(int i=0;i<size;i++)
	{
		cout<<arrayPtr[i]<<" ";
	}
	cout<<endl;
}

myVector::~myVector()
{
	delete [] arrayPtr;
	arrayPtr=NULL;
	size=0;
}