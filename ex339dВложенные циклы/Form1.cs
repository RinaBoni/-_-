using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace ex339d
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            /*Даны целые числаa a1,..., an (в этой последовательности могут быть повторяющиеся члены).
            д) Выяснить, сколько чисел входит в последовательность более чем по одному разу.*/
            string str = enter_n.Text;
            int n = Convert.ToInt32(str);
            int[] ar = new int[n];
            int found = 0;
            Random rand = new Random();
            for (int i = 0; i < n; i++)
            {
                ar[i] = rand.Next(1, 11);
            }
            for (int i = 0; i < n; i++)
            {
                for (int j = 1; j < n-1; j++)
                {
                    if (ar[i] == ar[j] && (i != j))
                    {
                        found++;
                    }
                }
            }
            //found--;
            listBox1.Items.Add("Последовательность: ");
            for (int i = 0; i < ar.Length; i++)
            {
                listBox1.Items.Add(ar[i]);
            }
            listBox1.Items.Add("Повторений:");
            listBox1.Items.Add(found);
        }
    }
}
