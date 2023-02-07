// Дано действительное число а. Вычислить f(a), где f—периодическая функция с периодом 2, совпадающая на отрезке [—1, 1]:
//с функцией [-1; 0] y = (x+1), (0; 1] y = sqrt(1-x^2)

#include <iostream>
using namespace std;

float calc(float x)//функция подсчета f(a)
{
   /* int period = 2;//период
    if (x < -1)//если вводимое число меньше -1
    {
        return period_func(x + period);//прибавляем к числу 2 и снова заходим в рекурсию
    }
    else 
    {
        if (x > 1)//если вводимое число больше 1
        {
            return period_func(x - period);//отнимаем от числа 2 и снова заходим в рекурсию
        }
        else
        {
            if (x > 0)//если число в диапазоне от 0 до 1, то
            {
                return sqrt(1 - x * x);//считаем y = sqrt(1-x^2)
            }

            else//если число в диапазоне от -1 до 0
            {
                return x + 1;//считаем y = (x+1)
            }
        }
    }*/
    while (x < -1)
    {
        x += 2;
    }
    while (x > 1)
    {
        x -= 2;
    }
    if (x <= 0)
    {
        return x + 1;

    }
    else
    {
        return sqrt(1 - x * x);
    }
}

int main()
{
    float a;
    cout << "enter a: ";
    cin >> a;
    float f = calc(a);//считаем функцию f(a)
    cout <<"F(a) = " << f;

     
}
