#include <iostream>
using namespace std;

int input();//ввод данных
void output(long a);//вывд данных
long akker(int n, int m);//подсчет функции аккермана


int main()
{
    int n, m;
    long a;
    cout << "enter n: ";
    n = input();
    cout << "enter m: ";
    m = input();
    cout << "result: " << akker(n, m);
}

int input()
{
    int n;
    cin >> n;
    return n;
}

void output(long a)
{
    cout << a;
}

long akker(int n, int m)
{
    long a = 0;
    if (n == 0)//если выполняется первое условие
    {
        a = m + 1;//находится а
    }
    if (n != 0 && m == 0)//если выполняется второе условие
    {
        a = akker(n - 1, 1);//вызывается рекурсия
    }
    if (n > 0 && m > 0)//если выполняется третье условие
    {
        a = akker(n - 1, akker(n, m - 1));//вызывается рекурсия
    }
    return a;
}