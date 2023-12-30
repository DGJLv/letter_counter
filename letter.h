#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
const int MAX_SIZE = 100;
class Letter{
public:
    void fillCString(char* pstrMsg, int& pSize);
    void letterType(char eChar[]);
    int charLookup(char* eChar,int count[]);
    int histogram();
    char aChar[MAX_SIZE];
    int count[MAX_SIZE];
};
