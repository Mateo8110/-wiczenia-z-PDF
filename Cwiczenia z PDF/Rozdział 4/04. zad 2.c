#include <stdio.h>
#include <string.h>
#define IMIE_DL 20

int main()
{
    char imie[IMIE_DL];
    printf("Podaj swoje imie:");
    scanf("%s", imie);
    printf("\"%s\"\n", imie);   /*dodajemy znaki cudzyslowu*/
    printf("\"%20s\"\n", imie);  /*j.w. imie tylko bedzie zajmowac 20 liter*/
    printf("\"%-20s\"\n", imie); /*polecenie te wyrownoje tekst do lewej strony*/
    printf("%*s\n", strlen(imie)+3, imie);  /* imie bedzie w polu dluzszym o 3 znaki*/
    return 0;
}
