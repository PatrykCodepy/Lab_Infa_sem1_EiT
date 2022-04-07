#include <stdio.h>
#include <stdlib.h>

#define A_MAX 16
#define A_MIN 10

int czytaj_int_ograniczenia(int dol, int gora){
    int     liczba;

    do{
        printf("Podaj wartosc calkowita w przedziale od %d do %d\n", dol, gora);
        scanf("%d", &liczba);
    }while(liczba < dol || liczba > gora);

    return liczba;
}

void drukuj_tablice_odwrotnie(float tab[][2]){
    int     i;

    for(i = 9 - 1; i >= 0; i--){
        printf("%0.1f\n", tab[i][1]);
    }
}

void sortowanie(float tab[9][2])
{
    int j,k=1,i;
    float zmiana;



    for(i = 0 ; i < 9; i++){
        for(j = i + 1; j < 9; j++){

        if(tab[i][k] > tab[j][k]){

            zmiana     = tab[i][k];
            tab[i][k]   = tab[j][k];
            tab[j][k] = zmiana;
        }
            }
        }

    for(j = 0 ; j < 9; j++){
        printf("%.1f, %d\n",tab[j][1],j);
    }
    drukuj_tablice_odwrotnie(tab);
}

void pole_deltoidu(int tabela_a[], int tabela_b[]){
    float tabela_c[9][2];
    int i,
        k = 0,
        l = 0,
        j;
    int tab_a[9],
        tab_b[9];

    for(j = 0 ; j < 9; j++){
        for(i = 0 ; i < 2; i++){
            //printf("%d, %d \n",j,i);
            if(i == 0){
                //printf("dla a;%d, l: %d   ",tabela_a[l],l);
                tab_a[j] = tabela_a[l];
                if((j+1)%3 == 0){ l++; }
            }
            if(i == 1){
                if(k == 3){k=0;}
                //printf("dla b; %d, k: %d\n",tabela_b[k],k);
                tab_b[j] = tabela_b[k];
                k++;
            }
        }
    }


    /*for(j = 0 ; j < 9; j++){
        for(i = 0 ; i < 2; i++){
            printf("%d, %d, %d\n",tabela_c[j][i],j,i);
        }
    }*/
    /*for(j = 0 ; j < 9; j++){
        printf("%d, %d, %d\n",tab_a[j],tab_b[j],j);

    }*/

    for(i = 0; i < 9; i++){
        tabela_c[i][0] = i;
        tabela_c[i][1] = 0.5 * tab_a[i]*tab_b[i];
        //printf("%.1f\n",tabela_c[i][1]);
    }

    float   min,
            max;
    int     min_licz = 0,
            max_licz = 0;

    min = tabela_c[9][1];

    for(i = 1; i < 9; i++){
        if(tabela_c[i][1] > min){ min = tabela_c[i][1]; min_licz = i;}
    }

    max = tabela_c[0][1];

    for(i = 1; i < 9; i++){
        if(tabela_c[i][1] < max){ max = tabela_c[i][1]; max_licz = i;}
    }
    printf("Max: %.1f dla a %d i dla b %d \n",max, tab_a[max_licz], tab_b[max_licz]);
    printf("Min: %.1f dla a %d i dla b %d \n",min, tab_a[min_licz], tab_b[min_licz]);

    sortowanie(tabela_c);

}

int main()
{
    int a,
        b;
    printf("Podaj parametr a i b bedacymi liczbami calkowitymi z przedzialu dla a: od %d do %d i dla b: od %d do %d \n", A_MIN, A_MAX, A_MIN-4, A_MAX-2);
    printf("Podaj a: \n");
    a = czytaj_int_ograniczenia(A_MIN,A_MAX);
    printf("Podaj b:\n");
    b = czytaj_int_ograniczenia(A_MIN-4, A_MAX-2);
    //printf("%d, %d",a,b);
    int tab_a[3] = {a-1,a,a+1},
        tab_b[3] = {b-1,b,b+1},
        tab_c[9][2];
    //for(int i=0;i<3;i++){
      //  printf("%d, %d,%d\n",tab_a[i],tab_b[i],i);
    //}
    pole_deltoidu(tab_a, tab_b);

    return 0;
}
