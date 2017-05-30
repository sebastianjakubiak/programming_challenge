#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
cout << "Zajebisty kalkulator temperatur! ";
    cout << "Z jakiej skali przeliczamy?:" <<endl<<"1. Celcjusza"<<endl<<"2. Kelvina"<<endl<<"3. Farenheita"<<endl;
    cout << "Podaj numer skali. Twój wybór:" << endl;
    int skala;
    cin >> skala;
    cout << "Na jaką skalę przeliczamy?:" <<endl<<"1. Celcjusza"<<endl<<"2. Kelvina"<<endl<<"3. Farenheita"<<endl;
    cout << "Podaj numer skali. Twój wybór:" << endl;
    int skala2;
    cin >> skala2;
    double stopnie;
    cout << "Ile tych stopni jest?" << endl;
    cin >> stopnie;

    switch (skala)
    {
     case 1:
        {
            if (skala2 == 1){
                cout <<"Tu się jebnij. Wynik to: ";
                cout << stopnie << " stopni Celcjusza";
            }
            else if (skala2 == 2){
                cout <<"Wynik to: ";
                cout << (double) stopnie + 273.15 << " stopni  Kelvina";
            }
            else if (skala2 == 3){
                cout <<"Wynik to: ";
                cout << (double) 1.8 * stopnie + 32 << " stopni Farenheita";
            }
            else cout << "Spierdalaj!";
            break;
        }
        case 2:
        {
            if (skala2 == 1){
                cout <<"Wynik to: ";
                cout << (double) stopnie - 273.15 << " stopni Celcjusza";
            }
            else if (skala2 == 2){
                cout <<"Tu się jebnij. Wynik to: ";
                cout << stopnie << " stopni  Kelvina";
            }
            else if (skala2 == 3){
                cout <<"Wynik to: ";
                cout << (double) (stopnie * 1.8) - 459.67 << " stopni Farenheita";
            }
            else cout << "Spierdalaj!";
            break;
        }
        case 3:
        {
            if (skala2 == 1){
                cout <<"Wynik to: ";
                cout << (double) stopnie - 273.15 << " stopni Celcjusza";
            }
            else if (skala2 == 2){
                cout <<"Wynik to: ";
                cout << (stopnie + 459.67) * 5/9 << " stopni  Kelvina";
            }
            else if (skala2 == 3){
                cout <<"Tu sie jebnij. Wynik to: ";
                cout << stopnie << " stopni Farenheita";
            }
            else cout <<"Spierdalaj!";
            break;
        }
        default:
        {
            cout << "ssij :)";
            break;
        }
    }
}
