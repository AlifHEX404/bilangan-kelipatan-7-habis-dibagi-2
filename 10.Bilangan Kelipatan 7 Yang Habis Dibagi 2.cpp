#include <stdio.h>
#include <conio.h>

int main ()
{
    int i=7;
   printf(" \t|=======================================================|\n");
printf(" \t|==== PROGRAM MENAMPLKAN KELIPATAN 7 HABIS DIBAGI 2 ====|\n") ;
printf(" \t|=================== ALIF MUSTAFANAH ===================|\n") ;
printf(" \t|=======================================================|\n");
printf(" \t\n");
    printf( " Kelipatan 7 Yang Habis Dibagi 2 (1-100).\n\n");
    while (i<200)
    {
        if (i%2==0 & i%7==0)
        {
            printf("\n%d",i);
        } i++;
    }

    printf(" \t\n");
    printf(" \t\n");
    printf(" \t|=======================================================|\n");
printf(" \t|===== TERIAKASIH TELAH MENGGUNAKAN PROGRAM INI ========|\n") ;
printf(" \t|=================== ALIF MUSTAFANAH ===================|\n") ;
printf(" \t|================ PRESSS ENTER TO EXIT =================|\n");
printf(" \t|=======================================================|\n");
printf(" \t\n");
    getch() ;
}

