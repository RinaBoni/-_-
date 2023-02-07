using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace ex701a
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }
        /*Даны квадратная матрица А порядка n и 
          вектор b c n элементами. Получить вектор:
          а) Ab;*/
        private void button1_Click(object sender, EventArgs e)
        {
            //размер массива и матрицы
            string str = enter_n.Text;
            int n = Convert.ToInt32(str);
            //объявление массива, матрицы и массива под умножение
            int[] array = new int[n];
            int[,] matrix = new int[n, n];
            int[] multi = new int[n]; 
            //рандом
            Random rand = new Random();
            //заполнение массива
            for (int i = 0; i < n; i++)
            {
                array[i] = rand.Next(1, 11);
            }
            //заполнение матрицы
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    matrix[i, j] = rand.Next(1, 11);
                }
            }
            //умножение
            int summ = 0;
            for(int i = 0; i < n; i++)
            {
                summ = 0;
                for(int j = 0; j < n; j++)
                {
                    summ = summ + matrix[i, j] * array[j];
                }

                multi[i] = summ;
            }
            //вывод

            //вывод массива
            dataGridView_array.RowCount = 1;
            dataGridView_array.ColumnCount = n;
            for (int i = 0; i<n; i++)
            {
                dataGridView_array.Rows[0].Cells[i].Value = Convert.ToString(array[i]);
            }

            //вывод матрицы
            dataGridView_matrix.RowCount = n;
            dataGridView_matrix.ColumnCount = n;
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    dataGridView_matrix.Rows[i].Cells[j].Value = Convert.ToString(matrix[i, j]);
                }
            }

            //вывод вектора массива
            dataGridView_multi.RowCount = 1;
            dataGridView_multi.ColumnCount = n;
            for (int i = 0; i < n; i++)
            {
                dataGridView_multi.Rows[0].Cells[i].Value = Convert.ToString(multi[i]);
            }

        }       
    }
}
