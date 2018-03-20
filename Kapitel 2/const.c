//
//  FOM-Prozedurale Programmierung
//
//  Created by Florian Marsch on 20.03.18.
//  Copyright © 2018 Florian Marsch. All rights reserved.
//

#include <stdio.h>

int constants() {
    
    
    // constants are imutable
    const int raeder = 4;
    // raeder = 5;  Cannot assign values to constants
      printf("Wert : %i\n", raeder);
    
    
    // symbolic const
    #define PI 3.1414
    float pi = PI; // got replaced by preprocessor
    printf("Wert : %1.2f\n", pi); // 3.14
    
    // Bit movement
    int x =8,y ;
    y = x << 1; // same as y = x * 2
    
    /*
     128  64  32  16   8   4   2   1
     2^7 2^6 2^5 2^4 2^3 2^2 2^1 2^0
       0   0   0   0   1   0   0   0  Binary 8
       0   0   0   1   0   0   0   0  Binary 8 << 1
     */
    
    printf("y= %d\n", y); // y=16
    
    // typecast
    int i = 1, j = 2;
    float f = i / j;
    printf("f = %.1f\n",f );// f = 0
    
    f = (float) i  / (float) j;
    printf("f = %.1f\n",f );// f = 0.5
    
    return 0;
}
