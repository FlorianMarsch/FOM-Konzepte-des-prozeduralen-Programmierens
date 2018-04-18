//
//  fibunacci.c
//  FOM-Prozedurale Programmierung
//
//  Created by Florian Marsch on 18.04.18.
//  Copyright © 2018 Florian Marsch. All rights reserved.
//

#include <stdio.h>

int fibunacci(){
    int n, vorvor = 0, vor = 1, fib = 1, i;
    printf("Gebe eine Zahl ein : \n");
    scanf("%i", &n);
    
    if(n == 0 || n == 1){
        printf("%i ",n );
    }else{
        for (i=2; i<n; i++) {
            vorvor = vor;
            vor = fib;
            fib = vor + vorvor;
        }
    }

    
    printf("fib: %i\n",fib);
    
    return 0;
}
