using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApp2
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void calc_Click(object sender, EventArgs e)
        {
            string str = enter_a.Text;
            float a = Convert.ToSingle(str);

            while (a < -1)
            {
                a += 2;
            }
            while (a > 1)
            {
                a -= 2;
            }
            listBox1.Items.Add(-(a * a) + 1);
        }
    }
}
