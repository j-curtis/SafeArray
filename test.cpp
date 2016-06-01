//This is a simple test of the safeArray class
//Jonathan Curtis
//08/27/15

#include "safeArray.h"
#include <iostream>

int main(){
	std::cout<<"Testing"<<std::endl;

	safeArray<double> A(4);
	A.at(0) = 0.0;
	A.at(1) = 1.0;
	A.at(2) = 2.0;
	A.at(-1) = 3.0;

	for(int i = 0; i < 4; i++){
		std::cout<<A.at(i)<<std::endl;
	}

	safeArray<char> B(3);

	B.at(0) = 'a';
	B.at(1) = 'b';
	B.at(-1) = 'c';

	for(int i = 0; i < 3; i++){
		std::cout<<B.at(i)<<std::endl;
	}

	return 0;
}