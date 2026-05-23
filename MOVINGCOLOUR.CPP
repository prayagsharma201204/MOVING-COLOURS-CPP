#include <iostream>
#include <windows.h>

using namespace std;

int main() {

    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

    int colors[] = {
        1,2,3,4,5,6,9,10,11,12,13,14
    };

    while (true) {

        for (int i = 0; i < 60; i++) {

            system("cls");

            SetConsoleTextAttribute(h, colors[i % 12]);

            for (int j = 0; j < i; j++)
                cout << " ";

            cout << " @  @  @ ";

            Sleep(200);
        }
    }

    return 0;
}
