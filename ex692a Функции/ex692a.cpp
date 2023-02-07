// Дана действительная квадратная матрица порядка n. Найти наибольшее из значений элементов, 
// расположенных в заштрихованной части матрицы (рис. 39).

#include <iostream>
using namespace std;

int** create_memory_matrix(int n);
void filling_matrix(int** arr, int n);
void matrix_out(int** arr, int n);
void find_max(int** arr, int n);

int main()
{
    int n;
    cout << "enter size: ";
    cin >> n;
    int** MatrixA = create_memory_matrix(n);
    filling_matrix(MatrixA, n);
    find_max(MatrixA, n);

}

int** create_memory_matrix(int n)//выделение памяти под матрицу
{
    int** matrix = new int* [n];//выделяем память под массив указателей
    for (int i = 0; i < n; i++)
    {
        matrix[i] = new int[n];
    }
    return matrix;
}

void filling_matrix(int** arr, int n)//заполнение матрицы
{
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = rand() % 20 - 1;
            printf_s("%5d", arr[i][j]);
        }
        cout << "\n";
    }
    // return matrix;
}

void matrix_out(int** arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf_s("%5d", arr[i][j]);
        }
        cout << "\n";
    }
}

void find_max(int** arr, int n)
{
    int num_i, num_j, max = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            if ((j >= i) && (arr[i][j] > max))
            {
                max = arr[i][j];
                num_i = i;
                num_j = j;
            }
        }
    cout << "\nmax element = " << max << " coordinates: i = " << num_i << " j = " << num_j << endl;
}