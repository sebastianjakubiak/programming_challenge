#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    srand (time(NULL));
    cout << "Będę grał w gre!" <<endl << "Wybierz w którą:" << endl << "1. Upper/Lower" << endl <<"2. Heads/Tails" <<endl;
    int i;
    cout << "W co gramy?";
    cin >> i;
    
    switch (i){
        case 1:
    {
        cout << "Ok, gramy w Mniejsza/Większa..." << endl << "Pomyślałem sobie jakąś liczbę z przedziału do 1 do 100. Zgadnij jaka to liczba! Masz 10 prób" <<endl;
        int liczba = rand()%100 +1;
        for (int a = 9; a>=0; --a)
        {
            cout << "Jaka to liczba?!";
            int x;
            cin >> x;
            if (x == liczba) {
                cout << "Brawo, wygrałeś życie, fart niczym Mameda. Więcej z Tobą nie gram, wypierdalaj zjebie!" << endl;
                break;
            }
            else if (x < liczba) cout << "Ni chuja, pomyślałem większą. Zotało " << a << " prób" << endl;
            else if (x > liczba) cout << "Ty chory pojebie, moja liczba jest mniejsza. Masz rozmach skurwysynu. Zostało " << a << " prób" <<endl;
        }
        break;
    }
        case 2:
        {
            cout << "No zajebiście ciekawa gra..." << endl << "1. Orzeł czy" << endl << "2. reszka?" << endl;
            int a = rand()%2+1;
            int o;
            cin >> o;
            switch (o){
            case 1:
                {if (o==a) {
                    cout << "Brawo kurwiu! Wygrałeś nic. Rzucać dalej?" << endl << "1. Tak, ale fajna gra!" << endl << "2. Nie, chuj w to" << endl << "Pomogę Ci, nie będę dalej rzucał. Nara";}
                    else cout << "nie";
                    break;
                }
            case 2:
                {{if (o==a) {
                    cout << "Brawo kurwiu! Wygrałeś nic. Rzucać dalej?" << endl << "Pomogę Ci, nie będę dalej rzucał. Nara";}
                else cout << "nie";
                    break;
                }
                    break;
                }
            default:{
                cout << "Spierdalaj :)";
                break;}
            }
            break;
        }
        default:{
            cout << "Spierdalaj :)";
            break;}
    }
}
