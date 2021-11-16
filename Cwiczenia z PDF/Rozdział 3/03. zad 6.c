#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    double masa_cz_w=3.0e-23;
    int masa_litr=1000;
    double objetosc;
    double liczba_cz;

    printf("Podaj objetosc wody w litrach:\n");   /* program pyta o objetosc wody w l*/
    scanf("%lf", &objetosc);                    /*wpisujemy obj wody*/
    liczba_cz=objetosc*masa_litr/masa_cz_w;
    printf("W podanej objetosci znajduje sie %21e czasteczek wody.\n", liczba_cz);   /*program wyswietla nam obj wody w czasteczkach*/
    return 0;
}
