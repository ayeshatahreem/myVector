#ifndef V_H
#define V_H

#include <iostream>
using namespace std;

class myVector
{
public:
	//<< operator which prints the elements of myVector
	friend ostream &operator << (ostream&,const myVector&);

	//>> operator which takes as input the elements of myVector
	friend istream &operator >> (istream&, myVector&);
	
	//Default constructor
	myVector();
	
	//Parametrized constructor
	myVector(int);
	
	//Copy constructor
	myVector(const myVector& );

	//getters
	int get_capacity();

	//addition of an element in the array
	myVector& operator+(int);

	//deletion of an element in the array
	void operator!();

	//addition of two objects
	myVector& operator+(const myVector&);

    //size-1
	void operator-();

	//assignment operator for 2 objects
	void operator=(const myVector& a);

	//array subscript operator
	int& operator[](int  )const;
	
	//dynamic memory allocation
	~myVector();

private:
	//Private data member arrayPtr to integer array
	int *arrayPtr;

	//size of array
	int size;

	//capacity of array
	int capacity;

};
#endif
