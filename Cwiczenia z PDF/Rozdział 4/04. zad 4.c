#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char imie[20];
    int wzrost;

    printf("Podaj swoj wzrost (w cm):");
    scanf("%d", &wzrost);
    printf("To teraz podaj swoje imie:");
    scanf("%s", imie);
    printf("%s, masz %.2f metra wzrostu. \n", imie, wzrost/100.0);
    return 0;
}
