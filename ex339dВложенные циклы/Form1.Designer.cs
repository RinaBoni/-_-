
namespace ex339d
{
    partial class Form1
    {
        /// <summary>
        /// Обязательная переменная конструктора.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Освободить все используемые ресурсы.
        /// </summary>
        /// <param name="disposing">истинно, если управляемый ресурс должен быть удален; иначе ложно.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Код, автоматически созданный конструктором форм Windows

        /// <summary>
        /// Требуемый метод для поддержки конструктора — не изменяйте 
        /// содержимое этого метода с помощью редактора кода.
        /// </summary>
        private void InitializeComponent()
        {
            this.label1 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.enter_n = new System.Windows.Forms.TextBox();
            this.calc = new System.Windows.Forms.Button();
            this.listBox1 = new System.Windows.Forms.ListBox();
            this.SuspendLayout();
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("Microsoft Sans Serif", 15.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.label1.Location = new System.Drawing.Point(2, 9);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(599, 100);
            this.label1.TabIndex = 0;
            this.label1.Text = "Даны целые числаa a1,..., an (в этой последовательности \r\nмогут быть повторяющиес" +
    "я члены).\r\nд) Выяснить, сколько чисел входит в последовательность \r\nболее чем по" +
    " одному разу.";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.label2.Location = new System.Drawing.Point(3, 119);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(249, 24);
            this.label2.TabIndex = 1;
            this.label2.Text = "Введите количество цифр";
            // 
            // enter_n
            // 
            this.enter_n.Location = new System.Drawing.Point(268, 124);
            this.enter_n.Name = "enter_n";
            this.enter_n.Size = new System.Drawing.Size(131, 20);
            this.enter_n.TabIndex = 2;
            // 
            // calc
            // 
            this.calc.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.calc.ForeColor = System.Drawing.SystemColors.ActiveCaptionText;
            this.calc.Location = new System.Drawing.Point(436, 107);
            this.calc.Name = "calc";
            this.calc.Size = new System.Drawing.Size(187, 52);
            this.calc.TabIndex = 3;
            this.calc.Text = "Подсчет";
            this.calc.UseVisualStyleBackColor = true;
            this.calc.Click += new System.EventHandler(this.button1_Click);
            // 
            // listBox1
            // 
            this.listBox1.FormattingEnabled = true;
            this.listBox1.Location = new System.Drawing.Point(12, 178);
            this.listBox1.Name = "listBox1";
            this.listBox1.Size = new System.Drawing.Size(611, 316);
            this.listBox1.TabIndex = 4;
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.SystemColors.ActiveCaptionText;
            this.ClientSize = new System.Drawing.Size(635, 506);
            this.Controls.Add(this.listBox1);
            this.Controls.Add(this.calc);
            this.Controls.Add(this.enter_n);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.label1);
            this.ForeColor = System.Drawing.SystemColors.ActiveCaption;
            this.Name = "Form1";
            this.Text = "задача 339д";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.TextBox enter_n;
        private System.Windows.Forms.Button calc;
        private System.Windows.Forms.ListBox listBox1;
    }
}

