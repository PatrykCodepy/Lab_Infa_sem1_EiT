//Napisac prgram, ktory:
// 1.Uzyska od user wartosc int z przedzialu -50 do +50
// 2.Uzyskana wartosc potraktowac jako temperature w stopniach Celsjusza
// 3.Przeliczyć stopnie ze skali Celsjusza na Farehenta
// 4. Wynik moze być float
// T(F) = T(C) * 9/5 +32
//Operator / dla liczb int daje wynik int

#include <stdio.h>
#include <stdlib.h>

#define MAX     50
#define MIN     -50

float konwesja_na_Farehenta(int max, int min){
    char    lancuch[16];
    int     liczba;
    float   wynik;

    do{
        printf("Podaj wartosc calkowita w przedziale od %d do %d\n", min, max);
        scanf("%s", &lancuch);
        liczba = atoi(lancuch);
    }while(liczba < min || liczba > max);

    wynik = (liczba * 9)/5.0 + 32;

    return wynik;

}

int main(void){
    float Farehenta;
    Farehenta = konwesja_na_Farehenta(MAX, MIN);
    printf("Wynik w Farehenta: %f ", Farehenta);
    return 0;
}

/*#include "Lab_3.h"

int main(void){
    int     liczba;
    float   liczba_f;

    liczba = czytaj_int_ograniczenia(I_DOL, I_GORA);

    printf("Odczytana: %d\n", liczba);

    liczba_f = czytaj_float_ograniczenia(F_DOL, F_GORA);

    printf("Odczytana: %f\n", liczba_f);

    return 0;
}

/*-------------------------------
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) //argc zmiena licznikowa, argumenty danie przez system operacyjny, argv jest podaną nazwąprogramu
{
    int i,
        liczba;

    float liczba_float;

    if(argc > 1){
       for(i = 0; i < argc; i++){
            printf("%s\n", argv[i]);
        }

        liczba = atoi(argv[1]); //konwersja ciagu znakow na int

        printf("Po konwersji: %d\n", liczba);

        liczba_float = atof(argv[2]);

        printf("Po konwersji: %0.2f\n", liczba_float);
    }

    for(i = 0; i < liczba; i++){
        printf("%d\n", i + 1);
    }

    return 0;
}*/
