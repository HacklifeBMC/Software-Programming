//Easy Factorial program using C
//  Testpg.c
//  
//
//  Created by BASUBI M Christian on 30/01/2017.
//
//

#include "Testpg.h"

int main ()
{
    int c,n,fact = 1;
    
    printf("enter a number to calculate the factorial \n");
    scanf("%d", &n);
    
    for (c= 1; c<=n; c++)
        fact = fact * c;
    printf("Factorial of %d =  %d\n",n,fact);
    
    return 0;
    
}
