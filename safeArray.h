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

template <class T>
class safeArray{
	public:
		int size;	//The number of elements in our array
		T * elements;	//This points to an array of elements

		safeArray(int);	//This constructor will generate an array of the given size

		T& at(int); //accesses the element at the given index (modulo size) and returns pointer to it
};

//We need a mod function
int mod(int x, int m){
	//returns x mod m
	return (x%m + m)%m;
}

template <class T>
safeArray<T>::safeArray(int num){
	if(num > 0){
		size = num;
		elements = new T[size];
	}
	else{
		std::cout<<"Error: size must be larger than 0"<<std::endl;
	}
}

template <class T>
T& safeArray<T>::at(int index){
	return elements[mod(index,size)];
}


#endif