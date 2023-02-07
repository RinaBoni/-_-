//Дан символьный файл f. Группы символов, разделённые пробелами (одним или нескольким ) и не содержащие пробелов внутри себя, будем, как и прежде 
//(см. задачу 269), называть словами. Удалить из файла все однобуквенные слова и лишние пробелы. Результат записать в файл g.

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream file_in;//чтение
    ofstream file_out;//запись
    string f = "f.txt";//чтение
    string g = "g.txt";//запись
    file_in.open(f);
    file_out.open(g);
    string str;
    while (!file_in.eof())
    {
        file_in >> str;
        if (str.size() != 1)
        {
            file_out << str << " ";
        }
        str.clear();
    }
    file_in.close();
    file_out.close();
    cout << "done" << endl;
}
