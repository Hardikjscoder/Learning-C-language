#include <stdio.h> 

int main() {
    // File Pointer
    FILE *ptr;
    ptr = fopen("sample.txt", "a"); 
    ptr = fopen("sample.txt", "r"); 
    ptr = fopen("sample.txt", "w"); 

    return 0;
}

/*

* FILE I/O => Input/Output operations in a File => Reading and Writing a File

* RAM is volatile and its content is lost once the program terminates. In order to persist the data forever, we use files.

* A file is data stored in a storage device.

! File opening modes in C 
- "r" -> open for reading
- "rb" -> open for reading in binary
- "w" -> open for writing
- "wb" -> open for writing in binary
- "a" -> open to append

*/