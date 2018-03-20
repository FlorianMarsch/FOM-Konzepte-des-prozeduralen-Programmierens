//
//  printf.c
//  FOM-Prozedurale Programmierung
//
//  Created by Florian Marsch on 17.03.18.
//  Copyright © 2018 Florian Marsch. All rights reserved.
//

#include <stdio.h>

int print() {
    
    // New Line = \n
    printf("Hello, World!\n");
    
    //    leading zero
    int i = 8;
    printf("Wert : %010i\n", i); // 0000000008
    
    // rounding
    float f = 3.1486;
    printf("Wert : %.3f\n", f); // 3.149
    
    // char wit '
    char c1 = 'A';
    
    // or as ASCII
    char c2 = 66; // 'B'
    
    printf("Wert : %c und %c \n", c1,c2); // A und B
    
    
    
    
    return 0;
}
