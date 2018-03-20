//
//  tasks.c
//  FOM-Prozedurale Programmierung
//
//  Created by Florian Marsch on 20.03.18.
//  Copyright © 2018 Florian Marsch. All rights reserved.
//

#include <stdio.h>

int task0203 (){
    
    float a, b;
    printf("\nGeben sie die 1. Zahl ein: ");
    scanf("%f", &a);
    printf("\nGeben sie die 2. Zahl ein: ");
    scanf("%f", &b);
    printf("\nDie Summe ergibt %.2f\n", a+ b);
    
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
int main (){
    
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





