//
//  if.c
//  FOM-Prozedurale Programmierung
//
//  Created by Florian Marsch on 27.03.18.
//  Copyright © 2018 Florian Marsch. All rights reserved.
//

#include <stdio.h>


int ifclause() {
    
   
    if(1) printf("Hello, World!\n"); // Hello World!
    if(0) printf("Hello, World!\n"); // code will never be executed
    
    int a = 0;
    int b = 1;
    if( a ^ b){  // exclusive or
        printf("a=%i b=%i\n", a,b); // a=0 , b=1
    }
    a = 1;
    if( a ^ b){  // exclusive or
         printf("a=%i b=%i\n", a,b); // code will never be executed
    }
    
    
    a = 5;
    int max = (a>b)?a:b;
    printf("maximun = %i\n", max); // maximum = 5
    
    return 0;
}
