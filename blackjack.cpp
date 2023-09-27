#include "pch.h"
#include "iostream"
#include "conio.h"
using namespace System;
using namespace std;
int palos()// formula para sacar palos aleatorios
{
    return 3 + rand() % (6 + 1 - 3);
}
int final() //Ventana final del juego al terminar las partidas con los creditos.
{
    //color de fondo y letras
    system("cls");
    system("color 0A");
    //animacion
    Console::SetWindowSize(80, 40);
    int x = 30, y = 20;
    int dx = 1, dy = 1;
    bool activa_animacion = false;
    Console::SetCursorPosition(x, y); cout << "BLACKJACK";
    Console::SetCursorPosition(25, 21); cout << " ...GRACIAS POR JUGAR...";
    Console::SetCursorPosition(25, 37); cout << " [ JUEGO REALIZADO POR:]";
    Console::SetCursorPosition(25, 38); cout << " - Diego Requena";
    Console::SetCursorPosition(25, 39); cout << " - Miguel Vila";
    while (1)
    {
        activa_animacion = true;

        if (activa_animacion == true)
        {
            //borrar
            Console::SetCursorPosition(x, y); cout << "           ";

            //mover
            if (x < 1 || x>70) dx = dx * -1;
            if (y < 1 || y>38) dy = dy * -1;

            x = x + dx;
            y = y + dy;
            //dibujar
            Console::SetCursorPosition(x, y); cout << "BLACKJACK";
            Console::SetCursorPosition(25, 21); cout << " ...GRACIAS POR JUGAR...";
            if (_kbhit()) {
                exit(0);
            }
        }
        _sleep(100);
    }
    return 0;
}
//dibujo de las cartas
void naipe02(int carta, int palo)
{
    cout << endl << (char)32; cout << (char)32; for (int i = 1; i < 21; i++) cout << (char)220;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; for (int i = 1; i < 18; i++)cout << (char)220; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; cout << carta; cout << (char)32; cout << (char)219; for (int i = 1; i < 14; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 3; i++) cout << (char)220; cout << (char)219; for (int i = 1; i < 14; i++)cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 17; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 17; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 9; i++) cout << (char)32; cout << (char)palo; for (int i = 1; i < 8; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 9; i++) cout << (char)32; cout << (char)196; for (int i = 1; i < 8; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 17; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 17; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 9; i++) cout << (char)32; cout << (char)palo; for (int i = 1; i < 8; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 9; i++) cout << (char)32; cout << (char)196; for (int i = 1; i < 8; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 17; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 14; i++) cout << (char)32; for (int i = 1; i < 4; i++)cout << (char)220; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 14; i++) cout << (char)32; cout << (char)219; cout << (char)32; cout << carta; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)220; cout << (char)219; for (int i = 1; i < 14; i++) cout << (char)220; cout << (char)219; for (int i = 1; i < 3; i++) cout << (char)220; cout << (char)219;
}
void naipe03(int carta, int palo)
{
    cout << endl << (char)32; cout << (char)32; for (int i = 1; i < 21; i++) cout << (char)220;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; for (int i = 1; i < 18; i++)cout << (char)220; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; cout << carta; cout << (char)32; cout << (char)219; for (int i = 1; i < 14; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 3; i++) cout << (char)220; cout << (char)219; for (int i = 1; i < 14; i++)cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 17; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 9; i++) cout << (char)32; cout << (char)palo; for (int i = 1; i < 8; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 9; i++) cout << (char)32; cout << (char)196; for (int i = 1; i < 8; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 17; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 9; i++) cout << (char)32; cout << (char)palo; for (int i = 1; i < 8; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 9; i++) cout << (char)32; cout << (char)196; for (int i = 1; i < 8; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 17; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 9; i++) cout << (char)32; cout << (char)palo; for (int i = 1; i < 8; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 9; i++) cout << (char)32; cout << (char)196; for (int i = 1; i < 8; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 14; i++) cout << (char)32; for (int i = 1; i < 4; i++)cout << (char)220; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 14; i++) cout << (char)32; cout << (char)219; cout << (char)32; cout << carta; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)220; cout << (char)219; for (int i = 1; i < 14; i++) cout << (char)220; cout << (char)219; for (int i = 1; i < 3; i++) cout << (char)220; cout << (char)219;
}
void naipe04(int carta, int palo)
{
    cout << endl << (char)32; cout << (char)32; for (int i = 1; i < 21; i++) cout << (char)220;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; for (int i = 1; i < 18; i++)cout << (char)220; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; cout << carta; cout << (char)32; cout << (char)219; for (int i = 1; i < 14; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 3; i++) cout << (char)220; cout << (char)219; for (int i = 1; i < 14; i++)cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 17; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 4; i++) cout << (char)32; cout << (char)palo; for (int i = 1; i < 9; i++)cout << " "; cout << (char)palo; for (int i = 1; i < 4; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 4; i++) cout << (char)32; cout << (char)196; for (int i = 1; i < 9; i++)cout << " "; cout << (char)196; for (int i = 1; i < 4; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 17; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 17; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 17; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 17; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 4; i++) cout << (char)32; cout << (char)palo; for (int i = 1; i < 9; i++)cout << " "; cout << (char)palo; for (int i = 1; i < 4; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 4; i++) cout << (char)32; cout << (char)196; for (int i = 1; i < 9; i++)cout << " "; cout << (char)196; for (int i = 1; i < 4; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 14; i++) cout << (char)32; for (int i = 1; i < 4; i++)cout << (char)220; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 14; i++) cout << (char)32; cout << (char)219; cout << (char)32; cout << carta; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)220; cout << (char)219; for (int i = 1; i < 14; i++) cout << (char)220; cout << (char)219; for (int i = 1; i < 3; i++) cout << (char)220; cout << (char)219;
}
void naipe05(int carta, int palo)
{
    cout << endl << (char)32; cout << (char)32; for (int i = 1; i < 21; i++) cout << (char)220;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; for (int i = 1; i < 18; i++)cout << (char)220; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; cout << carta; cout << (char)32; cout << (char)219; for (int i = 1; i < 14; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 3; i++) cout << (char)220; cout << (char)219; for (int i = 1; i < 14; i++)cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 17; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 4; i++) cout << (char)32; cout << (char)palo; for (int i = 1; i < 9; i++)cout << " "; cout << (char)palo; for (int i = 1; i < 4; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 4; i++) cout << (char)32; cout << (char)196; for (int i = 1; i < 9; i++)cout << " "; cout << (char)196; for (int i = 1; i < 4; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 17; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 9; i++) cout << (char)32; cout << (char)palo; for (int i = 1; i < 8; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 9; i++) cout << (char)32; cout << (char)196; for (int i = 1; i < 8; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 17; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 4; i++) cout << (char)32; cout << (char)palo; for (int i = 1; i < 9; i++)cout << " "; cout << (char)palo; for (int i = 1; i < 4; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 4; i++) cout << (char)32; cout << (char)196; for (int i = 1; i < 9; i++)cout << " "; cout << (char)196; for (int i = 1; i < 4; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 14; i++) cout << (char)32; for (int i = 1; i < 4; i++)cout << (char)220; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 14; i++) cout << (char)32; cout << (char)219; cout << (char)32; cout << carta; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)220; cout << (char)219; for (int i = 1; i < 14; i++) cout << (char)220; cout << (char)219; for (int i = 1; i < 3; i++) cout << (char)220; cout << (char)219;
}
void naipe06(int carta, int palo)
{
    cout << endl << (char)32; cout << (char)32; for (int i = 1; i < 21; i++) cout << (char)220;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; for (int i = 1; i < 18; i++)cout << (char)220; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; cout << carta; cout << (char)32; cout << (char)219; for (int i = 1; i < 14; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 3; i++) cout << (char)220; cout << (char)219; for (int i = 1; i < 14; i++)cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 17; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 4; i++) cout << (char)32; cout << (char)palo; for (int i = 1; i < 9; i++)cout << " "; cout << (char)palo; for (int i = 1; i < 4; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 4; i++) cout << (char)32; cout << (char)196; for (int i = 1; i < 9; i++)cout << " "; cout << (char)196; for (int i = 1; i < 4; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 17; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 4; i++) cout << (char)32; cout << (char)palo; for (int i = 1; i < 9; i++)cout << " "; cout << (char)palo; for (int i = 1; i < 4; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 4; i++) cout << (char)32; cout << (char)196; for (int i = 1; i < 9; i++)cout << " "; cout << (char)196; for (int i = 1; i < 4; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 17; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 4; i++) cout << (char)32; cout << (char)palo; for (int i = 1; i < 9; i++)cout << " "; cout << (char)palo; for (int i = 1; i < 4; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 4; i++) cout << (char)32; cout << (char)196; for (int i = 1; i < 9; i++)cout << " "; cout << (char)196; for (int i = 1; i < 4; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 14; i++) cout << (char)32; for (int i = 1; i < 4; i++)cout << (char)220; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 14; i++) cout << (char)32; cout << (char)219; cout << (char)32; cout << carta; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)220; cout << (char)219; for (int i = 1; i < 14; i++) cout << (char)220; cout << (char)219; for (int i = 1; i < 3; i++) cout << (char)220; cout << (char)219;
}
void naipe07(int carta, int palo)
{
    cout << endl << (char)32; cout << (char)32; for (int i = 1; i < 21; i++) cout << (char)220;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; for (int i = 1; i < 18; i++)cout << (char)220; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; cout << carta; cout << (char)32; cout << (char)219; for (int i = 1; i < 14; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 3; i++) cout << (char)220; cout << (char)219; for (int i = 1; i < 14; i++)cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 17; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 4; i++) cout << (char)32; cout << (char)palo; for (int i = 1; i < 9; i++)cout << " "; cout << (char)palo; for (int i = 1; i < 4; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 4; i++) cout << (char)32; cout << (char)196; for (int i = 1; i < 9; i++)cout << " "; cout << (char)196; for (int i = 1; i < 4; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 9; i++) cout << (char)32; cout << (char)palo; for (int i = 1; i < 8; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 4; i++) cout << (char)32; cout << (char)palo; for (int i = 1; i < 5; i++)cout << (char)32; cout << (char)196; for (int i = 1; i < 4; i++)cout << (char)32; cout << (char)palo; for (int i = 1; i < 4; i++)cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 4; i++) cout << (char)32; cout << (char)196; for (int i = 1; i < 9; i++)cout << " "; cout << (char)196; for (int i = 1; i < 4; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 17; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 4; i++) cout << (char)32; cout << (char)palo; for (int i = 1; i < 9; i++)cout << " "; cout << (char)palo; for (int i = 1; i < 4; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 4; i++) cout << (char)32; cout << (char)196; for (int i = 1; i < 9; i++)cout << " "; cout << (char)196; for (int i = 1; i < 4; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 14; i++) cout << (char)32; for (int i = 1; i < 4; i++)cout << (char)220; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 14; i++) cout << (char)32; cout << (char)219; cout << (char)32; cout << carta; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)220; cout << (char)219; for (int i = 1; i < 14; i++) cout << (char)220; cout << (char)219; for (int i = 1; i < 3; i++) cout << (char)220; cout << (char)219;
}
void naipe08(int carta, int palo)
{
    cout << endl << (char)32; cout << (char)32; for (int i = 1; i < 21; i++) cout << (char)220;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; for (int i = 1; i < 18; i++)cout << (char)220; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; cout << carta; cout << (char)32; cout << (char)219; for (int i = 1; i < 14; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 3; i++) cout << (char)220; cout << (char)219; for (int i = 1; i < 14; i++)cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 17; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 4; i++) cout << (char)32; cout << (char)palo; for (int i = 1; i < 9; i++)cout << " "; cout << (char)palo; for (int i = 1; i < 4; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 4; i++) cout << (char)32; cout << (char)196; for (int i = 1; i < 9; i++)cout << " "; cout << (char)196; for (int i = 1; i < 4; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 9; i++) cout << (char)32; cout << (char)palo; for (int i = 1; i < 8; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 4; i++) cout << (char)32; cout << (char)palo; for (int i = 1; i < 5; i++)cout << (char)32; cout << (char)196; for (int i = 1; i < 4; i++)cout << (char)32; cout << (char)palo; for (int i = 1; i < 4; i++)cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 4; i++) cout << (char)32; cout << (char)196; for (int i = 1; i < 9; i++)cout << " "; cout << (char)196; for (int i = 1; i < 4; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 9; i++) cout << (char)32; cout << (char)palo; for (int i = 1; i < 8; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 4; i++) cout << (char)32; cout << (char)palo; for (int i = 1; i < 5; i++)cout << (char)32; cout << (char)196; for (int i = 1; i < 4; i++)cout << (char)32; cout << (char)palo; for (int i = 1; i < 4; i++)cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 4; i++) cout << (char)32; cout << (char)196; for (int i = 1; i < 9; i++)cout << " "; cout << (char)196; for (int i = 1; i < 4; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 14; i++) cout << (char)32; for (int i = 1; i < 4; i++)cout << (char)220; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 14; i++) cout << (char)32; cout << (char)219; cout << (char)32; cout << carta; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)220; cout << (char)219; for (int i = 1; i < 14; i++) cout << (char)220; cout << (char)219; for (int i = 1; i < 3; i++) cout << (char)220; cout << (char)219;
}
void naipe09(int carta, int palo)
{
    cout << endl << (char)32; cout << (char)32; for (int i = 1; i < 21; i++) cout << (char)220;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; for (int i = 1; i < 18; i++)cout << (char)220; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; cout << carta; cout << (char)32; cout << (char)219; for (int i = 1; i < 14; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 3; i++) cout << (char)220; cout << (char)219; for (int i = 1; i < 14; i++)cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 17; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 4; i++) cout << (char)32; cout << (char)palo; for (int i = 1; i < 9; i++)cout << " "; cout << (char)palo; for (int i = 1; i < 4; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 4; i++) cout << (char)32; cout << (char)196; for (int i = 1; i < 9; i++)cout << " "; cout << (char)196; for (int i = 1; i < 4; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 4; i++) cout << (char)32; cout << (char)palo; for (int i = 1; i < 9; i++)cout << " "; cout << (char)palo; for (int i = 1; i < 4; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 4; i++) cout << (char)32; cout << (char)palo; for (int i = 1; i < 5; i++)cout << (char)32; cout << (char)196; for (int i = 1; i < 4; i++)cout << (char)32; cout << (char)palo; for (int i = 1; i < 4; i++)cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 4; i++) cout << (char)32; cout << (char)palo; for (int i = 1; i < 5; i++)cout << (char)32; cout << (char)196; for (int i = 1; i < 4; i++)cout << (char)32; cout << (char)palo; for (int i = 1; i < 4; i++)cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 4; i++) cout << (char)32; cout << (char)196; for (int i = 1; i < 9; i++)cout << " "; cout << (char)196; for (int i = 1; i < 4; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 4; i++) cout << (char)32; cout << (char)palo; for (int i = 1; i < 9; i++)cout << " "; cout << (char)palo; for (int i = 1; i < 4; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 4; i++) cout << (char)32; cout << (char)196; for (int i = 1; i < 9; i++)cout << " "; cout << (char)196; for (int i = 1; i < 4; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 14; i++) cout << (char)32; for (int i = 1; i < 4; i++)cout << (char)220; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 14; i++) cout << (char)32; cout << (char)219; cout << (char)32; cout << carta; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)220; cout << (char)219; for (int i = 1; i < 14; i++) cout << (char)220; cout << (char)219; for (int i = 1; i < 3; i++) cout << (char)220; cout << (char)219;
}
void naipe10(int carta, int palo)
{
    cout << endl << (char)32; cout << (char)32; for (int i = 1; i < 21; i++) cout << (char)220;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; for (int i = 1; i < 18; i++)cout << (char)220; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; cout << carta; cout << (char)219; for (int i = 1; i < 14; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 3; i++) cout << (char)220; cout << (char)219; for (int i = 1; i < 14; i++)cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 17; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 4; i++) cout << (char)32; cout << (char)palo; for (int i = 1; i < 9; i++)cout << " "; cout << (char)palo; for (int i = 1; i < 4; i++)cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 4; i++) cout << (char)32; cout << (char)196; for (int i = 1; i < 5; i++)cout << (char)32; cout << (char)palo; for (int i = 1; i < 4; i++)cout << (char)32; cout << (char)196; for (int i = 1; i < 4; i++)cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 4; i++) cout << (char)32; cout << (char)palo; for (int i = 1; i < 5; i++)cout << (char)32; cout << (char)196; for (int i = 1; i < 4; i++)cout << (char)32; cout << (char)palo; for (int i = 1; i < 4; i++)cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 4; i++) cout << (char)32; cout << (char)196; for (int i = 1; i < 9; i++)cout << (char)32; cout << (char)196; for (int i = 1; i < 4; i++)cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 4; i++) cout << (char)32; cout << (char)palo; for (int i = 1; i < 9; i++)cout << (char)32; cout << (char)palo; for (int i = 1; i < 4; i++)cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 4; i++) cout << (char)32; cout << (char)196; for (int i = 1; i < 5; i++)cout << (char)32; cout << (char)palo; for (int i = 1; i < 4; i++)cout << (char)32; cout << (char)196; for (int i = 1; i < 4; i++)cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 4; i++) cout << (char)32; cout << (char)palo; for (int i = 1; i < 5; i++)cout << (char)32; cout << (char)196; for (int i = 1; i < 4; i++)cout << (char)32; cout << (char)palo; for (int i = 1; i < 4; i++)cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 4; i++) cout << (char)32; cout << (char)196; for (int i = 1; i < 9; i++)cout << (char)32; cout << (char)196; for (int i = 1; i < 4; i++)cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 14; i++) cout << (char)32; for (int i = 1; i < 4; i++)cout << (char)220; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 14; i++) cout << (char)32; cout << (char)219; cout << carta; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)220; cout << (char)219; for (int i = 1; i < 14; i++) cout << (char)220; cout << (char)219; for (int i = 1; i < 3; i++) cout << (char)220; cout << (char)219;
}
void naipe11(int carta, int palo)
{
    cout << endl << (char)32; cout << (char)32; for (int i = 1; i < 21; i++) cout << (char)220;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; for (int i = 1; i < 18; i++)cout << (char)220; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; cout << 'J'; cout << (char)32; cout << (char)219; for (int i = 1; i < 14; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 3; i++) cout << (char)220; cout << (char)219; for (int i = 1; i < 3; i++)cout << (char)32; cout << (char)223; cout << (char)220; for (int i = 1; i < 3; i++)cout << (char)32; cout << (char)220; cout << (char)223; for (int i = 1; i < 4; i++)cout << (char)32; cout << (char)175; cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 3; i++) cout << (char)32; cout << (char)220; for (int i = 1; i < 5; i++) cout << (char)32; for (int i = 1; i < 3; i++) cout << (char)219; for (int i = 1; i < 5; i++) cout << (char)32; cout << (char)220; for (int i = 1; i < 3; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 3; i++) cout << (char)32; cout << (char)220; for (int i = 1; i < 11; i++) cout << (char)32; cout << (char)220; for (int i = 1; i < 3; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 4; i++) cout << (char)32; for (int i = 1; i < 3; i++) cout << (char)219; for (int i = 1; i < 4; i++) cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 3; i++) cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 3; i++) cout << (char)32; cout << (char)219; cout << (char)32;  cout << (char)219; for (int i = 1; i < 3; i++) cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219;  for (int i = 1; i < 4; i++) cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)220;  for (int i = 1; i < 3; i++) cout << (char)32; cout << (char)219; for (int i = 1; i < 4; i++) cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 3; i++) cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)223; for (int i = 1; i < 3; i++) cout << (char)32; cout << (char)220; cout << (char)219; for (int i = 1; i < 3; i++) cout << (char)32; cout << (char)223; cout << (char)32; cout << (char)219; for (int i = 1; i < 3; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 4; i++) cout << (char)32; cout << (char)219; for (int i = 1; i < 5; i++) cout << (char)32; cout << (char)219; for (int i = 1; i < 4; i++) cout << (char)32; cout << (char)219; for (int i = 1; i < 4; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219;  for (int i = 1; i < 5; i++) cout << (char)32; cout << (char)219; for (int i = 1; i < 3; i++) cout << (char)32; cout << (char)223; for (int i = 1; i < 4; i++) cout << (char)32; cout << (char)219; for (int i = 1; i < 5; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 5; i++) cout << (char)32; for (int i = 1; i < 9; i++) cout << (char)223; for (int i = 1; i < 5; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 7; i++) cout << (char)32; for (int i = 1; i < 5; i++) cout << (char)219; for (int i = 1; i < 4; i++) cout << (char)32; for (int i = 1; i < 4; i++) cout << (char)220; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 14; i++) cout << (char)32; cout << (char)219; cout << (char)32; cout << 'J'; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)220; cout << (char)219; for (int i = 1; i < 14; i++) cout << (char)220; cout << (char)219; for (int i = 1; i < 3; i++) cout << (char)220; cout << (char)219;
}
void naipe12(int carta, int palo)
{
    cout << endl << (char)32; cout << (char)32; for (int i = 1; i < 21; i++) cout << (char)220;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; for (int i = 1; i < 18; i++)cout << (char)220; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; cout << 'Q'; cout << (char)32; cout << (char)219; for (int i = 1; i < 14; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 3; i++) cout << (char)220; cout << (char)219; for (int i = 1; i < 11; i++) cout << (char)32; for (int i = 1; i < 3; i++)cout << (char)175; cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 8; i++) cout << (char)32; for (int i = 1; i < 3; i++) cout << (char)219; for (int i = 1; i < 8; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 6; i++) cout << (char)32; for (int i = 1; i < 3; i++) cout << (char)219;  for (int i = 1; i < 3; i++) cout << (char)176; for (int i = 1; i < 3; i++) cout << (char)219; for (int i = 1; i < 6; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 4; i++) cout << (char)32; for (int i = 1; i < 3; i++) cout << (char)219; cout << (char)177; cout << (char)178; for (int i = 1; i < 3; i++) cout << (char)177; cout << (char)178; cout << (char)177; for (int i = 1; i < 3; i++) cout << (char)219; for (int i = 1; i < 4; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; cout << (char)32; for (int i = 1; i < 3; i++) cout << (char)219; cout << (char)178; cout << (char)177; cout << (char)178; cout << (char)177; for (int i = 1; i < 3; i++) cout << (char)176; cout << (char)177; cout << (char)178; cout << (char)177; cout << (char)178; for (int i = 1; i < 3; i++) cout << (char)219; cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; cout << (char)176; cout << (char)177; cout << (char)178; for (int i = 1; i < 3; i++) cout << (char)176; for (int i = 1; i < 3; i++) cout << (char)178; for (int i = 1; i < 3; i++) cout << (char)176; cout << (char)178; cout << (char)177; cout << (char)176; cout << (char)219; cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; cout << (char)32; for (int i = 1; i < 3; i++) cout << (char)219; cout << (char)178; cout << (char)177; cout << (char)178; cout << (char)177; for (int i = 1; i < 3; i++) cout << (char)176; cout << (char)177; cout << (char)178; cout << (char)177; cout << (char)178; for (int i = 1; i < 3; i++) cout << (char)219; cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 4; i++) cout << (char)32; for (int i = 1; i < 3; i++) cout << (char)219; cout << (char)177; cout << (char)178; for (int i = 1; i < 3; i++) cout << (char)177; cout << (char)178; cout << (char)177; for (int i = 1; i < 3; i++) cout << (char)219; for (int i = 1; i < 4; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 6; i++) cout << (char)32; for (int i = 1; i < 3; i++) cout << (char)219;  for (int i = 1; i < 3; i++) cout << (char)176; for (int i = 1; i < 3; i++) cout << (char)219; for (int i = 1; i < 6; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 8; i++) cout << (char)32; for (int i = 1; i < 3; i++) cout << (char)219; for (int i = 1; i < 8; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32;  cout << (char)219; for (int i = 1; i < 6; i++) cout << (char)32; for (int i = 1; i < 3; i++) cout << (char)219;  for (int i = 1; i < 3; i++) cout << (char)220; for (int i = 1; i < 3; i++) cout << (char)219; for (int i = 1; i < 6; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32;  cout << (char)219; for (int i = 1; i < 14; i++) cout << (char)32; for (int i = 1; i < 4; i++) cout << (char)220; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32;  cout << (char)219; for (int i = 1; i < 14; i++) cout << (char)32; cout << (char)219; cout << (char)32; cout << 'Q'; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)220; cout << (char)219; for (int i = 1; i < 14; i++) cout << (char)220; cout << (char)219; for (int i = 1; i < 3; i++) cout << (char)220; cout << (char)219;
}
void naipe13(int carta, int palo)
{
    cout << endl << (char)32; cout << (char)32; for (int i = 1; i < 21; i++) cout << (char)220;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; for (int i = 1; i < 18; i++)cout << (char)220; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; cout << 'K'; cout << (char)32; cout << (char)219; for (int i = 1; i < 14; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 3; i++) cout << (char)220; cout << (char)219; for (int i = 1; i < 10; i++)cout << (char)32; for (int i = 1; i < 4; i++)cout << (char)175; cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 4; i++) cout << (char)32; for (int i = 1; i < 3; i++) cout << (char)223; for (int i = 1; i < 3; i++) cout << (char)32; for (int i = 1; i < 3; i++) cout << (char)223; cout << (char)32; for (int i = 1; i < 3; i++) cout << (char)223; for (int i = 1; i < 5; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 3; i++) cout << (char)32; cout << (char)178; for (int i = 1; i < 3; i++) cout << (char)219; cout << (char)32; cout << (char)178; for (int i = 1; i < 3; i++) cout << (char)219; cout << (char)32; cout << (char)178; cout << (char)219; for (int i = 1; i < 5; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 3; i++) cout << (char)32; cout << (char)178; cout << (char)219; cout << (char)32; cout << (char)219; cout << (char)178; cout << (char)219; cout << (char)32; cout << (char)219; cout << (char)178; cout << (char)219;; for (int i = 1; i < 5; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 3; i++) cout << (char)32; cout << (char)178; cout << (char)219; for (int i = 1; i < 3; i++) cout << (char)32; cout << (char)219; for (int i = 1; i < 4; i++) cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 4; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)178; for (int i = 1; i < 3; i++) cout << (char)219; for (int i = 1; i < 3; i++) cout << (char)32; cout << (char)220; cout << " "; cout << (char)220; cout << " "; cout << (char)220; " "; cout << (char)32; cout << (char)219; for (int i = 1; i < 4; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; cout << (char)32; for (int i = 1; i < 3; i++) cout << (char)219; for (int i = 1; i < 4; i++) cout << (char)32; cout << (char)220; cout << " "; cout << (char)220; cout << " "; cout << (char)220; " "; cout << (char)32; cout << (char)219; for (int i = 1; i < 4; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; cout << (char)178; for (int i = 1; i < 3; i++)cout << (char)219; for (int i = 1; i < 4; i++)cout << (char)32; cout << (char)223; cout << (char)32; cout << (char)223; cout << (char)32; cout << (char)223; for (int i = 1; i < 3; i++) cout << (char)32; cout << (char)219; for (int i = 1; i < 3; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; cout << (char)178; for (int i = 1; i < 15; i++)cout << (char)219; cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 16; i++)cout << (char)178; cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 14; i++) cout << (char)32; for (int i = 1; i < 4; i++)cout << (char)220; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 14; i++) cout << (char)32; cout << (char)219; cout << (char)32; cout << 'K'; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)220; cout << (char)219; for (int i = 1; i < 14; i++) cout << (char)220; cout << (char)219; for (int i = 1; i < 3; i++) cout << (char)220; cout << (char)219;
}
void AS(int palo)
{
    cout << endl << (char)32; cout << (char)32; for (int i = 1; i < 21; i++) cout << (char)220;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; for (int i = 1; i < 18; i++)cout << (char)220; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; cout << 'A'; cout << (char)32; cout << (char)219; for (int i = 1; i < 14; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 3; i++) cout << (char)220; cout << (char)219; for (int i = 1; i < 14; i++)cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 17; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 17; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 17; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 17; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 9; i++) cout << (char)32; cout << (char)palo; for (int i = 1; i < 8; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 9; i++) cout << (char)32; cout << (char)196; for (int i = 1; i < 8; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 17; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 17; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 17; i++) cout << (char)32; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 14; i++) cout << (char)32; for (int i = 1; i < 4; i++)cout << (char)220; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)32; cout << (char)219; for (int i = 1; i < 14; i++) cout << (char)32; cout << (char)219; cout << (char)32; cout << 'A'; cout << (char)219;
    cout << endl << (char)32; cout << (char)32; cout << (char)219; cout << (char)220; cout << (char)219; for (int i = 1; i < 14; i++) cout << (char)220; cout << (char)219; for (int i = 1; i < 3; i++) cout << (char)220; cout << (char)219;
}
int ganador(int carta1, int carta2, int& victorias1, int& victorias2) {
    // Si alguna de las cartas es igual a 21 gana
    if (carta1 == 21 || carta2 == 21) {
        if (carta1 == 21 && carta2 == 21) {
            cout << "Empate: Ambos jugadores tienen 21.\n";
        }
        else if (carta1 == 21) {
            cout << "Jugador #1 gana con 21.\n";
            victorias1++;
        }
        else {
            cout << "Jugador #2 gana con 21.\n";
            victorias2++;
        }
    }
    else {
        // restamos 21 con las cartas y le sacamos valor absoluto para que sean positivas
        int resta1 = abs(21 - carta1);
        int resta2 = abs(21 - carta2);

        // Determinamos al ganador basado en la resta
        if (resta1 < resta2) {
            cout << "\nJugador #1 gana con " << carta1 << " (se aproxima mas a 21).\n";
            victorias1++;
        }
        else if (resta2 < resta1) {
            cout << "\nJugador #2 gana con " << carta2 << " (se aproxima mas a 21).\n";
            victorias2++;
        }
        else {
            cout << "Empate: Ambos jugadores tienen la misma proximidad a 21.\n";
        }
    }

    return victorias1;
}
int random()
{
    //formula para numero aleatorio
    return 1 + rand() % (13 + 1 - 1);
}
int carta_valor(int carta)
{
    //definir la carta que te ha tocado
    if (carta == 1)
    {
        cout << "AS\n";
        AS(palos());
        while (1)
        {
            cout << "\n\nTe ha tocado la carta *AS*, elige el valor que quieres que tome -> '1' o '11':  ";
            cin >> carta;
            if (carta != 1 && carta != 11)
            {
                cout << "\t..VALOR INVALIDO..";
                continue;
            }
            else
            {
                break;
            }
        }
    }
    else
    {
        if (carta == 11 || carta == 12 || carta == 13)
        {
            switch (carta)
            {
            case 11: cout << "11"; cout << "\n"; naipe11(11, palos()); cout << "\n\nTu carta toma el valor de 10.."; carta = 10; break;
            case 12: cout << "12"; cout << "\n"; naipe12(12, palos()); cout << "\n\nTu carta toma el valor de 10.."; carta = 10; break;
            case 13: cout << "13"; cout << "\n"; naipe13(13, palos()); cout << "\n\nTu carta toma el valor de 10.."; carta = 10; break;
            }
        }
        else
        {
            switch (carta)
            {
            case 2: naipe02(2, palos()); break;
            case 3: naipe03(3, palos()); break;
            case 4: naipe04(4, palos()); break;
            case 5: naipe05(5, palos()); break;
            case 6: naipe06(6, palos()); break;
            case 7: naipe07(7, palos()); break;
            case 8: naipe08(8, palos()); break;
            case 9: naipe09(9, palos()); break;
            case 10: naipe10(10, palos()); break;
            }
        }
    }
    return carta;
}
void titulo()//titulo al inicio del juego
{
    system("color 0c");
    cout << endl;
    cout << endl;
    cout << endl << char(32);  cout << char(32); cout << char(32); cout << char(32);  cout << char(32); cout << char(32); cout << char(47); for (int i = 1; i < 8; i++)cout << (char)36; for (int i = 1; i < 3; i++)cout << (char)32; cout << char(47); cout << char(36); cout << char(36); for (int i = 1; i < 10; i++)cout << (char)32; cout << char(47); for (int i = 1; i < 7; i++)cout << char(36); for (int i = 1; i < 4; i++)cout << char(32); cout << char(47); for (int i = 1; i < 7; i++)cout << char(36); for (int i = 1; i < 3; i++)cout << char(32); cout << char(47); for (int i = 1; i < 3; i++)cout << char(36); for (int i = 1; i < 4; i++)cout << char(32); cout << char(47); for (int i = 1; i < 3; i++)cout << char(36); for (int i = 1; i < 9; i++)cout << char(32); cout << char(47); for (int i = 1; i < 6; i++)cout << char(36); for (int i = 1; i < 3; i++)cout << char(32); cout << char(47); for (int i = 1; i < 7; i++)cout << char(36); for (int i = 1; i < 4; i++)cout << char(32); cout << char(47); for (int i = 1; i < 7; i++)cout << char(36); for (int i = 1; i < 4; i++)cout << char(32); cout << char(47); for (int i = 1; i < 3; i++)cout << char(36); for (int i = 1; i < 4; i++)cout << char(32); cout << char(47); for (int i = 1; i < 3; i++)cout << char(36);
    cout << endl << char(32); cout << char(32); cout << char(32); cout << char(32); cout << char(32); cout << char(124); cout << char(32); for (int i = 1; i < 3; i++)cout << (char)36; for (int i = 1; i < 3; i++)cout << (char)95; for (int i = 1; i < 3; i++)cout << (char)32; for (int i = 1; i < 3; i++)cout << (char)36; cout << char(124); cout << char(32); for (int i = 1; i < 3; i++)cout << (char)36; for (int i = 1; i < 9; i++)cout << (char)32; cout << char(47); cout << char(36); cout << char(36); for (int i = 1; i < 3; i++)cout << char(95); cout << char(32); for (int i = 1; i < 3; i++)cout << char(36); for (int i = 1; i < 3; i++)cout << char(32); cout << char(47); for (int i = 1; i < 3; i++)cout << char(36); for (int i = 1; i < 3; i++)cout << char(95); for (int i = 1; i < 3; i++)cout << char(32); for (int i = 1; i < 3; i++)cout << char(36); cout << char(124); for (int i = 1; i < 2; i++)cout << char(32); for (int i = 1; i < 3; i++)cout << char(36); for (int i = 1; i < 3; i++)cout << char(32); cout << char(47); for (int i = 1; i < 3; i++)cout << char(36); cout << char(47); for (int i = 1; i < 8; i++)cout << char(32); cout << char(124); for (int i = 1; i < 3; i++)cout << char(95); for (int i = 1; i < 3; i++)cout << char(32); for (int i = 1; i < 3; i++)cout << char(36); cout << char(32); cout << char(47); for (int i = 1; i < 3; i++)cout << char(36); for (int i = 1; i < 3; i++)cout << char(95); cout << char(32); for (int i = 1; i < 3; i++)cout << char(36); for (int i = 1; i < 3; i++)cout << char(32); cout << char(47); for (int i = 1; i < 3; i++)cout << char(36); for (int i = 1; i < 3; i++)cout << char(95); for (int i = 1; i < 3; i++)cout << char(32); for (int i = 1; i < 3; i++)cout << char(36); cout << char(32); cout << char(124); cout << char(32); for (int i = 1; i < 3; i++)cout << char(36); for (int i = 1; i < 3; i++)cout << char(32); cout << char(47); for (int i = 1; i < 3; i++)cout << char(36); cout << char(47);
    cout << endl << char(32);  cout << char(32); cout << char(32); cout << char(32);  cout << char(32); cout << char(124); cout << char(32); for (int i = 1; i < 3; i++)cout << (char)36; for (int i = 1; i < 3; i++)cout << (char)32; cout << char(92); cout << char(32); for (int i = 1; i < 3; i++)cout << char(36); cout << char(124); cout << char(32); for (int i = 1; i < 3; i++)cout << char(36); for (int i = 1; i < 8; i++)cout << char(32); cout << char(124); cout << char(32); for (int i = 1; i < 3; i++)cout << char(36); for (int i = 1; i < 3; i++)cout << char(32); cout << char(92); cout << char(32); for (int i = 1; i < 3; i++)cout << char(36); cout << char(124); cout << char(32); for (int i = 1; i < 3; i++)cout << char(36); for (int i = 1; i < 3; i++)cout << char(32); cout << char(92); for (int i = 1; i < 3; i++)cout << char(95); cout << char(47); cout << char(124); cout << char(32); for (int i = 1; i < 3; i++)cout << char(36); cout << char(32); cout << char(47); for (int i = 1; i < 3; i++)cout << char(36); cout << char(47); for (int i = 1; i < 12; i++)cout << char(32); cout << char(124); cout << char(32); for (int i = 1; i < 3; i++)cout << char(36); cout << char(124); cout << char(32); for (int i = 1; i < 3; i++)cout << char(36); for (int i = 1; i < 3; i++)cout << char(32); cout << char(92); cout << char(32); for (int i = 1; i < 3; i++)cout << char(36); cout << char(124); cout << char(32); for (int i = 1; i < 3; i++)cout << char(36); for (int i = 1; i < 3; i++)cout << char(32); cout << char(92); for (int i = 1; i < 3; i++)cout << char(95); cout << char(47); cout << char(32); cout << char(124); cout << char(32); for (int i = 1; i < 3; i++)cout << char(36); cout << char(32); cout << char(47); for (int i = 1; i < 3; i++)cout << char(36); cout << char(47);
    cout << endl << char(32); cout << char(32); cout << char(32); cout << char(32); cout << char(32); cout << char(124); cout << char(32); for (int i = 1; i < 8; i++)cout << char(36); cout << char(32); cout << char(124); cout << char(32); for (int i = 1; i < 3; i++)cout << char(36); for (int i = 1; i < 8; i++)cout << char(32); cout << char(124); cout << char(32); for (int i = 1; i < 9; i++)cout << char(36); cout << char(124); cout << char(32); for (int i = 1; i < 3; i++)cout << char(36); for (int i = 1; i < 7; i++)cout << char(32); cout << char(124); cout << char(32); for (int i = 1; i < 6; i++)cout << char(36); for (int i = 1; i < 14; i++)cout << char(32); cout << char(124); cout << char(32); for (int i = 1; i < 3; i++)cout << char(36); cout << char(124); cout << char(32); for (int i = 1; i < 9; i++)cout << char(36); cout << char(124); cout << char(32); for (int i = 1; i < 3; i++)cout << char(36); for (int i = 1; i < 8; i++)cout << char(32); cout << char(124); cout << char(32); for (int i = 1; i < 6; i++)cout << char(36);
    cout << endl << char(32); cout << char(32); cout << char(32);  cout << char(32);  cout << char(32); cout << char(124); cout << char(32); for (int i = 1; i < 3; i++)cout << (char)36; for (int i = 1; i < 3; i++)cout << (char)95; for (int i = 1; i < 3; i++)cout << (char)32; for (int i = 1; i < 3; i++)cout << (char)36; cout << char(124); cout << char(32); for (int i = 1; i < 3; i++)cout << (char)36; for (int i = 1; i < 8; i++)cout << (char)32; cout << char(124); cout << char(32); for (int i = 1; i < 3; i++)cout << char(36); for (int i = 1; i < 3; i++)cout << char(95); for (int i = 1; i < 3; i++)cout << char(32); for (int i = 1; i < 3; i++)cout << char(36); cout << char(124); cout << char(32); for (int i = 1; i < 3; i++)cout << char(36); for (int i = 1; i < 7; i++)cout << char(32); cout << char(124); cout << char(32); for (int i = 1; i < 3; i++)cout << char(36); for (int i = 1; i < 3; i++)cout << char(32); for (int i = 1; i < 3; i++)cout << char(36); for (int i = 1; i < 8; i++)cout << char(32); cout << char(47); for (int i = 1; i < 3; i++)cout << char(36); for (int i = 1; i < 3; i++)cout << char(32); cout << char(124); cout << char(32); for (int i = 1; i < 3; i++)cout << char(36); cout << char(124); cout << char(32); for (int i = 1; i < 3; i++)cout << char(36); for (int i = 1; i < 3; i++)cout << char(95); for (int i = 1; i < 3; i++)cout << char(32); for (int i = 1; i < 3; i++)cout << char(36); cout << char(124); cout << char(32); for (int i = 1; i < 3; i++)cout << char(36); for (int i = 1; i < 8; i++)cout << char(32); cout << char(124); cout << char(32); for (int i = 1; i < 3; i++)cout << char(36); for (int i = 1; i < 3; i++)cout << char(32); for (int i = 1; i < 3; i++)cout << char(36);
    cout << endl << char(32); cout << char(32); cout << char(32); cout << char(32); cout << char(32); cout << char(124); cout << char(32); for (int i = 1; i < 3; i++)cout << (char)36; for (int i = 1; i < 3; i++)cout << (char)32; cout << char(92); cout << char(32); for (int i = 1; i < 3; i++)cout << char(36); cout << char(124); cout << char(32); for (int i = 1; i < 3; i++)cout << char(36); for (int i = 1; i < 8; i++)cout << char(32); cout << char(124); cout << char(32); for (int i = 1; i < 3; i++)cout << char(36); for (int i = 1; i < 3; i++)cout << char(32); cout << char(124); cout << char(32); for (int i = 1; i < 3; i++)cout << char(36); cout << char(124); cout << char(32); for (int i = 1; i < 3; i++)cout << char(36); for (int i = 1; i < 5; i++)cout << char(32); for (int i = 1; i < 3; i++)cout << char(36); cout << char(124); cout << char(32); for (int i = 1; i < 3; i++)cout << char(36); cout << char(92); for (int i = 1; i < 3; i++)cout << char(32); for (int i = 1; i < 3; i++)cout << char(36); for (int i = 1; i < 6; i++)cout << char(32); cout << char(124); cout << char(32); for (int i = 1; i < 3; i++)cout << char(36); for (int i = 1; i < 3; i++)cout << char(32); cout << char(124); cout << char(32); for (int i = 1; i < 3; i++)cout << char(36); cout << char(124); cout << char(32); for (int i = 1; i < 3; i++)cout << char(36); for (int i = 1; i < 3; i++)cout << char(32); cout << char(124); cout << char(32); for (int i = 1; i < 3; i++)cout << char(36); cout << char(124); cout << char(32); for (int i = 1; i < 3; i++)cout << char(36); for (int i = 1; i < 5; i++)cout << char(32); for (int i = 1; i < 3; i++)cout << char(36); cout << char(32); cout << char(124); cout << char(32); for (int i = 1; i < 3; i++)cout << char(36); cout << char(92); for (int i = 1; i < 3; i++)cout << char(32); for (int i = 1; i < 3; i++)cout << char(36);
    cout << endl << char(32); cout << char(32); cout << char(32); cout << char(32); cout << char(32); cout << char(124); cout << char(32); for (int i = 1; i < 8; i++)cout << char(36); cout << char(47); cout << char(124); cout << char(32); for (int i = 1; i < 9; i++)cout << char(36); cout << char(32); cout << char(124); cout << char(32); for (int i = 1; i < 3; i++)cout << char(36); for (int i = 1; i < 3; i++)cout << char(32); cout << char(124); cout << char(32); for (int i = 1; i < 3; i++)cout << char(36); cout << char(124); for (int i = 1; i < 3; i++)cout << char(32); for (int i = 1; i < 7; i++)cout << char(36); cout << char(47); cout << char(124); cout << char(32); for (int i = 1; i < 3; i++)cout << char(36); cout << char(32); cout << char(92); for (int i = 1; i < 3; i++)cout << char(32); for (int i = 1; i < 3; i++)cout << char(36); for (int i = 1; i < 5; i++)cout << char(32); cout << char(124); for (int i = 1; i < 3; i++)cout << char(32); for (int i = 1; i < 7; i++)cout << char(36); cout << char(47); cout << char(124); cout << char(32); for (int i = 1; i < 3; i++)cout << char(36); for (int i = 1; i < 3; i++)cout << char(32); cout << char(124); cout << char(32); for (int i = 1; i < 3; i++)cout << char(36); cout << char(124); for (int i = 1; i < 3; i++)cout << char(32); for (int i = 1; i < 7; i++)cout << char(36); cout << char(47); cout << char(32); cout << char(124); cout << char(32); for (int i = 1; i < 3; i++)cout << char(36); cout << char(32); cout << char(92); for (int i = 1; i < 3; i++)cout << char(32); for (int i = 1; i < 3; i++)cout << char(36);
    cout << endl << char(32); cout << char(32); cout << char(32); cout << char(32); cout << char(32); cout << char(124); for (int i = 1; i < 8; i++)cout << char(95); cout << char(47); cout << char(32); cout << char(124); for (int i = 1; i < 9; i++)cout << char(95); cout << char(47); cout << char(32); cout << char(124); for (int i = 1; i < 3; i++)cout << char(95); cout << char(47); for (int i = 1; i < 3; i++)cout << char(32); cout << char(124); for (int i = 1; i < 3; i++)cout << char(95); cout << char(47); cout << char(32); cout << char(92); for (int i = 1; i < 7; i++)cout << char(95); cout << char(47); cout << char(32); cout << char(124); for (int i = 1; i < 3; i++)cout << char(95); cout << char(47); for (int i = 1; i < 3; i++)cout << char(32); cout << char(92); for (int i = 1; i < 3; i++)cout << char(95); cout << char(47); for (int i = 1; i < 6; i++)cout << char(32); cout << char(92); for (int i = 1; i < 7; i++)cout << char(95); cout << char(47); cout << char(32); cout << char(124); for (int i = 1; i < 3; i++)cout << char(95); cout << char(47); for (int i = 1; i < 3; i++)cout << char(32); cout << char(124); for (int i = 1; i < 3; i++)cout << char(95); cout << char(47); cout << char(32); cout << char(92); for (int i = 1; i < 7; i++)cout << char(95); cout << char(47); for (int i = 1; i < 3; i++)cout << char(32); cout << char(124); for (int i = 1; i < 3; i++)cout << char(95); cout << char(47); for (int i = 1; i < 3; i++)cout << char(32); cout << char(92); for (int i = 1; i < 3; i++)cout << char(95); cout << char(47);
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "\n\t (*)Las cartas [once(J), doce(Q) y trece(K)] tienen el mismo valor: 10.";
    cout << endl;
    cout << "\n\t (*)La carta *AS* vale 1 y 11, el jugador decide que valor darle.";
    cout << endl;
    cout << "\n\t (*)Si el valor acumulado es mayor a 21 es turno del siguiente jugador.";
    cout << endl;
    cout << "\n\t (*)Gana el jugador que tenga 21 o el numero mas aproximado.";
    cout << endl;
    cout << "\n\t (*)Si el jugador quiere otra carta y lo pide, los valores se van sumando.";
    cout << endl;
    cout << endl;
    cout << endl;
}
int tu_carta(int juego, int jugador, int numcart)
{
    //numero de juego
    cout << "\n\t[======PARTIDA #" << juego << "======]\t";
    cout << "[===JUGADOR #" << jugador << "===]";
    srand(time(nullptr));
    int carta;
    carta = random();
    cout << endl << "\n Tu carta #" << numcart << " es : ";
    return carta_valor(carta);
    cout << "\n" << endl;

}
int main()
{
    //declaramos variables
    char q, p;
    int juego = 1, jugador = 1;
    int numcart = 1;
    int carta1 = 0, carta2 = 0, carta3 = 0, carta4 = 0;
    int victorias1 = 0, victorias2 = 0;
    int totaljuegos = 0;
    //presentación del juego 
    Console::SetWindowSize(139, 60);
    titulo();
    //instrucciones y como se juega
    //INICIO BUCLE
    while (totaljuegos < 5)
    {
        carta1 = tu_carta(juego, jugador, numcart);
        //bucle para el jugador 1
        while (1)
        {
            cout << "\n\n¿Desea otra carta? SI[S] - NO[N]: ";
            cin >> q;
            if (q == 'S' || q == 's')
            {
                numcart++;
                carta2 = tu_carta(juego, jugador, numcart);
                carta1 = carta1 + carta2;
                cout << endl << "\nLa suma de sus cartas es: " << carta1;
                if (carta1 > 21)
                {
                    cout << "\n\nPASASTE EL LIMITE, TURNO DEL SIGUIENTE JUGADOR...\n"; break;
                }
                else continue;
            }
            else
            {
                if (q == 'N' || q == 'n')
                {
                    cout << "\nTURNO DEL SIGUIENTE JUGADOR...\n\n";
                    break;
                }
            }
        }
        //bucle para el jugador numero 2
        numcart = 1;
        carta3 = tu_carta(juego, jugador + 1, numcart);
        while (totaljuegos < 5)
        {
            cout << "\n\n¿Desea otra carta? SI[S] - NO[N]: ";
            cin >> q;
            if (q == 'S' || q == 's')
            {
                numcart++;
                carta4 = tu_carta(juego, jugador + 1, numcart);
                carta3 = carta3 + carta4;
                cout << "\nLa suma de sus cartas es: " << carta3;
                if (carta3 > 21)
                {
                    cout << "\n...PASASTE EL LIMITE...\n";
                    break;
                }
            }
            else
            {
                if (q == 'N' || q == 'n')
                {
                    cout << "\nTURNO DEL SIGUIENTE JUGADOR...\n";
                    break;
                }
            }
        }
        //determina el ganador de la partida
        victorias1 = ganador(carta1, carta3, victorias1, victorias2);
        juego++;
        totaljuegos++;
        //Para mas partidas
        if (totaljuegos < 5)
        {
            cout << "\n\t¿DESEA JUGAR OTRA PARTIDA?... SI[S] - NO[N] : ";
            cin >> q;
            if (q == 'N' || q == 'n')
            {
                break;
            }
            else
            {

                continue;
            }
        }
    }
    //Ganador al final de las 5 partidas
    cout << "\nRESULTADO FINAL: ";
    cout << "\n Jugador #1 gano un total de : " << victorias1 << " partidas..";
    cout << "\n Jugador #2 gano un total de : " << victorias2 << " partidas..";
    if (victorias1 > victorias2)
    {
        cout << "\nJUGADOR #1 SIEMPRE ESTUVO UN PASO ADELANTE Y GANO";
        _getch();
        final();
    }
    else
    {
        if (victorias2 > victorias1)
        {
            cout << "\nJUGADOR #2 LO TENIA TODO PLANEADO Y GANO";
            _getch();
            final();
        }
        else
        {
            cout << "\nDESTREZA MUTUA, HA QUEDADO EN EMPATE";
            _getch();
            final();
        }
    }
    system("pause>0");
    return 0;
}

