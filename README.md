# myVector
Class called myVector that stores integers in it.

Following functionalities have been implemented:

1.	Private data member arrayPtr to integer array
2.	Private data member capacity of array
3.	Private data member that specifies the actual elements i.e.current size(elements added to the array by the user (initially it should be set to zero))
4.	Default constructor (initially it should allocate an array of size 2.  You will have to set the other private members too.  Initialize the array to zero)
5.	Constructor with int parameter (the int parameter specifies the capacity of the array).  The constructor should initialize the entire array to zero.
6.	Copy constructor (should make a deep copy)
7.	Destructor (if the array is allocated then deallocate it)
8.	Get function for total capacity…(think of other get functions)
9.	(+) operator that takes an integer variable as parameter.  This method should add one integer to the array and increase the number of current elements.  If the allocated size is not sufficient then increase the capacity of the array by double.  Copy the old array in the new one (including the new element) and delete the old array.
10.	– operator that takes no parameters.  This method should delete the last added value from the array and change the current size.  (note no memory allocation or deallocation will take place here)
11.	(+) operator that takes amyVector object as argument.  What should be the exact type of that parameter?  This operator should return a new array which has all the elements of the current object (lhs) and the array passed as parameter (rhs).
12.	= operator which should make a deep copy.  Make sure if lval is already allocated then it should be dealloated and allocated again with the size of the rval
13.	[] operator which should set the element at index to the value specified in parameter. If the index is out of bound then return false otherwise return true.
14.	[] operator which should place the value of an element at index in the parameter.  If the index is out of bound then return false otherwise return true.
15.	(>>) operator which takes as input the elements of myVector.
16.	<< operator which prints the elements of myVector.
