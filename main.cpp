/*Develop an algorithm and write a C++ program that counts the letter occurrence in the string; 
make sure you use call by reference to the array of a class with letter and count as private member attributes when return from parse function. 
For the class member methods, provide the public accessor and modifier as well as print functions for the private member attributes.
*/
#include <iostream>
#include <cstring>
#include <cstdio>
#include "letter.h"
using namespace std;


int main() {
    Letter letters;
    int size = 0;
    letters.fillCString(letters.aChar, size);
    letters.letterType(letters.aChar);
    letters.charLookup(letters.aChar, letters.count);
    letters.histogram();

    return 0;
}
