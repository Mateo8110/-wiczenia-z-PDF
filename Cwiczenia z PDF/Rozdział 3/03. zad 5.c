#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float sekundy=3.156e7;
    int wiek;

    printf("Podaj swoj wiek:\n");
    scanf("%d", &wiek);
    printf("Twoj wiek w sekundach wynosi okolo %.2f s.\n", wiek*sekundy);
    return 0;
}
