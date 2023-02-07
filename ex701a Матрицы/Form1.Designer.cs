
namespace ex701a
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
            this.button1 = new System.Windows.Forms.Button();
            this.label3 = new System.Windows.Forms.Label();
            this.label4 = new System.Windows.Forms.Label();
            this.label5 = new System.Windows.Forms.Label();
            this.dataGridView_array = new System.Windows.Forms.DataGridView();
            this.dataGridView_matrix = new System.Windows.Forms.DataGridView();
            this.dataGridView_multi = new System.Windows.Forms.DataGridView();
            ((System.ComponentModel.ISupportInitialize)(this.dataGridView_array)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.dataGridView_matrix)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.dataGridView_multi)).BeginInit();
            this.SuspendLayout();
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.label1.Location = new System.Drawing.Point(8, 9);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(830, 24);
            this.label1.TabIndex = 0;
            this.label1.Text = "Даны квадратная матрица А порядка n и вектор b c n элементами. Получить вектор: а" +
    ") Ab;";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.label2.Location = new System.Drawing.Point(12, 49);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(97, 20);
            this.label2.TabIndex = 1;
            this.label2.Text = "Введите  n:";
            // 
            // enter_n
            // 
            this.enter_n.Location = new System.Drawing.Point(132, 49);
            this.enter_n.Name = "enter_n";
            this.enter_n.Size = new System.Drawing.Size(27, 20);
            this.enter_n.TabIndex = 2;
            // 
            // button1
            // 
            this.button1.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.button1.ForeColor = System.Drawing.SystemColors.ActiveCaptionText;
            this.button1.Location = new System.Drawing.Point(212, 42);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(110, 36);
            this.button1.TabIndex = 3;
            this.button1.Text = "Подсчет";
            this.button1.UseVisualStyleBackColor = true;
            this.button1.Click += new System.EventHandler(this.button1_Click);
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.label3.Location = new System.Drawing.Point(9, 403);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(66, 16);
            this.label3.TabIndex = 4;
            this.label3.Text = "Вектор b";
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.label4.Location = new System.Drawing.Point(9, 101);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(78, 16);
            this.label4.TabIndex = 5;
            this.label4.Text = "Матрица A";
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.label5.Location = new System.Drawing.Point(9, 552);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(75, 16);
            this.label5.TabIndex = 6;
            this.label5.Text = "Вестор Ab";
            // 
            // dataGridView_array
            // 
            this.dataGridView_array.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.dataGridView_array.Location = new System.Drawing.Point(12, 431);
            this.dataGridView_array.Name = "dataGridView_array";
            this.dataGridView_array.Size = new System.Drawing.Size(672, 92);
            this.dataGridView_array.TabIndex = 7;
            // 
            // dataGridView_matrix
            // 
            this.dataGridView_matrix.BackgroundColor = System.Drawing.SystemColors.ActiveCaption;
            this.dataGridView_matrix.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.dataGridView_matrix.GridColor = System.Drawing.SystemColors.ActiveCaptionText;
            this.dataGridView_matrix.Location = new System.Drawing.Point(16, 134);
            this.dataGridView_matrix.Name = "dataGridView_matrix";
            this.dataGridView_matrix.Size = new System.Drawing.Size(668, 245);
            this.dataGridView_matrix.TabIndex = 8;
            // 
            // dataGridView_multi
            // 
            this.dataGridView_multi.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.dataGridView_multi.Location = new System.Drawing.Point(12, 594);
            this.dataGridView_multi.Name = "dataGridView_multi";
            this.dataGridView_multi.Size = new System.Drawing.Size(668, 84);
            this.dataGridView_multi.TabIndex = 9;
         
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.SystemColors.ActiveBorder;
            this.ClientSize = new System.Drawing.Size(846, 725);
            this.Controls.Add(this.dataGridView_multi);
            this.Controls.Add(this.dataGridView_matrix);
            this.Controls.Add(this.dataGridView_array);
            this.Controls.Add(this.label5);
            this.Controls.Add(this.label4);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.button1);
            this.Controls.Add(this.enter_n);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.label1);
            this.ForeColor = System.Drawing.SystemColors.ActiveCaptionText;
            this.Name = "Form1";
            this.Text = "Задача 701 а";
            ((System.ComponentModel.ISupportInitialize)(this.dataGridView_array)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.dataGridView_matrix)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.dataGridView_multi)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.TextBox enter_n;
        private System.Windows.Forms.Button button1;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.Label label5;
        private System.Windows.Forms.DataGridView dataGridView_array;
        private System.Windows.Forms.DataGridView dataGridView_matrix;
        private System.Windows.Forms.DataGridView dataGridView_multi;
    }
}

