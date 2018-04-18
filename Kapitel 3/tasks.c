//
//  tasks.c
//  FOM-Prozedurale Programmierung
//
//  Created by Florian Marsch on 27.03.18.
//  Copyright © 2018 Florian Marsch. All rights reserved.
//

#include <stdio.h>

int task0302(){
    int a;
    int b;
    printf("Gebe eine Zahl ein : \n");
    scanf("%i", &a);
    printf("Gebe eine andere Zahl ein : \n");
    scanf("%i", &b);
    
    if(a < b){
        printf("Die erste Zahl ist kleiner \n");
    }else if(a > b){
        printf("Die erste Zahl ist größer\n");
    }else{
        printf("Die Zahlen sind gleich groß\n");
    }
    
    return 0;
}

int task0303 (){
    int a=7, b=5, c=10;
    
    if( a < b < c){ // a<b = false -> 0 // 0 < c = true ->  printf
        printf("%i \n",b);
    }
    
    return 0;
}
int task0304 (){
    printf("Wert für wahr %d \tWert für falsch %d\n", 2 < 3 ,7 != 7);
    return 0;
}

int task0305(){
    int alter;
    printf("Gebe dein Alter ein : \n");
    scanf("%i", &alter);
    
    if(alter >= 0 && alter < 18){
        printf("Kind/Jugendlicher (unter 18) \n");
    }else if(alter < 67 && alter >= 18){
        printf("Erwachsener (18 bis unter 67) \n");
    }else if(alter >= 67){
        printf("Rentner (ab 67)\n");
    }else{
        printf("Falsche Eingabe\n");
    }
    return 0;
}

int task0307(){
    int a,b,c,d;
    printf("Gebe eine Zahl ein : \n");
    scanf("%i", &a);
    printf("Gebe eine zweite Zahl ein : \n");
    scanf("%i", &b);
    printf("Gebe eine dritte Zahl ein : \n");
    scanf("%i", &c);
    
    int min=a<b?a:b;
    min=min<c?min:c;
    
    /*
     shortest way with 20 chars
     int d;
     
     d = a < b ? a : b ; d = d < c ? d : c;
     
     d = a < b & a < c ? a : b < c ? b : c;
     
     */
    
    printf("Die kleinste Zahl ist %i \n", min);
    return 0;
}

int task0308(){
    int a,b,c;
    printf("Gebe eine Zahl ein : \n");
    scanf("%i", &a);
    printf("Gebe eine zweite Zahl ein : \n");
    scanf("%i", &b);
    printf("Gebe eine dritte Zahl ein : \n");
    scanf("%i", &c);
    
    int max=a>b?a:b;
    max=max>c?max:c;
    
    printf("Die größte Zahl ist %i \n", max);
    return 0;
}

int task0310(){
    int a;
    printf("Gebe eine Zahl für einen Wochentag ein : \n");
    scanf("%i", &a);
    
    
    switch(a) {
        case 1: printf("Montag\n");
            break;
        case 2: printf("Dienstag\n");
            break;
        case 3: printf("Mittwoch\n");
            break;
        case 4: printf("Donnerstag\n");
            break;
        case 5: printf("Freitag\n");
            break;
        case 6: printf("Samstag\n");
            break;
        case 7: printf("Sonntag\n");
            break;
        default: printf("Kein Wochentag\n");
            break;
    }
    
    
    return 0;
}

int task0311(){
    int a;
    printf("Gebe eine Zahl für einen Wochentag ein : \n");
    scanf("%i", &a);
    
    
    switch(a) {
        case 1:
        case 2:
        case 3: printf("erste Wochenhälfte\n");
            break;
        case 4:
        case 5: printf("zweite Wochenhälfte\n");
            break;
        case 6:
        case 7: printf("Wochenende\n");
            break;
        default: printf("Kein Wochentag\n");
            break;
    }
    
    
    return 0;
}

int task0312(){
    int a;
    float preis, zahlung, restbetrag, einwurf;
    printf("Wasser 1 - Bier 2 - Wein 3 : \n");
    scanf("%i", &a);
    
    
    switch(a) {
        case 1:
            printf("Wasser kostet 2\n");
            preis = 2.00;
            break;
        case 2:
            printf("Bier kostet 3\n");
            preis = 3.00;
            break;
        case 3:
            printf("Wein kostet 4\n");
            preis = 4.00;
            break;
        default:
            printf("Kein Getränk für dich\n");
            return 0;
    }
    restbetrag = preis;
    do{
        printf("Es werden noch %.2f Euro benötig. Wirf eine Münze ein:\n", restbetrag);
        scanf("%f", &einwurf);
        restbetrag = restbetrag - einwurf;
        
    }while(restbetrag > 0);
    
    
    printf("Bitte entnehme dein Getränk\n");
    if(restbetrag != 0){
        printf("Rückgeld %.2f:\n", -restbetrag);
    }
    return 0;
}
