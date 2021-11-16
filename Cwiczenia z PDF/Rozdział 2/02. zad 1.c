#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Mateusz Jedrzejczyk \tPierwsza instrukcja pisania\n"); /*wypisuje imie i nazwisko w jednym wierszu przy  pomocy jednego wywo³ania funkcji printf i przechodzi do nowej linii*/
    printf("Mateusz\t\t\tDruga instrukcja pisania \nJedrzejczyk\t\tWciaz druga instrukcja pisania\n"); /* wypisuje imie i nazwisko w 2 osobnych wierszach, w jednym wywo³aniu fukcji printf*/
    printf("Mateusz "); /*wypisuje imie i odstep, nie przechodzi do nowej linii*/
    printf("Jedrzejczyk \tTrzecia i czwarta instrukcja pisania\n");  /*wypisuje nazwisko i przechodzi do nowej lini*/
    return 0;

}
