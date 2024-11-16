#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void setcolor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void printMenu(int highlight) {
    const int defaultColor = 0x07; // Default console color
    const int highlightColor = 0x0A; // Green color

    cout << "#>--------<MENU>---------<#" << endl;
    setcolor(highlight == 1 ? highlightColor : defaultColor);
    cout << "|    1. ADD               |" << endl;
    setcolor(highlight == 2 ? highlightColor : defaultColor);
    cout << "|    2. Subtract          |" << endl;
    setcolor(highlight == 3 ? highlightColor : defaultColor);
    cout << "|    3. Multiply          |" << endl;
    setcolor(highlight == 4 ? highlightColor : defaultColor);
    cout << "|    4. Divide            |" << endl;
    setcolor(highlight == 5 ? highlightColor : defaultColor);
    cout << "|    5. Exit              |" << endl;
    setcolor(defaultColor);
    cout << "#>-----------------------<#" << endl;
}

int main()
{
    char choice;
    int highlight = 0;
    do {
        system("cls");
        printMenu(highlight);
        cout << "Enter your choice: ";
        choice = _getch();
        highlight = choice - '0'; // Convert char to int

        switch (choice)
        {
        case '1':
            cout << "You chose ADD" << endl;
            break;
        case '2':
            cout << "You chose Subtract" << endl;
            break;
        case '3':
            cout << "You chose Multiply" << endl;
            break;
        case '4':
            cout << "You chose Divide" << endl;
            break;
        case '5':
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice, please try again." << endl;
            highlight = 0; // Reset highlight for invalid choice
            break;
        }
    } while (choice != '5');

    return 0;
}
