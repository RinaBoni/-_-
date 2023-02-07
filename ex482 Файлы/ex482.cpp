//Дан символьный файл f. Получить файл g, образованный из файла f заменой всех 
// его прописных(больших) букв одноименными строчными (малыми).
//

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    string path = "f.txt";//название файла f
    ofstream file_f;//создаем фаил для записи
    file_f.open(path);//открываем файл для записи, связываем с именем
    if (!file_f.is_open())//если не удалось открыть
    {
        cout << "file open error1" << endl;//сообщаем об этом
    }
    else//если открылся
    {
        cout << "file opened successfully" << endl;
        string something;//создаем строку
        cout << "enter something: ";
        getline(cin, something);
        file_f << something;//записываем строку в файл
    }
    file_f.close();//закрываем файл

    ifstream file_fe;//создаем файл для чтения
    file_fe.open(path);//открываем файл для чтения, связываем с именем
    string str;//создаем строку для изменения
    if (!file_fe.is_open())//если не удалось открыть
    {
        cout << "file open error2" << endl;//сообщаем об этом
    }
    else//если открылся
    {      
        while (!file_fe.eof())//пока не закончился файл
        {
            getline(file_fe, str);//записываем данные из файла в строку
            for (int i = 0; i < str.length(); i++)
            {
                if (isupper(str[i]))//если буква заглавная
                {
                    str[i] = (char)tolower(str[i]);//меняем на прописную
                }
            }
        }

    }
    file_fe.close();//закрываем файл
    string path2 = "g.txt";//название файла g
    ofstream file_g;//создаем файл для записи
    file_g.open(path2);//открываем файл для записи, связываем с именем
    if (!file_g.is_open())
    {
        cout << "file open error3" << endl;
    }
    else
    {
        file_g << str;
        cout << str << endl;
    }
    file_g.close();
}