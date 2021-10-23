#include <stdio.h>
#include "polska_gora.h"

calkowita glowna()
{
    podwojnyzmiennyprzecinek a, b, iloczyn;
    drukujf("Wprowadź dwie dowolne liczby: ");
    odczytajf("%lf %lf", &a, &b);  
 
    // Obliczenie iloczynu
    iloczyn = a * b;

    // %.2lf wyświetla wynik 2 miejsca po przecinku
    drukujf("Iloczyn = %.2lf", iloczyn);
    
    zwroc 0;
}
