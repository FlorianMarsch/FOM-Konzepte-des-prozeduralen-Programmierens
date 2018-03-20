//
//  scanf.c
//  FOM-Prozedurale Programmierung
//
//  Created by Florian Marsch on 20.03.18.
//  Copyright © 2018 Florian Marsch. All rights reserved.
//

#include <stdio.h>


int scan() {

    int alter;
    printf("Wie alt sind sie? ");
    scanf("%i", &alter); // need to be with & (Pointer to variable)
    printf("\nIn %i Jahren sind Sie 100!\n", 100-alter);
    
    
    return 0;
}
