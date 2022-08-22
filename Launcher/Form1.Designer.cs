
namespace Launcher
{
    partial class Form1
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.panel1 = new System.Windows.Forms.Panel();
            this.SPIELEN = new System.Windows.Forms.Button();
            this.WALLPAPER = new System.Windows.Forms.Button();
            this.panel2 = new System.Windows.Forms.Panel();
            this.panel1.SuspendLayout();
            this.SuspendLayout();
            // 
            // panel1
            // 
            this.panel1.Controls.Add(this.panel2);
            this.panel1.Controls.Add(this.WALLPAPER);
            this.panel1.Controls.Add(this.SPIELEN);
            this.panel1.Location = new System.Drawing.Point(0, 0);
            this.panel1.Name = "panel1";
            this.panel1.Size = new System.Drawing.Size(1265, 50);
            this.panel1.TabIndex = 0;
            // 
            // SPIELEN
            // 
            this.SPIELEN.Location = new System.Drawing.Point(0, -3);
            this.SPIELEN.Name = "SPIELEN";
            this.SPIELEN.Size = new System.Drawing.Size(100, 50);
            this.SPIELEN.TabIndex = 0;
            this.SPIELEN.Text = "SPIELEN";
            this.SPIELEN.UseVisualStyleBackColor = true;
            this.SPIELEN.Click += new System.EventHandler(this.SPIELEN_Click);
            // 
            // WALLPAPER
            // 
            this.WALLPAPER.Location = new System.Drawing.Point(100, 0);
            this.WALLPAPER.Name = "WALLPAPER";
            this.WALLPAPER.Size = new System.Drawing.Size(100, 50);
            this.WALLPAPER.TabIndex = 1;
            this.WALLPAPER.Text = "WALLPAPER";
            this.WALLPAPER.UseVisualStyleBackColor = true;
            // 
            // panel2
            // 
            this.panel2.Location = new System.Drawing.Point(0, 45);
            this.panel2.Name = "panel2";
            this.panel2.Size = new System.Drawing.Size(200, 587);
            this.panel2.TabIndex = 1;
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(1264, 681);
            this.Controls.Add(this.panel1);
            this.Name = "Form1";
            this.Text = "Form1";
            this.Load += new System.EventHandler(this.Form1_Load);
            this.panel1.ResumeLayout(false);
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.Panel panel1;
        private System.Windows.Forms.Button WALLPAPER;
        private System.Windows.Forms.Button SPIELEN;
        private System.Windows.Forms.Panel panel2;
    }
}

