/*Даны натуральное число n, символы s1, ..., sn.Будем рассматривать слова, образованные входящими в последовательность s1, ..., sn
символами(см.задачу 269).Ниже описываются преобразования, каждое из которых следует произвести при выполнении указаного условия.
Затем последовательность вне зависимости от того, подвергалась она или нет преобразованию, должна быть отредактирована следующим образом.
Должны быть удалены группы пробелов, которыми начинается и заканчивается последовательность, а каждая внутренняя группа пробелов должна 
быть заменена одним пробелом.Преобразования:
в) если первое и последнее слова совпадают и общее число слов больше единицы, то удалить первое и последнее слова, 
а оставшиеся символы переставить в обратном порядке.*/

#include <iostream>
#include <time.h>
#include <string>
#include <sstream>

using namespace std;

typedef struct MyStruct
{
    string fe;
    struct MyStruct* adress;
}my_list;

void new_list(my_list* head, string str);//создает новый узел списка
void last_add(my_list* head, my_list* novoi);//добавляет к последнему
void list_show(my_list* head);//вывод содержимого списка на экран
void del(my_list* head);//удаление списка
bool chek(my_list* head);//проверяет ровняется ли первое слово последнему
my_list* del_1el(my_list* head);//удаление первого элемента
void del_last_el(my_list* head);//удаление первого элемента
void rev_str(my_list* head);//разворачивает все строки в списке

int main()
{
    stringstream bufer;//буфер для нарезки строки
    string str, slovo;//str для введения строки, slovo для отрезаного слова
    cout << "enter string: ";
    getline(cin, str);//ввод строки
       
    bufer << str;//режется строка

    my_list* head = new my_list;//создается память под голову
    bufer >> slovo;//заносим отрезаное слово в slovo
    head->fe = slovo;//заносим slovo в слово
    head->adress = nullptr;//адресу головы присваевается ноль

    while (bufer >> slovo) //пока слово режется
    {
        new_list(head, slovo);//создается список
    }
    cout << "\ngot: ";
    list_show(head);//выводится список
    cout << "\n";
    if (chek(head))//проверка на одинаковость первого и последнего эл
    {                         //если они одинаковые  
        head = del_1el(head);//удаляется первый эл
        del_last_el(head);//удаляется последний эл
        rev_str(head);//разворачиваем строку
        cout << "\nafter: " << endl;
        list_show(head);//выводим развернутый список
        cout << "\n";
    }
    else//если они разные
    {
        cout << "they're different" << endl;
    }
}

void new_list(my_list* head, string str)//создает новый узел списка
{
    my_list* novoi = new my_list;//создаем память под новый элемент
    novoi->fe = str;//зпносим строку
    novoi->adress = nullptr;//адресу присваеваем ноль
    last_add(head, novoi);//добавляем к концу
}

void last_add(my_list* head, my_list* novoi)//добавляет к последнему
{
    my_list* tek = head;//tek - текущий, записываем в него голову(первый)
    while (tek->adress != nullptr)//пока в строке адресса не будет ноль
    {
        tek = tek->adress;//переходит на следующий
    }
    tek->adress = novoi;//в конец ставится новый
}

void list_show(my_list* head)//вывод содержимого списка на экран
{
    my_list* tek = head;//tek - текущий, записываем в него голову(первый) 
    while (tek != nullptr)//пока не дойдет до последнего элемента
    {
        cout << tek->fe << "\t";//выводится содержимое на экране
        tek = tek->adress;//переход на следующий элемент
    }
}

bool chek(my_list* head)//проверяет ровняется ли первое слово последнему
{
    my_list* tek = head;//tek - текущий, записываем в него голову(первый) 
    while (tek->adress != nullptr)//пока в строке адресса не будет ноль
    {
        tek = tek->adress;//ищем последний
    }
    if (head->fe == tek->fe)//если они одинаковые
    {
        return true;//возращает true
    }
    else//если разные
    {
        return false;//возвращает false
    }
}

void rev_str(my_list* head)//разворачивает все строки в списке
{
    my_list* tek = head;//tek - текущий, записываем в него голову(первый) 
    while (tek != nullptr)//пока не дойдет до последнего элемента
    {
        reverse(tek->fe.begin(), tek->fe.end());//разворачивает строку в другую сторону
        tek = tek->adress;//переходит на следующий элемент
    }
}

my_list* del_1el (my_list* head)//удаление первого элемента
{
    my_list* tek = head;//tek - текущий, записываем в него голову(первый)    
    tek = head;//в тек записывают голову
    head = head->adress;//в адресс головы записывается следующий элемент
    tek->adress = nullptr;//адрессу тека присваевается ноль
    free(tek);//освобождает память из под тека
    return head;//возвращает новую голову
}

void del_last_el(my_list* head)//удаление первого элемента
{
    my_list* tek = head;//tek - текущий, записываем в него голову(первый)
    while (tek->adress != nullptr)//ищем последний эл
    {
        tek = tek->adress;
    }
    while (head->adress != tek)//ищем предпоследний эл
    {
        head = head->adress;
    }
    head->adress = nullptr;//предпоследнему эл присваеваем ноль
    free(tek);//освободить память из под последнего элемента
}

void del(my_list* head)//удаление списка
{
    my_list* tek = head;//tek - текущий, записываем в него голову(первый)
    while (head != nullptr)//пока не закончится
    {
        tek = head;//присваеваем теку голову(чтобы не потерять ее)
        head = head->adress;//адресс головы переходит на следущий эл
        tek->adress = nullptr;//адресу тека присвается ноль
        free(tek);//освобождается память из под тека
    }
}

