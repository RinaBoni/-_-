using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace ex269b
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            string str = enter_str.Text;
            int num_a = 0, i = str.Length-1;

            while (str[i] != ' ') 
                if ((str[i--] == 'a') || (str[i--] == 'A')) 
                    num_a++;
            
            listBox1.Items.Add("Строка:");
            listBox1.Items.Add(str);
            listBox1.Items.Add("Количество а:");
            listBox1.Items.Add(num_a);
        }

        private void label3_Click(object sender, EventArgs e)
        {

        }
    }
}
