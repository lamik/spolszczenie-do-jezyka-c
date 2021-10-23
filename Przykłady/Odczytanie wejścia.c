#include <stdio.h>
#include "polska_gora.h"

calkowita glowna()
{
    calkowita liczba;
   
    drukujf("Wprowadź liczbę całkowitą: ");  
    
    // odczytuje i przechowuje wejście
    odczytajf("%d", &liczba);

    // wyświetla wyjście
    drukujf("Wprowadziłeś: %d", liczba);
    
    zwroc 0;
}
