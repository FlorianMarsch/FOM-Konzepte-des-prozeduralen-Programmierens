//
//  functions.c
//  FOM-Prozedurale Programmierung
//
//  Created by Florian Marsch on 18.04.18.
//  Copyright © 2018 Florian Marsch. All rights reserved.
//

#include <stdio.h>


int addiere(int zahl1, int zahl2){
    return zahl1+zahl2;
}


int start_addiere(){
    int x= 1;
    int y=2;
    int ergebnis = addiere(x,y);
    printf("%i",ergebnis);
    return 0;
}
