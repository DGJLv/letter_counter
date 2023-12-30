#include "letter.h"

void Letter::fillCString(char* pstrMsg, int& pSize){
    cout << "Enter a string: " << endl;
    for(int i=0; i<MAX_SIZE; i++){
        cin.get(pstrMsg[i]);

        if (pstrMsg[i] == '.'){
            pstrMsg[i++] = '\0';
            pSize=i;
            break;
        }
    }
}
void Letter::letterType(char eChar[]){
    int letter = 0;
    int number = 0;
    int spaces = 0;
    for (int i = 0; i < strlen(eChar); i++) {
        if (eChar[i] == ' ')
            spaces++;
        else if (isdigit(eChar[i]))
            number++;
        else if (isalpha(eChar[i]))
            letter++;
    }
    cout<< "The number of letters in "<< eChar <<" is " << letter << endl;

    cout<< "The number of numbers in "<< eChar <<" is " << number << endl;
    
    cout<< "The number of spaces in "<< eChar <<" is " << spaces << endl;

}
int Letter::charLookup(char* eChar,int count[]){
    int indexO=0;
    int input;
    for (int i = 0; i < strlen(eChar); i++)
    {
      count[i] = 1;
    }
    for(int i = 0; i < strlen(eChar); i++){
        for(int j = i+1; j < strlen(eChar); j++){
            if(eChar[i] == eChar[j]){
                eChar[j] = '*';
                count[i]++;
            }
        }
    

}return 0;}

int Letter::histogram(){
        cout<<"---- Histogram ----"<<endl;
    cout<< "Char\t" << "Count"<<endl;
    for(int i = 0; i <strlen(aChar); i++){
    if(aChar[i]!='*'){
    cout<< aChar[i]<<"\t"<<count[i]<<endl;}
    }
    return 0;
}
