#include <stdio.h>
#include <stdlib.h>

#define I_DOL     5
#define I_GORA    10

#define F_DOL     5.1
#define F_GORA    10.9

float czytaj_float_ograniczenia(float dol, float gora){
    char    lancuch[16];
    float   liczba;

    do{
        printf("Podaj wartosc rzeczywista w przedziale od %f do %f\n", dol, gora);
        scanf("%s", &lancuch);
        liczba = atof(lancuch);
    }while(liczba < dol || liczba > gora);

    return liczba;
}

                            // \/parametry formalne
int czytaj_int_ograniczenia(int dol, int gora){
    char    lancuch[16];
    int     liczba;

    do{
        printf("Podaj wartosc calkowita w przedziale od %d do %d\n", dol, gora);
        scanf("%s", &lancuch);
        liczba = atoi(lancuch);
    }while(liczba < dol || liczba > gora);

    return liczba;
}
