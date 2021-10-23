#include <stdio.h>
#include "polska_gora.h"

calkowita glowna()
{
    calkowita liczba1, liczba2, suma;
    
    drukujf("Wprowadź dwie liczby całkowite: ");
    odczytajf("%d %d", &liczba1, &liczba2);

    // obliczenie sumy
    suma = liczba1 + liczba1;      
    
    drukujf("%d + %d = %d", liczba1, liczba2, suma);
    
    zwroc 0;
}
