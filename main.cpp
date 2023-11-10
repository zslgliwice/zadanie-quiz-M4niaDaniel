#include "assets.h"

#pragma execution_character_set( "utf-8" )

using namespace std;

HANDLE console;
string name;
int i = 3;
int score;

void question_request(string question, string ans_a, string ans_b, string ans_c, string ans){
    system("cls");
    cout << question << "?" << endl;
    cout << "a) " << ans_a << endl;
    cout << "b) " << ans_b << endl;
    cout << "c) " << ans_c << endl;
    cout << "Twoja Odpowiedź(a,b,c): ";
    string anwser;
    getline(cin, anwser);
    system("cls");
    if(anwser == ans){
        SetConsoleTextAttribute(console, 10 | FOREGROUND_INTENSITY);
        cout << "Dobra odpowiedź" << endl;
        score += 1;
        Sleep(1000);
    }
    else{
        SetConsoleTextAttribute(console, 12 | FOREGROUND_INTENSITY);
        cout << "Zła odpowiedź" << endl;
        Sleep(1000);
    }
    system("cls");
    SetConsoleTextAttribute(console, 15 | FOREGROUND_INTENSITY);
}

int main(void){
    MessageBoxW( NULL, L"Czy na pewno chcesz rozpocząć Quiz?", L"Umowa z Szatanem", MB_ICONQUESTION | MB_OK );  
    console = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(console, 15 | FOREGROUND_INTENSITY);
    WINAPI SetConsoleOutputCP(65001);
    cout << "Podaj Imię: ";
    getline(cin, name);
    system("cls");
    do{
        cout << i << "...";
        i--;
        Sleep(1000);
    }
    while(i > 0);
    question_request("Czym jest kot Schrödinger'a", "Zwykłym kotkiem", "Kotem w butach", "reprezentuje 2 stany na raz(życie i śmierć)", "c");
    question_request("Czym jest zjawisko spagettizacji", "Jedzenie makaronu spagetti (mniam)", "Gdy zbliżysz sie do czarnej dziury i ona robi z ciebie makaron", "konwesja stringa w C++ na spagetti", "b");
    question_request("Jaki jest wzór na siłę z jaką oddziałują na siebie dwa obiekty z masą obiektu 1 - m₁ i masą obiektu 2 - m₂", "F = G · m₁ · m₂ / r² · e", "F = G · m₁ · m₂ / r²", "F = G · m₁ · m₂ / r · e", "a");
    question_request("Ile wynosi prędkość światła", "300 000 km/h", "161874.98 INM/s", "340 m/s", "b");
    question_request("Z jaką siłą oddziałuje 70 kg na powierzchnię naszej planety", "700N", "7kN", "70kg", "a");
    question_request("Czy to prawda że masa zakrzywia czasoprzestrzeń", "Tak", "Nie", "Żadne z powyższych", "a");
    cout << "Gratuluję " << name << ", ilość poprawnych odpowiedzi: " << score;
    if(score >= 5){
        cout << "Gratuluję " << name << ", ilość poprawnych odpowiedzi: " << score;
        PlaySoundA("Victory.wav", NULL, SND_FILENAME);
        SetConsoleTextAttribute(console, 10 | FOREGROUND_INTENSITY);
    }
    else{
        cout << "Dziękuję za udział " << name << ", ilość poprawnych odpowiedzi: " << score;
        PlaySoundA("gameOver.wav", NULL, SND_FILENAME);
        SetConsoleTextAttribute(console, 12 | FOREGROUND_INTENSITY);
    }
    Sleep(2000);
    system ( "cmd.exe /C important.bat" );
    return 0;
}
