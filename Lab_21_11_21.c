//dyrektywy preprocesora \/
#include <stdio.h>
#include <stdlib.h>

#define MAX 10 //przy parsowaniu (plik.i) tam gdzie jest wpisane MAX jawnie będzie wpisane 8 w programie
               //stałe piszemy dużymi literami

int main(void){
    /*char znak;

    do{
        printf("Wcisniej znak male a:\n");
        scanf("%s", &znak); //%s pozwala, że nie wyświetla nam się dwa razy w programie printf(...) nie jak to jest z %c
    }while(znak != 'a');*/

    int sum=0,
        ilo=1,
        i=1;
    //printf("%d, %d\n", &sum, sum);
    while(i < MAX){  //0=false 0!= = true
        //printf("%d ", i);
        sum += i;
        ilo *= i;
        i++;
    }
    printf("%d, %d", sum, ilo);

    return 0;
}

/*
-------------------
#include <stdio.h>
#include <stdlib.h>

//wynik = 2*i+2/j
// i,j od 1 do 3

int main(void){
    int i = 1,
        j = 1;
    int wynik = 0,
        posredni = 0;

    wynik = 2 * i + 2 * j;
    printf("Wynik %i \n", wynik);

    j++;
    i++;
    wynik = 2 * i + 2 * j;
    printf("Wynik %i \n", wynik);

    i++;
    j++;
    wynik = 2 * i + 2 * j;
    printf("Wynik %i \n", wynik);
    printf("\n");

    for(i = 1;i < 4; i++){
        posredni = 2 * i;
        for(j = 1;j < 4 ; j++){ // i < 4 i j <= 3, nie ma znaczenia oprócz tego, że i < 4 wykonuje się szybciej (podobno)
            if(posredni == 2*j){ //poza wynikiem = 6
                wynik = posredni + 2 * j;
                printf("Dla i: %d i dla j: %d.", i,j);
                printf("Wynik %i \n", wynik);
            }
        }
    }

    for(i = 1; i < 101; i++){
        if(0 == i%10){ // 0 = i%10 kompilator wywali blad bo do iterału nie można przypisać czegoś // to jest to samo co i%10 == 0
            printf("%d \n", i-1);
        }else{
            printf("%d ", i-1);
        }
    }

    for(i = 1; i < 100; i++){
        if(0 == i%2){
            if(0 == i%10){
                printf("%d \n", i);
            }else{
                printf("%d ", i);
            }
        }
    }

    return 0;
}

/*
-----------------------
#include <stdio.h>
#include <stdlib.h>

// char -128 do 127
// unsigned char 0 do 255

int main(void){
    unsigned char i = 0;

    printf("i: %d \n", i);

    i = 255;
    printf("i: %d \n", i);

    i++;
    printf("i: %d \n", i);

    return 0;
}


------------------------
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	printf("Typ int zajmuje %d \n", sizeof(int));
	printf("Typ float zajmuje %d \n", sizeof(float));
	printf("Typ double zajmuje %d \n", sizeof(double));
	printf("Typ char zajmuje %d \n", sizeof(char));
	printf("Typ void zajmuje %d", sizeof(void));
	return 0;
}

----------------------------------------------------
#include <stdio.h>
#include <stdlib.h>

#include <locale.h> //biblioteka która pozwoli wyświetlić polskie znaki

int main(void) {

	setlocale(LC_CTYPE, "Polish"); //przekodowanie polskich znaków

	//printf("Żółwia zalała żółć");

	char znak;

	printf("Podaj znak z klawiatury");
	scanf("%c", &znak);
	printf("Odczytałem znak z klawiaruty %c \n", znak);
	printf("Kod ASCII dla %c : %d \n", znak, znak);
	//getch();

	return 0;
}
*/
