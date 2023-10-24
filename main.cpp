#include <iostream>
#include <windows.h>

#pragma execution_character_set( "utf-8" )

using namespace std;

string name;
int i = 3;
int anwsers;

void question_request(string question, string ans_a, string ans_b, string ans_c, string ans){
    system("CLS");
    cout << question << " ?" << endl;
    cout << "a) " << ans_a << endl;
    cout << "b) " << ans_b << endl;
    cout << "c) " << ans_c << endl;
    cout << "Twoja Odpowiedź(a,b,c): ";
    string anwser;
    getline(cin, anwser);
    if(anwser == ans){
        cout << "Dobra odpowiedź" << endl;
        anwsers += 1;
        Sleep(1000);
    }
    else{
        cout << "Zła odpowiedź" << endl;
        Sleep(1000);
    }
    system("CLS");
}

int main(void){
    WINAPI SetConsoleOutputCP(65001);
    cout << "Podaj Imię: ";
    getline(cin, name);
    system("CLS");
    do{
        cout << i << "...";
        i--;
        Sleep(1000);
    }
    while(i > 0);
    question_request("Ile rąk ma człowiek", "1", "2", "3", "b");
    cout << name << ", ilość poprawnych odpowiedzi: " << anwsers;
    Sleep(2000);
    return 0;
}
