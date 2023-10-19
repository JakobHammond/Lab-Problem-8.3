//
//  main.cpp
//  p8-3
//
//  Created by Jakob Hammond on 10/19/23.
//

#include <iostream>
using namespace std;


int romanCharValue(char r);
int main(void){
    
    
}

int romanCharValue(char r){
    if(r == 'I') return 1;
    if(r == 'V') return 5;
    if(r == 'X') return 10;
    if(r == 'L') return 50;
    if(r == 'C') return 100;
    if(r == 'D') return 500;
    if(r == 'M') return 1000;
}
