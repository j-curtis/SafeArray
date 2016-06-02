# SafeArray 

A simple class that has two basic advantages over the basic C++ array. They are 
+ The contents may be type-specified by templating (and must be)
+ The index is modulo the size, so the elements may be accessed safely by any integer (and will return the index mod the size)

## Usage 

To use this class, simply include the header file (and point the compiler to the location). 
