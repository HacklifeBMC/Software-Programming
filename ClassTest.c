//
//  ClassTest.c
//  
//
//  Created by BASUBI M Christian on 13/02/2017.
//
//

#include <stdio.h>

int main () {
    int fib[10];
    
    fib[0]= 1;
    fib[1]= 2;
    
    for (int i =2; i<10; i++)
    {
        fib[i]= fib[i-1] + fib[i-2];    }
    
    for (int j = 0; j<10; j++)
    {
        printf(" %d\n", j);
    }
    
    return 0;
}

    

