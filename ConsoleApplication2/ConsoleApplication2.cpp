#include <iostream>
#include <Windows.h>
#include <time.h>

int main()
{
    POINT op;
    HWND hwnd = GetConsoleWindow();
    HDC pero = GetDC(hwnd);
    SelectObject(pero, GetStockObject(WHITE_PEN));



    MoveToEx(pero, 100, 100, &op);
    LineTo(pero, 100, 175);
    for (int i = 25; i <= 100; i++) {
        MoveToEx(pero, 100, 175, &op);
        LineTo(pero, i, 100);
    }

    MoveToEx(pero, 100, 100, &op);
    LineTo(pero, 0, 200);

    //по y
    for (int i = 185; i <= 200; i++) {
        MoveToEx(pero, 85, 100, &op);
        LineTo(pero, 0, i);
    }

    //по x
    for (int i = 0; i <= 15; i++) {
        MoveToEx(pero, 100, 115, &op);
        LineTo(pero, i, 200);
    }

    //по y
    for (int i = 185; i <= 200; i++) {
        MoveToEx(pero, 100, 100, &op);
        LineTo(pero, 0, i);
    }

    //по x
    for (int i = 0; i <= 15; i++) {
        MoveToEx(pero, 100, 100, &op);
        LineTo(pero, i, 200);
    }



    /*//прикольный логотип
    MoveToEx(pero, 100, 100, &op);
    LineTo(pero, 100, 175);
    for (int i = 25; i <= 100; i++) {
        MoveToEx(pero, 100, 175, &op);
        LineTo(pero, i, 100);
    }

    MoveToEx(pero, 100, 100, &op);
    LineTo(pero, 0, 200);*/

    /*по y
    for (int i = 185; i <= 200; i++) {
        MoveToEx(pero, 100, i, &op);
        LineTo(pero, 0, i);
    }

    //по x
    for (int i = 0; i <= 15; i++) {
        MoveToEx(pero, i, 100, &op);
        LineTo(pero, i, 200);
    }//*/



    ReleaseDC(hwnd, pero);
    std::cin.get();
}