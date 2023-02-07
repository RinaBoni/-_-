// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <time.h>
using namespace std;

int** create_memory_matrix(int n)//выделение памяти под матрицу
{
    int** matrix = new int* [n];//выделяем память под массив указателей
    for (int i = 0; i < n; i++)
    {
        matrix[i] = new int[n];
    }
    return matrix;
}

void filling_matrix(int** matrix, int n)//заполнение матрицы
{
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matrix[i][j] = rand() % 10 - 1;
            cout << matrix[i][j] << "   ";
        }
        cout << "\n";
    }
   // return matrix;
}

int main()
{
    int n;
    cin >> n;
    int** MatrixA = create_memory_matrix(n);
    filling_matrix(MatrixA, n);

  //  int** MatrixA = new int* [n];//выделение под указатели
  //  int* mas = new int [n];
   /* for (int i = 0; i < n; i++)
    {
        MatrixA[i] = new int[n];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            MatrixA[i][j] = rand() % 10 - 1;
            cout << MatrixA[i][j] << "   ";
        }
        cout << "\n";
    }*/
}