//Даны целые числаa a1,..., an (в этой последовательности могут быть повторяющиеся члены).
//Выяснить, имеется ли в последовательности хотя бы одна пара совпадающих чисел.

#include <iostream>
#include <time.h>
using namespace std;

void filling_array(int* array, int n);
void out_array(int* array, int n);
void out_array(int* array, int n);
void calc(int* array, int n);

int main()
{
    srand(time(NULL));
    int n;
    cout << "enter array's length: ";
    cin >> n;
    cout << "\n";
    int* array = new int[n];
    filling_array(array, n);
    out_array(array, n);
    calc(array, n);
    delete[] array;
}

void filling_array(int* array, int n)//заполнение массива
{
    for (int i = 0; i < n; i++)
    {
        array[i] = rand() % 10;
    }
}

void out_array(int* array, int n)//вывод массива
{
    cout << "array: ";
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << "  ";
    }
    cout << "\n";
    cout << "\n";
}

void calc(int* array, int n)//поиск пар
{
    int found = 0;
    for (int i = 1; i < n; i++)
    {
        if (array[i] == array[i - 1])
            found++;
    }

    if (found >= 1)
        cout << "the sequence contains at least one pair of coinciding numbers";
    else
        cout << "there are no matching numbers in the sequence";
    cout << "\n";
}