#include <stdio.h>

void jugada( int ,char, char, char);

void jugada(int n, char torre1, char torre2, char torre3){
    if(n == 1){
        printf("mover disco %d de %c -> %c \n",n,torre1,torre3);
    }
    else{
        jugada(n-1,torre1,torre3, torre2);
        printf ("mover disco %d de %c -> %c\n",n,torre1, torre3);
        jugada(n-1,torre2, torre1, torre3);
        
    }
}

