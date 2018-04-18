//
//  tasks.c
//  FOM-Prozedurale Programmierung
//
//  Created by Florian Marsch on 18.04.18.
//  Copyright © 2018 Florian Marsch. All rights reserved.
//

#include <stdio.h>

float multipliziere(float zahl1, float zahl2){
    return zahl1*zahl2;
}
float eingabeZahl(){
    float eingabe;
    printf("Gib eine Zahl ein\n");
    scanf("%f",&eingabe);
    return eingabe;
}

void ausgabeErgebnis(float ergebnis){
    
    printf("Das Ergebnis ist : %f\n",ergebnis);
   
    return ;
}

int main(){
    float x= eingabeZahl();
    float y= eingabeZahl();
    float ergebnis = multipliziere(x,y);
    ausgabeErgebnis(ergebnis);
    return 0;
}
