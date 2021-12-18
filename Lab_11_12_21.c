#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    float x = 0.0,
          a = 0.0,
          b = 0.0,
          c = 0.0,
          delta;

    printf("Podaj a: ");
    scanf("%d", &a);
    printf("\nPodaj b: ");
    scanf("%d", &b);
    printf("\nPodaj c: ");
    scanf("%d", &c);
    if((a == 0) && (c != 0) && (b != 0)){
        x = -(c/b);
        printf("Wynik: %f", x);
    }
    if((a != 0) && (b == 0) && (c != 0)){
        x = (-c/a);
        printf("Wynik: %f, %f", x, -x);
    }
    if((a != 0) && (b != 0) && (c == 0)){
        x = (-b/a);
        printf("Wynik: %f", x);
    }
    if((a == 0) && (b == 0) && (c == 0)) printf("Wszystkie wspolczyniki rowne 0!");
    if((a != 0) && (b != 0) && (c != 0)){
        delta = pow(b,2) - (4*a*c);
        //if (delta == 0.0) printf("Wynik: %f", -b/(2*a));
        if (delta < 0.0) printf("Nie ma rozwiazania w zbiorze liczb rzeczywistych");
        if (delta >= 0.0){
            printf("Wynik: %f, %f", (-b - sqrt(delta))/(2*a), (-b + sqrt(delta))/(2*a));
        }
    }


    return 0;
}
/*---------------
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX 10
#define MIN 1

int main(void)
{
    int a,
        b;

    do{
        printf("Podaj bok w granicach od %d do %d: ", MIN, MAX);
        scanf("%d",&a);
    }while(!((a <= MAX) && (a >= MIN)));

    do{
        printf("Podaj drugi bok w granicach od %d do %d: ", MIN, MAX);
        scanf("%d",&b);
    }while(!((b <= a*2) && (b >= a)));

    printf("Pole prostokatu jest rowne %d: ", a*b);
    printf("\nPole powierzchni kola o promieniu b jest rowne %d: ", (int)(M_PI*pow(b,2))); //rzutowanie typów
    printf("\nPole prostokatu jest rowne %f: ", floor(a)*ceil(b));
    return 0;
}

/*#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX 1
#define MIN -1

int main(void)
{
    float sin_kat,
          kat;
    do{
        printf("Podaj kat w granicach od %.2f do %.2f: ", MIN, MAX); //%.2f dwa miejsca po przecinku np 360.00
        scanf("%f",&sin_kat);
    }while(!((sin_kat <= MAX) && (sin_kat >= MIN)));
    kat = (asin(sin_kat)*180)/M_PI;
    printf("Kat dla sin %d jest %f: ", sin_kat, kat);
    return 0;
}
/*-------------------------
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX 360.0
#define MIN 0.0
//podaj kat w stopniach, wartość rzeczywista miedzy 0 a 360, przeliczyć na rad i podac wynik kata i sin kat
int main(void)
{
    float kat;
    do{
        printf("Podaj kat w granicach od %.2f do %.2f: ", MIN, MAX); //%.2f dwa miejsca po przecinku np 360.00
        scanf("%f",&kat);
    }while(!((kat <= MAX) && (kat >= MIN)));
    float kat_rad,
          wynik_sin,
          wynik_cos;
    kat_rad = (M_PI/180) * kat;
    wynik_sin = sin(kat_rad);
    wynik_cos = cos(kat_rad);
    printf("Wynik sin kata %f jest rowny %f", kat, wynik_sin);
    printf("\nWynik sin^2+cos^2 kata %f jest rowny %f", kat, pow(wynik_sin,2)+pow(wynik_cos,2));
    return 0;
}


/*--------------------------------
#include <stdio.h>
#include <stdlib.h>

#define MAX 10
#define MIN 1
//zarządać od user podanai wartość int któa będzie w range 1-10, ale na to, ze range  zmieni się
int main(void)
{
    int x;
    /*printf("Podaj liczbe w granicach od %d do %d: ", MIN, MAX);
    scanf("%d",&x);
    if((x <= MAX) && (x >= MIN)) printf("Liczba: %d", x);
    else printf("Liczba nie miesci sie w zakresie");
    do{
        printf("Podaj liczbe w granicach od %d do %d: ", MIN, MAX);
        scanf("%d",&x);
    }while(!((x <= MAX) && (x >= MIN))); //(x >= MAX) || (x <= MIN) z prawa de Morgana negacja konukcji jest alternatywą
    printf("Liczba: %d", x);
    return 0;
}*/
