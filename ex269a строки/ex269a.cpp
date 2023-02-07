// Даны натуральное число n, символы s1,...,sn. Группы символов, разделенные пробелами (одним или несколькими) и не содержащие пробелов внутри себя будем называть словами
//а) Подсчитать количество слов в данной последовательности.

#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main() 
{
    string str;
    getline(cin, str);
    cout << str << endl;
    int space = 0, word = 0;
    int flag = 0;        //первые элементы пробелы

    for (int i = 0; i < str.size() - 1; i++)
    {
        if ((flag == 0) && (str[i] == ' '))//если в начале стоят пробелы
        {
            continue;
        }


        if (str[i] != ' ')
        {
            flag++;
            space = 0;
            continue;

        }
        else
        {
            space++;
            if (space == 1)
            {
                word++;
            }
        }
    }

    if (str[str.size() - 1] != ' ')//проверяем последний элемент
    {
        word++;
    }
    
    cout <<"\n"<< word;
    return 0;
}