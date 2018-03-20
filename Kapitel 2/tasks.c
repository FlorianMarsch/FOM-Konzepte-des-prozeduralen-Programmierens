//
//  tasks.c
//  FOM-Prozedurale Programmierung
//
//  Created by Florian Marsch on 20.03.18.
//  Copyright © 2018 Florian Marsch. All rights reserved.
//

#include <stdio.h>

int task0201(){
    printf("Hello, World!\n");
    return 0;
}

int task0202(){
    int a,b=5,c,d;
    
    a = b / 2; // a = 2
    c = b % 2; // c = 1
    d = b << a; // d = 20
    b = 1- --b; // b = -3
    
    printf("\n a=%i b=%i c=%i d=%i",a,b,c,d);
    
    b *= -3; // b = 9
    d %= 3; // d = 2
    c += b * d + 4; // c = 23
    a = --b + d++; // a = 10, b = 8, d = 3
    
    printf("\n a=%i b=%i c=%i d=%i",a,b,c,d);
    
    a=0; b=2; c=3; d=4;
    a = (b+2) * 2* c +1; // a = 25
    a = ++b * d++ * ++c * (-1);
    // a = -48
    // b = 3
    // c = 4
    // d = 5
    
    printf("\n a=%i b=%i c=%i d=%i",a,b,c,d);
}

int task0203 (){
    
    float a, b;
    printf("\nGeben sie die 1. Zahl ein: ");
    scanf("%f", &a);
    printf("\nGeben sie die 2. Zahl ein: ");
    scanf("%f", &b);
    printf("\nDie Summe ergibt %.2f\n", a+ b);
    
    return 0;
}

int task0204 (){
    
    float schlaege, alter;
    printf("\n\t\tHerzschlaege\n");
    printf("\nHerzschlaege pro Minute: \n");
    scanf("%f", &schlaege);
    printf("Alter in Jahren: \n");
    scanf("%f", &alter);
    printf("\nIhr Herz hat seit Ihrer Geburt ");
//    printf("%f ", schlaege * 60 * 24 * 365.25 * alter);
    printf("%.0f ", schlaege * 60 * 24 * 365.25 * alter); // Changed
    printf("mal geschlagen. ");
    return 0;
}



int task0205 (){
    
    float liter, km;
    printf("\nWie hoch ist ihr Benzinverbrauch insgesamt?: ");
    scanf("%f", &liter);
    printf("\nWie viele Km sind sie ingesamt gefahren?: ");
    scanf("%f", &km);
    printf("\nDer Verbrauch beträgt %.2f Liter pro 100 km\n", liter*100/km);
    
    return 0;
}

#include <math.h>
int task0206 (){
    
    float radius;
    float pi = M_PI;
    printf("\nWie groß ist der Radius des Kreises?: ");
    scanf("%f", &radius);
   
    printf("\nDer Flächeninhalt beträgt %.2f \n", pi*radius*radius);
    
    return 0;
}



int task0207 (){
    
    int days;
    printf("\nWie viele Tage sollen umgerechnet werden?: ");
    scanf("%i", &days);
    
    int hours = days * 24;
    int minutes = hours *60;
    int seconds = minutes * 60;
    
    
    printf("\n%i Tage sind jeweils %i Stunden, %i Minuten oder %i Sekunden \n", days,hours,minutes,seconds);
    
    return 0;
}
int task0208 (){
    
    int seconds;
    printf("\nWie viele Sekunden sollen umgerechnet werden?: ");
    scanf("%i", &seconds);
    
    
    int minutes =  seconds / 60;
    int restSeconds = seconds % 60;
    
    int hours = minutes /60;
    int restMinutes = minutes % 60;
    
    int days = hours / 24;
    int restHours = hours % 24;
    
    printf("\n%i Sekunden sind %i Tage %i Stunden %i Minuten %i Sekunden \n", seconds,days, restHours,  restMinutes, restSeconds);
    
    return 0;
}





