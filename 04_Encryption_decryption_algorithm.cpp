#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;
int main()
{
    cout << "Wybierz opcję:" << endl;
    cout << "1. Zakodowanie" << endl;
    cout << "2. Odkodowanie" << endl;
    int wybor;
    cout << "Twój wybór to: ";
    cin >> wybor;
    switch (wybor)
    {
        case 1:{
            cout << "Podaj tekst do zakodowania: ";
            string zakodowanie;
            cin >> zakodowanie;
            for (int i=0; i<zakodowanie.length(); i++)
            {
                int szyfr = zakodowanie[i]+3;
                cout << (char)szyfr;
            }
            break;}
        case 2:{
            cout << "Podaj tekst do odkodowania: ";
            string odkodowanie;
            cin >> odkodowanie;
            for (int i=0; i<odkodowanie.length(); i++)
            {
                int szyfr = odkodowanie[i] - 3;
                cout << (char) szyfr;
            }
            break;}
        default:{
            cout << "Spierdalaj :)";
            break;}
    }
}
