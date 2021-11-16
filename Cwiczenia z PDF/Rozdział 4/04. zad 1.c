#include <stdio.h>
#define MAXDL 20

int main(void)
{

    char imie[MAXDL];
    char nazwisko[MAXDL];

    printf("Podaj swoje imie:\n");
    scanf("%s", imie);
    printf("teraz nazwisko:");
    scanf("%s", nazwisko);
    printf("\nDane podane przez uzytkownika:\n");
    printf("%s, %s\n\n", nazwisko, imie);
    return 0;
}
