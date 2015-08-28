//This is the implementation file for the safeArray class
//Jonathan Curtis
//08/27/15

#include "safeArray.h"
#include <iostream>

//Constructor
//We accept the size as an argument and generate an array of that many objects of type T
//We initialize them to null pointers
template <typename T>;
safeArray<T>::safeArray(int num){
	//First we check to make sure num>= 1. 
	//If num<1 we return an error
	if(num < 1){
		std::cout<<"Size must be greater than 0. Error."<<std::endl;
	}
	else{
		//We proceed by allocating an array of the appropriate size 
		size = num;	//The size of the array
		elements = new T[size];	//Create an array of T's

	}
}

template <typename T>;
T& safearray<T>::at(int index){
	return elements[index%size];	//This will automatically wrap the index to the proper range
	//It does it numpy style so that -1 is the last element, -2 is the second to last element, etc..
}