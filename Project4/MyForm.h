#pragma once
#include <cmath>

namespace My11 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
		}

	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ X;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Y;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ F2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ F3;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox5;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ buttonExit;







	private:
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->X = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Y = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->F2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->F3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->buttonExit = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->X, this->Y,
					this->F2, this->F3
			});
			this->dataGridView1->Location = System::Drawing::Point(12, 16);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(334, 243);
			this->dataGridView1->TabIndex = 0;
			// 
			// X
			// 
			this->X->HeaderText = L"X";
			this->X->MinimumWidth = 6;
			this->X->Name = L"X";
			this->X->ReadOnly = true;
			this->X->Width = 70;
			// 
			// Y
			// 
			this->Y->HeaderText = L"F1";
			this->Y->MinimumWidth = 6;
			this->Y->Name = L"Y";
			this->Y->ReadOnly = true;
			this->Y->Width = 70;
			// 
			// F2
			// 
			this->F2->HeaderText = L"F2";
			this->F2->MinimumWidth = 6;
			this->F2->Name = L"F2";
			this->F2->ReadOnly = true;
			this->F2->Width = 70;
			// 
			// F3
			// 
			this->F3->HeaderText = L"F3";
			this->F3->MinimumWidth = 6;
			this->F3->Name = L"F3";
			this->F3->ReadOnly = true;
			this->F3->Width = 70;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Lime;
			this->button1->Location = System::Drawing::Point(12, 283);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(334, 54);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Пуск";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(620, 44);
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(70, 27);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(107, 22);
			this->textBox1->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(70, 55);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(107, 22);
			this->textBox2->TabIndex = 4;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(70, 84);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(107, 22);
			this->textBox3->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(19, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(25, 16);
			this->label1->TabIndex = 6;
			this->label1->Text = L"от:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(19, 58);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(26, 16);
			this->label2->TabIndex = 7;
			this->label2->Text = L"до:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(18, 90);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(41, 16);
			this->label3->TabIndex = 8;
			this->label3->Text = L"шаги:";
			// 
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(364, 71);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(186, 100);
			this->panel1->TabIndex = 9;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->textBox1);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->textBox3);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->textBox2);
			this->panel2->Location = System::Drawing::Point(379, 16);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(194, 119);
			this->panel2->TabIndex = 9;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->textBox5);
			this->panel3->Controls->Add(this->textBox4);
			this->panel3->Controls->Add(this->label6);
			this->panel3->Controls->Add(this->label5);
			this->panel3->Controls->Add(this->label4);
			this->panel3->Location = System::Drawing::Point(379, 147);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(194, 112);
			this->panel3->TabIndex = 10;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(70, 63);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(107, 22);
			this->textBox5->TabIndex = 2;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(70, 35);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(107, 22);
			this->textBox4->TabIndex = 1;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(18, 72);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(32, 16);
			this->label6->TabIndex = 4;
			this->label6->Text = L"max";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(19, 41);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(28, 16);
			this->label5->TabIndex = 3;
			this->label5->Text = L"min";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(19, 10);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(137, 16);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Точки экстремиума";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// buttonExit
			// 
			this->buttonExit->BackColor = System::Drawing::Color::Red;
			this->buttonExit->Location = System::Drawing::Point(379, 283);
			this->buttonExit->Name = L"buttonExit";
			this->buttonExit->Size = System::Drawing::Size(194, 54);
			this->buttonExit->TabIndex = 11;
			this->buttonExit->Text = L"выход";
			this->buttonExit->UseVisualStyleBackColor = false;
			this->buttonExit->Click += gcnew System::EventHandler(this, &MyForm::buttonExit_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(594, 361);
			this->Controls->Add(this->buttonExit);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"MyForm";
			this->Text = L"Студент группы PRG203 Аккиев Нурбек";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		double a = Convert::ToDouble(textBox1->Text);
		double b = Convert::ToDouble(textBox2->Text);
		double h = Convert::ToDouble(textBox3->Text);
		this->dataGridView1->Rows->Clear();
		double min = Double::MaxValue;
		double max = Double::MinValue;
		for (double x = a; x <= b; x += h) {
			double f1 = sin(x);
			double f2 = x * x;
			double f3 = log(f2 + 1);
			if (f1 < min) min = f1;
			if (f1 > max) max = f1;
			this->dataGridView1->Rows->Add(x, f1, f2, f3);
		}
		textBox4->Text = min.ToString();
		textBox5->Text = max.ToString();
	}
	private: System::Void buttonExit_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
