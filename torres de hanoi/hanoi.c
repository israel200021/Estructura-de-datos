#include "hanoi.h"
int main(void) {


   char torre1 = 'a', torre2 = 'b', torre3 = ' c';
       int n;
       printf ("ingres el numero de discos: ");
       scanf("%d",&n);
       jugada(n,torre1, torre2, torre3);
      
    return 0;
}
