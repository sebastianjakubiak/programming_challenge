#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    srand(time(NULL));
    string imiona_meskie[10], imiona_zenskie[10], nazwiska_meskie[10], nazwiska_zenskie[10];
    imiona_meskie[0] = "Abel";
    imiona_meskie[1] = "Robert";
    imiona_meskie[2] = "Damian";
    imiona_meskie[3] = "Wiktor";
    imiona_meskie[4] = "Tadeusz";
    imiona_meskie[5] = "Jan";
    imiona_meskie[6] = "Dominik";
    imiona_meskie[7] = "Stanisław";
    imiona_meskie[8] = "Piotr";
    imiona_meskie[9] = "Mateusz";
    imiona_zenskie[0] = "Adrianna";
    imiona_zenskie[1] = "Anna";
    imiona_zenskie[2] = "Natalia";
    imiona_zenskie[3] = "Genowefa";
    imiona_zenskie[4] = "Patrycja";
    imiona_zenskie[5] = "Kaja";
    imiona_zenskie[6] = "Karolina";
    imiona_zenskie[7] = "Katarzyna";
    imiona_zenskie[8] = "Barbara";
    imiona_zenskie[9] = "Dominika";
    nazwiska_meskie[0] = "Kowalski";
    nazwiska_meskie[1] = "Olkowski";
    nazwiska_meskie[2] = "Malinowski";
    nazwiska_meskie[3] = "Teodorski";
    nazwiska_meskie[4] = "Zywiecki";
    nazwiska_meskie[5] = "Mackowski";
    nazwiska_meskie[6] = "Olecki";
    nazwiska_meskie[7] = "Winiecki";
    nazwiska_meskie[8] = "Tarowski";
    nazwiska_meskie[9] = "Grzeszowski";
    nazwiska_zenskie[0] = "Kowalska";
    nazwiska_zenskie[1] = "Olkowska";
    nazwiska_zenskie[2] = "Malinowska";
    nazwiska_zenskie[3] = "Teodorska";
    nazwiska_zenskie[4] = "Zywiecka";
    nazwiska_zenskie[5] = "Mackowska";
    nazwiska_zenskie[6] = "Olecka";
    nazwiska_zenskie[7] = "Winiecka";
    nazwiska_zenskie[8] = "Tarowska";
    nazwiska_zenskie[9] = "Grzeszowska";
    int cipa = rand()%10;
    if (cipe%2!=0){
        cout << imiona_meskie[cipa] << " ";
        cout << nazwiska_meskie[rand()%10];
    }
    else {
        cout << imiona_zenskie[cipa] << " ";
        cout << nazwiska_zenskie[rand()%10];
    }
}
