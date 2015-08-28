//This is the header file for the SafeArray class
//Jonathan Curtis

//This class will be a simple array object that also knows its size and handles bounds safely

//We will only outline the one dimensional class know
//However, we will bear in mind the goal of an arbitrarily dimensioned array
//Thus, we leave methods available for use via polymorphism
//We also use a template for the type of the elements of the array itself
#include <iostream>

#ifndef	SAFEARRAY_H
#define SAFEARRAY_H

template<class T>
class safeArray{
	public:
		int size;	//The number of elements in our array
		T * elements;	//This points to an array of elements

		safeArray(int);	//This constructor will generate an array class of num_elements size

		virtual const T& at(int);	//This returns a reference to the element stored at index
		//This method is virtual so that it may be overloaded with a multi-dimensional derivative class
		
};
#endif