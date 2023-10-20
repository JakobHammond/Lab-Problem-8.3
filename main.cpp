//
//  main.cpp
//  p8-3
//
//  Created by Jakob Hammond on 10/19/23.
//

#include <iostream>
using namespace std;


int romanCharValue(char r);
int convertRomanToInt(string s);
int countCharacter(string s);
int main(void){
    int value;
    
    
    
}

int romanCharValue(char r){
    if(r == 'I') return 1;
    if(r == 'V') return 5;
    if(r == 'X') return 10;
    if(r == 'L') return 50;
    if(r == 'C') return 100;
    if(r == 'D') return 500;
    if(r == 'M') return 1000;
    else return 0;
}

int convertRomanToInt(string s){
    int value = 0;
    for(int i = 0; i < countCharacter(s); i++){
        string current;
        string right;
        int valCurrent;
        int valRight = 0;
        
       
        current = s.substr(i);
        
        right = s.substr(i + 1);
        char convertRight = right.front();
        valRight = romanCharValue(convertRight);
        
        char convertCurrent = current.front();
        valCurrent = romanCharValue(convertCurrent);
        if(valCurrent < valRight){
            valCurrent = valCurrent * -1;
        }
        value += valCurrent;
    }
    return value;
}

int countCharacter(string s){
    return s.length();
}
