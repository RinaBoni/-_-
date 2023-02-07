//Построить графики функций:
//а) y = 3x2;

#include <windows.h>
#include <iostream>
#include <cmath>

int main()
{

    /*POINT op;
    //HWND hwnd = GetConsoleWindow();
    HDC pero = GetDC(hwnd);
    SelectObject(pero, GetStockObject(WHITE_PEN));
    HWND hwnd = GetConsoleWindow();
    HDC hdc = GetDC(hwnd);*/
    HWND hwnd = GetConsoleWindow();
    HDC hdc = GetDC(hwnd);
    

    int x = 0;
    /*MoveToEx(pero, 200, 200, &op);
    LineTo(pero, 300, 300);
    SetPixel(pero, 100, 50, RGB(255, 255, 255));*/
    for (float i = -20; i < 20; i += 0.05)
    {
        SetPixel(hdc, x, 250 - 10 * (3*i*i), RGB(255, 255, 255));
        x += 1;
    }

    ReleaseDC(hwnd, hdc);
    std::cin.ignore();
    return 0;
}