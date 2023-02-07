//Даны квадратные матрицы А и В порядка n. 
//Получить матрицу АВ-ВА

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
    //srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matrix[i][j] = rand() % 10-1;
        }
    }
}

void matrix_out (int** matrix, int n)//вывод матрицы
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << "   ";
        }
        cout << "\n";
    }
}

void calc_matrix(int** matrix_mul, int** matrix_a, int** matrix_b, int n)//подсчет АВ-ВА
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matrix_mul[i][j] = 0;
            for (int k = 0; k < n; k++)
            {
                matrix_mul[i][j] += matrix_a[i][k] * matrix_b[k][j] - matrix_b[i][k] * matrix_a[k][j];

            }
        }
    }
}

int main()
{
    srand(time(NULL));

    int n;
    cout << "Enter size of matrix: ";
    cin >> n;

    int** matrixA = create_memory_matrix(n);//выделение памяти под матрицу А
    filling_matrix(matrixA, n);//заполнение матрицы А
    cout << "Matrix A:\n";
    cout << "\n";
    matrix_out(matrixA, n);//Вывод матрицы А
    cout << "\n";

    int** matrixB = create_memory_matrix(n);//выделение памяти под матрицу В
    filling_matrix(matrixB, n);//заполнение матрицы В
    cout << "Matrix B:\n";
    cout << "\n";
    matrix_out(matrixB, n);//Вывод матрицы В
    cout << "\n";

    int** matrix_mul = create_memory_matrix(n);//выделение памяти под матрицу АВ-ВА
    calc_matrix(matrix_mul, matrixA, matrixB, n);//Подсчет АВ-ВА
    cout << "Matrix AB-BA:\n";
    cout << "\n";
    matrix_out(matrix_mul, n);//Вывод матрицы АВ-ВА
    cout << "\n";
}