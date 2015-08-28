//This is a simple test of the safeArray class
//Jonathan Curtis
//08/27/15

#include "safeArray.h"

#include <iostream>

int main(){
		int n = 3;

		safeArray<double> array(n);

		double val1 = 0.0;
		double val2 = 1.0;
		double val3 = 2.0;

		array.at(0) = val1;
		array.at(1) = val2;
		array.at(-1) = val3;

		for(int i = 0; i < n; i++){
			std::cout<<array.at(i)<<std::endl;
		}

		return 0;
}