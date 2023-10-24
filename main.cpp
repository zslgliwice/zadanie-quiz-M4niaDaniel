#include <iostream>
#include <windows.h>

using namespace std;

string name;
int i = 3;

void question_request(string question, string ans_a, string ans_b, string ans_c){

}

int main(void){
    cout << "Podaj Imię: ";
    cin >> name;
    system("CLS");
    do{
        cout << i << "...";
        i--;
        Sleep(1000);
    }
    while(i > 0);
}
