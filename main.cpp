#include <iostream>
#include <windows.h>
#include <cstdlib>

using namespace std;

string imie;
string odp;

int main()
{
    //https://cpp0x.pl/kursy/Kurs-WinAPI-C++/Roznosci/Kolory-w-konsoli/374
    HANDLE uchwyt = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(uchwyt, 12);
    cout << "\aPodaj imie: ";
    cin >> imie;
    int pkt = 0;

    system("cls");
    cout<< "3";
    Sleep(1000);
    system("cls");
    cout<< "3..2";
    Sleep(1000);
    system("cls");
    cout<< "3..2..1..";
    Sleep(1000);
    system("cls");

    cout << imie << " witaj w tescie z programowania\n";

    cout << "Co to jest C++?"<<endl;
    cout << "a) Piosenkarka"<<endl;
    cout << "b) Jezyk programowania"<<endl;
    cout << "c) Mlynek do herbaty"<<endl;
    cout << "Twoja odpowiedz: ";
    cin >> odp;
    if(odp == "b")
    {
        cout << "Poprawna odpowiedz!";
        pkt++;
    }
    else
    {
        cout << "Zle! Jest to jezyk programowania!";

    }
    Sleep(3000);
    system("cls");



    return 0;
}
