#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int kod;
    printf("Podaj kod ASCII: \n");
    scanf("%d", &kod); /*pobiera liczbe calkowita z wejscia */
    printf("%c\n", kod); /*wypisuje znak odpowiadajacy pobranej liczbie ca³kowitej */

    return 0;
}
