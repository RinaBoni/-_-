//В некоторых видах спортивных состязаний выступление каждого спортсмена независимо оценивается несколькими судьями, 
//затем из всей совокупности оценок удаляются наибдолее высокая и наиболее низкая, а для оставшихся оценок вычисляется среднее арифметическое, 
//которое и идет в зачет спортсмену. Если наиболее высокую оценку выставило несколько судей, то из совокупности оценок удаляется только одна такая оценка; 
//аналогично поступают с наиболее низкими оценками.
//Даны натуральное число n, действительные положительные числа a1, ..., an(n ≥ 3).Считая, что числа a1, ..., an - это оценки, 
//выставленные судьями одному из участников соревнований, определить оценку, которая пойдет в зачет этому спортсмену.

#include <iostream>
#include <time.h>
using namespace std;

void filling_array(int* array, int n);
void array_out(int* array, int n);
int max_el(int* array, int n);
int min_el(int* array, int n);
float grade_calc(int* array, int n);

int main()
{
    srand(time(NULL));
    const int n = 7;
    int grade[n];
    filling_array(grade, n);
    array_out(grade, n);
    cout << "final grade: " << grade_calc(grade, n);

}

void filling_array(int* array, int n)//заполнение матрицы
{
    for (int i = 0; i < n; i++)
    {
        array[i] = rand() % 10 + 1 ;
    }
}

void array_out(int* array, int n)//вывод матрицы
{
    cout << "given grades: ";
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << "  ";
    }
    cout << "\n";
}

int max_el(int* array, int n)//нахождение максимума
{
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (array[i] > max)
            max = array[i];
    }
    return max;
}

int min_el(int* array, int n)//нахождение минимума
{
    int min = 0;
    for (int i = 0; i < n; i++)
    {
        if (array[i] < min)
            min = array[i];
    }
    return min;
}

float grade_calc(int* array, int n)//подсчет финальной оценки
{
    int all_grades;
    float final_grade;
    int max = max_el(array, n);
    int min = min_el(array, n);
    all_grades = 0;
    for (int i = 0; i < n; i++)
    {
        all_grades += array[i];
    }
    final_grade = (all_grades - (min + max)) / (n - 2);
    return final_grade;
}