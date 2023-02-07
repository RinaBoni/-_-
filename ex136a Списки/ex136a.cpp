// Даны натуральное число n, действительные числа a1,..., an. Вычислить:
//а) a1 + ... + an;
//

#include <iostream>
#include <time.h>
using namespace std;

typedef struct MyStruct
{
    int fe;
	struct MyStruct* adress;
}my_list;

void new_list(my_list* head);
void last_add(my_list* head, my_list* novoi);
void list_show(my_list* head);//вывод содержимого списка на экран
int summa(my_list* head);//сумма
void del(my_list* head);//удаление списка


int main()
{
    srand(time(NULL));
    my_list* head = new my_list;
    head->fe = rand() % 20;
    head->adress = nullptr;
    int n;
    cout << "enter n: ";
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        new_list(head);
    }
    list_show(head);
    cout << "\nsumm = " << summa(head) << endl;
    del(head);
}

void new_list(my_list* head)//создает новый узел списка
{
    my_list* novoi = new my_list;
    novoi->fe = rand() % 20;
    novoi->adress = nullptr;
    last_add(head, novoi);
}

void last_add(my_list* head, my_list* novoi)//добавляет к последнему
{
    my_list* tek = head;
    while (tek->adress != nullptr)
    {
        tek = tek->adress;
    }
    tek->adress = novoi;
}

void list_show(my_list* head)//вывод содержимого списка на экран
{
    my_list* tek = head;
    while (tek != nullptr)
    {
        cout << tek->fe << "\t";
        tek = tek->adress;
    }
    
}

int summa(my_list* head)//сумма
{
    int sum = 0;
    my_list* tek = head;
    while (tek != nullptr)
    {
        sum += tek->fe;
        tek = tek->adress;
    }
    return sum;
}
void del(my_list* head)//удаление списка
{
    my_list* tek = head;
    while (head != nullptr)
    {
        tek = head;
        head = head->adress;
        tek->adress = nullptr;
        free(tek);
    }
}

