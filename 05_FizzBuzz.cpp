#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
    cout << "Hej. Ten program upierdalał ludziom rozmowy kwalifikacyjne... chuj wie czemu, bo jest banalnie prosty" << endl;
    cout << "Ale chuj w to. Podaj liczbę oznaczajacą największą liczbę z przedziału 1-x, gdzie x to ta liczba (górna granica przedziału. Liczba to: ";
    int x;
    cin >> x;
    for (int i = 1; i<=x; i++){
        
        if (i%3==0 && i%5==0) cout <<"FizzBuzz" <<endl;
        else if (i%5 == 0) cout << "Buzz" <<endl;
        else if (i%3 == 0) cout << "Fizz" << endl;
        else cout << i <<endl;
    }
}
