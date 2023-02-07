//Дано натуральное число n. Выяснить, сколько положительных элементов содержит матрица [aij] i, j = 1, ..., n,
//если aij = sin(i + j/2)

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << "matrix:\n";
    cout << "\n";
    const int n = 5;
    float arr[n][n];//задаем размер матрицы
        for (int i = 0; i < n; i++)//проходим по строкам
        {
            for (int j = 0; j < 5; j++)//проходим по столбикам
            {
                arr[i][j] = sin(i+1 + (j+1) / 2);//заполняем матрицу
                cout << arr[i][j];//вывод матрицы
                cout << "   ";
            }
            cout << "\n";
        }   
    int k = 0;//счетчик положительных элементов
        for (int i = 0; i < n; i++)//проходим по строкам
        {
            for (int j = 0; j < 5; j++)//проходим по столбикам
            {
                if (arr[i][j] > 0)//если элемент положительный
                {
                    k++;//увеличиваем счетчик
                }
                
            }
        }
    cout << "\n";
    cout << "number of positive elements: ";//вывод счетчика
    cout << k;
    cout << "\n";
}
