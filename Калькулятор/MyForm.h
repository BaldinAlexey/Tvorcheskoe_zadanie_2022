#pragma once

namespace Projectproba {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::MenuStrip^ menu;
	private: System::Windows::Forms::ToolStripMenuItem^ темаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ тёмнаяToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ оПрограммеToolStripMenuItem;




	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->menu = (gcnew System::Windows::Forms::MenuStrip());
			this->темаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->тёмнаяToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->оПрограммеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menu->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(42, 199);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(88, 29);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(42, 241);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(88, 29);
			this->textBox2->TabIndex = 1;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(266, 199);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(88, 29);
			this->textBox3->TabIndex = 2;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->Location = System::Drawing::Point(266, 241);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(88, 29);
			this->textBox4->TabIndex = 3;
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox5->Location = System::Drawing::Point(72, 89);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(256, 20);
			this->textBox5->TabIndex = 4;
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox6->Location = System::Drawing::Point(72, 156);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(36, 29);
			this->textBox6->TabIndex = 5;
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox7->Location = System::Drawing::Point(292, 156);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(36, 29);
			this->textBox7->TabIndex = 6;
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Сложение", L"Вычитание", L"Умножение", L"Деление" });
			this->comboBox1->Location = System::Drawing::Point(283, 32);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(112, 24);
			this->comboBox1->TabIndex = 7;
			this->comboBox1->Text = L"Сложение";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(47, 133);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(92, 15);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Первая дробь:";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(263, 133);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(91, 15);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Вторая дробь:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(160, 204);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(70, 15);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Числитель";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(151, 246);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(87, 15);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Знаменатель";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(69, 71);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(71, 15);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Результат:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(12, 32);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(110, 24);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Сложение";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(158, 165);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(80, 15);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Целая часть";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(89, 284);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(225, 32);
			this->button1->TabIndex = 15;
			this->button1->Text = L"Вычислить";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button2->Location = System::Drawing::Point(104, 322);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(192, 21);
			this->button2->TabIndex = 16;
			this->button2->Text = L"Сбросить";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// menu
			// 
			this->menu->BackColor = System::Drawing::SystemColors::ControlLight;
			this->menu->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->темаToolStripMenuItem,
					this->оПрограммеToolStripMenuItem
			});
			this->menu->Location = System::Drawing::Point(0, 0);
			this->menu->Name = L"menu";
			this->menu->Size = System::Drawing::Size(407, 24);
			this->menu->TabIndex = 17;
			this->menu->Text = L"menu";
			// 
			// темаToolStripMenuItem
			// 
			this->темаToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->тёмнаяToolStripMenuItem });
			this->темаToolStripMenuItem->Name = L"темаToolStripMenuItem";
			this->темаToolStripMenuItem->Size = System::Drawing::Size(65, 20);
			this->темаToolStripMenuItem->Text = L"Справка";
			// 
			// тёмнаяToolStripMenuItem
			// 
			this->тёмнаяToolStripMenuItem->Name = L"тёмнаяToolStripMenuItem";
			this->тёмнаяToolStripMenuItem->Size = System::Drawing::Size(205, 22);
			this->тёмнаяToolStripMenuItem->Text = L"Информация об авторе";
			this->тёмнаяToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::тёмнаяToolStripMenuItem_Click);
			// 
			// оПрограммеToolStripMenuItem
			// 
			this->оПрограммеToolStripMenuItem->CheckOnClick = true;
			this->оПрограммеToolStripMenuItem->Name = L"оПрограммеToolStripMenuItem";
			this->оПрограммеToolStripMenuItem->Size = System::Drawing::Size(94, 20);
			this->оПрограммеToolStripMenuItem->Text = L"О программе";
			this->оПрограммеToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::оПрограммеToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::PapayaWhip;
			this->ClientSize = System::Drawing::Size(407, 367);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->menu);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(423, 406);
			this->MinimumSize = System::Drawing::Size(423, 406);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Калькулятор дробей";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm::MyForm_FormClosing);
			this->menu->ResumeLayout(false);
			this->menu->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}



private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}

	   bool flag = true;
	   bool Protect()
	   {
		   if ((textBox1->Text->Length == 0) || (textBox2->Text->Length == 0) || (textBox3->Text->Length == 0) ||
			   (textBox4->Text->Length == 0) || (textBox6->Text->Length == 0) || (textBox7->Text->Length == 0)) {
			   return false;
		   }

		   for (int i = 0; i < textBox1->Text->Length; i++)
		   {
			   if ((textBox1->Text[i] >= '0') && (textBox1->Text[i] <= '9') || (textBox1->Text[i] == '-'))
			   {

			   }
			   else { MessageBox::Show("Нельзя вводить таким образом", "Ошибка ввода"); flag = false; return false; }
		   }

		   for (int i = 0; i < textBox2->Text->Length; i++)
		   {
			   if ((textBox2->Text[i] >= '0') && (textBox2->Text[i] <= '9') || (textBox2->Text[i] == '-'))
			   {

			   }
			   else { MessageBox::Show("Нельзя вводить таким образом", "Ошибка ввода"); flag = false; return false; }
		   }

		   for (int i = 0; i < textBox3->Text->Length; i++)
		   {
			   if ((textBox3->Text[i] >= '0') && (textBox3->Text[i] <= '9') || (textBox3->Text[i] == '-'))
			   {

			   }
			   else { MessageBox::Show("Нельзя вводить таким образом", "Ошибка ввода"); flag = false; return false; }
		   }

		   for (int i = 0; i < textBox4->Text->Length; i++)
		   {
			   if ((textBox4->Text[i] >= '0') && (textBox4->Text[i] <= '9') || (textBox4->Text[i] == '-'))
			   {

			   }
			   else { MessageBox::Show("Нельзя вводить таким образом", "Ошибка ввода"); flag = false; return false; }
		   }

		   for (int i = 0; i < textBox6->Text->Length; i++)
		   {
			   if ((textBox6->Text[i] >= '0') && (textBox6->Text[i] <= '9') || (textBox6->Text[i] == '-'))
			   {
			   }
			   else { MessageBox::Show("Нельзя вводить таким образом", "Ошибка ввода"); flag = false; return false; }
		   }

		   for (int i = 0; i < textBox7->Text->Length; i++)
		   {
			   if ((textBox7->Text[i] >= '0') && (textBox7->Text[i] <= '9') || (textBox7->Text[i] == '-'))
			   {

			   }
			   else { MessageBox::Show("Нельзя вводить таким образом", "Ошибка ввода"); flag = false; return false; }
		   }
		   return true;

	   }

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (Protect())
	{
		double Num1, Num2, Num3, Num4, C, C1, Result;
		Num1 = System::Convert::ToDouble(textBox1->Text);
		Num2 = System::Convert::ToDouble(textBox2->Text);
		Num3 = System::Convert::ToDouble(textBox3->Text);
		Num4 = System::Convert::ToDouble(textBox4->Text);
		C = System::Convert::ToDouble(textBox6->Text);
		C1 = System::Convert::ToDouble(textBox7->Text);

		if (comboBox1->SelectedItem == "Сложение")
		{
			label6->Text = L"Сложение";
			if (C == 0 && C1 == 0)
			{
				if (Num2 == 0 || Num4 == 0)
				{
					MessageBox::Show("Попытка делить на 0", "Ошибка деления"); return;
				}
				else
				{
					Num1 = Num1 * Num4;
					Num3 = Num3 * Num2;
					Num2 = Num2 * Num4;
					Num4 = Num2;
					Result = (Num1 / Num2) + (Num3 / Num4);
				}
			}
			else if (C != 0 && C1 != 0)
			{
					if (Num2 == 0 || Num4 == 0)
					{
						MessageBox::Show("Попытка делить на 0", "Ошибка деления"); return;
					}
					else
					{
						if (C < 0 && C1 > 0)
						{
							label6->Text = L"Сложение";
							Num1 = ((C * Num2) - Num1) / Num2;
							Num3 = ((C1 * Num4) + Num3) / Num4;
							Result = (Num1 + Num3);
						}
						if (C > 0 && C1 < 0)
						{
							label6->Text = L"Сложение";
							Num1 = ((C * Num2) + Num1) * Num4;
							Num3 = ((C1 * Num4) - Num3) * Num2;
							Num2 = Num2 * Num4;
							Num4 = Num2;
							Result = (Num1 / Num2) + (Num3 / Num4);
						}
						if (C < 0 && C1 < 0)
						{
							label6->Text = L"Сложение";
							Num1 = ((C * Num2) - Num1) * Num4;
							Num3 = ((C1 * Num4) - Num3) * Num2;
							Num2 = Num2 * Num4;
							Num4 = Num2;
							Result = (Num1 / Num2) + (Num3 / Num4);
						}
						else if (C > 0 && C1 > 0)
						{
							label6->Text = L"Сложение";
							Num1 = ((C * Num2) + Num1) * Num4;
							Num3 = ((C1 * Num4) + Num3) * Num2;
							Num2 = Num2 * Num4;
							Num4 = Num2;
							Result = (Num1 / Num2) + (Num3 / Num4);
						}
					}
			}
			else if (C == 0 && C1 != 0)
			{
					if (Num2 == 0 || Num4 == 0)
					{
						MessageBox::Show("Попытка делить на 0", "Ошибка деления"); return;
					}
					else
					{
						if (C1 < 0)
						{
							label6->Text = L"Сложение";
							Num3 = ((C1 * Num4) - Num3) * Num2;
							Num1 = Num1 * Num4;
							Num2 = Num2 * Num4;
							Num4 = Num2;
							Result = (Num1 / Num2) + (Num3 / Num4);
						}
						else if (C1 > 0)
						{
							label6->Text = L"Сложение";
							Num3 = ((C1 * Num4) + Num3) * Num2;
							Num1 = Num1 * Num4;
							Num2 = Num2 * Num4;
							Num4 = Num2;
							Result = (Num1 / Num2) + (Num3 / Num4);
						}
					}
			}
			else if (C != 0 && C1 == 0)
			{
					if (Num2 == 0 || Num4 == 0)
					{
						MessageBox::Show("Попытка делить на 0", "Ошибка деления"); return;
					}
					else
					{
						if (C < 0)
						{
							label6->Text = L"Сложение";
							Num1 = ((C * Num2) - Num1) * Num4;
							Num3 = Num3 * Num2;
							Num2 = Num2 * Num4;
							Num4 = Num2;
							Result = (Num1 / Num2) + (Num3 / Num4);
						}
						else if (C > 0 )
						{
							label6->Text = L"Сложение";
							Num1 = ((C * Num2) + Num1) * Num4;
							Num3 = Num3 * Num2;
							Num2 = Num2 * Num4;
							Num4 = Num2;
							Result = (Num1 / Num2) + (Num3 / Num4);
						}
					}
			}
		}

		else if (comboBox1->SelectedItem == "Вычитание")
		{
			label6->Text = L"Вычитание";
			if (C == 0 && C1 == 0)
			{
				if (Num2 == 0 || Num4 == 0)
				{
					MessageBox::Show("Попытка делить на 0", "Ошибка деления"); return;
				}
				else
				{
					Num1 = Num1 * Num4;
					Num3 = Num3 * Num2;
					Num2 = Num2 * Num4;
					Num4 = Num2;
					Result = (Num1 / Num2) - (Num3 / Num4);
				}
			}
			else if (C != 0 && C1 != 0)
			{
					if (Num2 == 0 || Num4 == 0)
					{
						MessageBox::Show("Попытка делить на 0", "Ошибка деления"); return;
					}
					else
					{
						if (C < 0 && C1 > 0)
						{
							label6->Text = L"Вычитание";
							Num1 = ((C * Num2) - Num1) * Num4;
							Num3 = ((C1 * Num4) + Num3) * Num2;
							Num2 = Num2 * Num4;
							Num4 = Num2;
							Result = (Num1 / Num2) - (Num3 / Num4);
						}
						if (C > 0 && C1 < 0)
						{
							label6->Text = L"Вычитание";
							Num1 = ((C * Num2) + Num1) * Num4;
							Num3 = ((C1 * Num4) - Num3) * Num2;
							Num2 = Num2 * Num4;
							Num4 = Num2;
							Result = (Num1 / Num2) - (Num3 / Num4);
						}
						if (C < 0 && C1 < 0)
						{
							label6->Text = L"Вычитание";
							Num1 = ((C * Num2) - Num1) * Num4;
							Num3 = ((C1 * Num4) - Num3) * Num2;
							Num2 = Num2 * Num4;
							Num4 = Num2;
							Result = (Num1 / Num2) - (Num3 / Num4);
						}
						else if (C > 0 && C1 > 0)
						{
							label6->Text = L"Вычитание";
							Num1 = ((C * Num2) + Num1) * Num4;
							Num3 = ((C1 * Num4) + Num3) * Num2;
							Num2 = Num2 * Num4;
							Num4 = Num2;
							Result = (Num1 / Num2) - (Num3 / Num4);
						}
					}
			}
			else if (C == 0 && C1 != 0)
			{	
					if (Num2 == 0 || Num4 == 0)
					{
						MessageBox::Show("Попытка делить на 0", "Ошибка деления"); return;
					}
					else
					{
						if (C1 < 0)
						{
							label6->Text = L"Вычитание";
							Num3 = ((C1 * Num4) - Num3) * Num2;
							Num1 = Num1 * Num4;
							Num2 = Num2 * Num4;
							Num4 = Num2;
							Result = (Num1 / Num2) - (Num3 / Num4);
						}
						else if (C1 > 0)
						{
							label6->Text = L"Вычитание";
							Num3 = ((C1 * Num4) + Num3) * Num2;
							Num1 = Num1 * Num4;
							Num2 = Num2 * Num4;
							Num4 = Num2;
							Result = (Num1 / Num2) - (Num3 / Num4);
						}
					}
				
			}
			else if (C != 0 && C1 == 0)
			{
					if (Num2 == 0 || Num4 == 0)
					{
						MessageBox::Show("Попытка делить на 0", "Ошибка деления"); return;
					}
					else
					{
						if (C < 0)
						{
							label6->Text = L"Вычитание";
							Num1 = ((C * Num2) - Num1) * Num4;
							Num3 = Num3 * Num2;
							Num2 = Num2 * Num4;
							Num4 = Num2;
							Result = (Num1 / Num2) - (Num3 / Num4);
						}
						else if (C > 0)
						{
							label6->Text = L"Вычитание";
							Num1 = ((C * Num2) + Num1) * Num4;
							Num3 = Num3 * Num2;
							Num2 = Num2 * Num4;
							Num4 = Num2;
							Result = (Num1 / Num2) - (Num3 / Num4);
						}
					}
			}
		}

		else if (comboBox1->SelectedItem == "Умножение")
		{
			if (C == 0 && C1 == 0)
			{
				Num1 = Num1 * Num3;
				Num2 = Num2 * Num4;
				if (Num2 != 0)
				{
					label6->Text = L"Умножение";
					Result = (Num1 / Num2);
				}
				else { MessageBox::Show("Попытка делить на 0", "Ошибка деления"); return; }
			}

			else if (C != 0 && C1 != 0)
			{
					if (Num2 != 0 && Num4 != 0)
					{
						if (C < 0 && C1 > 0)
						{
							label6->Text = L"Умножение";
							Num1 = ((C * Num2) - Num1);
							Num3 = ((C1 * Num4) + Num3) * Num1;
							Num2 = Num2 * Num4;
							Num4 = Num2;
							Result = (Num3 / Num2);
						}
						else if (C > 0 && C1 < 0)
						{
							label6->Text = L"Умножение";
							Num1 = ((C * Num2) + Num1);
							Num3 = ((C1 * Num4) - Num3) * Num1;
							Num2 = Num2 * Num4;
							Num4 = Num2;
							Result = (Num3 / Num2);
						}
						else if (C < 0 && C1 < 0)
						{
							label6->Text = L"Умножение";
							Num1 = ((C * Num2) - Num1);
							Num3 = ((C1 * Num4) - Num3) * Num1;
							Num2 = Num2 * Num4;
							Num4 = Num2;
							Result = (Num3 / Num2);
						}
						else if (C > 0 && C1 > 0)
						{
							label6->Text = L"Умножение";
							Num1 = ((C * Num2) + Num1);
							Num3 = ((C1 * Num4) + Num3) * Num1;
							Num2 = Num2 * Num4;
							Num4 = Num2;
							Result = (Num3 / Num2);
						}

					}
					else { MessageBox::Show("Попытка делить на 0", "Ошибка деления"); return; }
			}

			else if (C == 0 && C1 != 0)
			{
				if (Num2 != 0 && Num4 != 0)
					{
						if (C1 < 0)
						{
							label6->Text = L"Умножение";
							Num3 = ((C1 * Num4) - Num3) * Num1;
							Num2 = Num2 * Num4;
							Num4 = Num2;
							Result = (Num3 / Num2);
						}
						else if (C1 > 0)
						{
							label6->Text = L"Умножение";
							Num3 = ((C1 * Num4) + Num3) * Num1;
							Num2 = Num2 * Num4;
							Num4 = Num2;
							Result = (Num3 / Num2);
						}
					}
					else { MessageBox::Show("Попытка делить на 0", "Ошибка деления"); return; }
			}

			else if (C != 0 && C1 == 0)
			{
				if (Num2 != 0 && Num4 != 0)
					{
						if (C < 0)
						{
							label6->Text = L"Умножение";
							Num1 = ((C * Num2) - Num1) * Num3;
							Num2 = Num2 * Num4;
							Num4 = Num2;
							Result = (Num1 / Num2);
						}
						else if (C > 0)
						{
							label6->Text = L"Умножение";
							Num1 = ((C * Num2) + Num1) * Num3;
							Num2 = Num2 * Num4;
							Num4 = Num2;
							Result = (Num1 / Num2);
						}
					}
					else { MessageBox::Show("Попытка делить на 0", "Ошибка деления"); return; }
			}
		}


		else if (comboBox1->SelectedItem == "Деление")
		{
			if (C == 0 && C1 == 0)
			{
				if (Num2 != 0 && Num4 != 0)
				{
					label6->Text = L"Деление";
					Num1 = Num1 * Num4;
					Num2 = Num2 * Num3;
					Result = (Num1 / Num2);
				}
				else { MessageBox::Show("Попытка делить на 0", "Ошибка деления"); return; }
			}

			else if (C != 0 && C1 != 0)
			{
					if (Num2 != 0 && Num4 != 0)
					{
						if (C < 0 && C1 > 0)
						{
							label6->Text = L"Деление";
							Num1 = ((C * Num2) - Num1) * Num4;
							Num3 = ((C1 * Num4) + Num3) * Num2;
							Result = (Num1 / Num3);
						}
						else if (C1 < 0 && C > 0)
						{
							label6->Text = L"Деление";
							Num1 = ((C * Num2) + Num1) * Num4;
							Num3 = ((C1 * Num4) - Num3) * Num2;
							Result = (Num1 / Num3);
						}
						else if (C < 0 && C1 < 0)
						{
							label6->Text = L"Деление";
							Num1 = ((C * Num2) - Num1) * Num4;
							Num3 = ((C1 * Num4) - Num3) * Num2;
							Result = (Num1 / Num3);
						}
						else if (C > 0 && C1 > 0)
						{
							label6->Text = L"Деление";
							Num1 = ((C * Num2) + Num1) * Num4;
							Num3 = ((C1 * Num4) + Num3) * Num2;
							Result = (Num1 / Num3);
						}
					}
					else { MessageBox::Show("Попытка делить на 0", "Ошибка деления"); return; }
			}

			else if (C != 0 && C1 == 0)
			{
					if (Num2 != 0 && Num4 != 0)
					{
						if (C < 0)
						{
							label6->Text = L"Деление";
							Num1 = ((C * Num2) - Num1) * Num4;
							Num2 = Num2 * Num3;
							Result = (Num1 / Num2);
						}
						else if (C > 0)
						{
							label6->Text = L"Деление";
							Num1 = ((C * Num2) + Num1) * Num4;
							Num2 = Num2 * Num3;
							Result = (Num1 / Num2);
						}
					}
					else { MessageBox::Show("Попытка делить на 0", "Ошибка деления"); return; }
			}

			else if (C == 0 && C1 != 0)
			{
					if (Num2 != 0 && Num4 != 0)
					{
						if (C1 < 0)
						{
							label6->Text = L"Деление";
							Num3 = ((C1 * Num4) - Num3) * Num2;
							Num1 = Num1 * Num4;
							Result = (Num1 / Num3);
						}
						else if (C1 > 0)
						{
							label6->Text = L"Деление";
							Num3 = ((C1 * Num4) + Num3) * Num2;
							Num1 = Num1 * Num4;
							Result = (Num1 / Num3);
						}
					}
					else { MessageBox::Show("Попытка делить на 0", "Ошибка деления"); return; }
			}

		}
		textBox5->Text = System::Convert::ToString(Result);
	}
	else if (flag == false) { flag = true; return; }
	else { MessageBox::Show("Все поля должны быть заполнены!", "Ошибка заполнения"); }

}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		textBox1->Text = L"";
		textBox2->Text = L"";
		textBox3->Text = L"";
		textBox4->Text = L"";
		textBox5->Text = L"";
		textBox6->Text = L"";
		textBox7->Text = L"";
		label6->Text = L"";
	}




private: System::Void тёмнаяToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
	MessageBox::Show("Автор - Балдин Алексей Игоревич\n" "Студент Группы : ИВТ - 21 - 1Б\n" "Университет - ПНИПУ\n ", "Данные Автора");
}


private: System::Void оПрограммеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
	MessageBox::Show("Это калькулятор обыкновенных дробей, которые могут содержать целую часть. Программа принимает для дроби три основных параметра: Целая часть, числитель, знаменатель. Для удобства, как и принито в математике, перевожу результат в десятичную дробь.\n\n\t\t           Успехов в вычислениях!", "Информация о программе");
}


private: System::Void MyForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) 
{
	if (MessageBox::Show("Вы точно хотите выйти?", "Выход из программы", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::No)
	{
		e->Cancel = true; // то же самое что и - Application::Exit();
	}
	else { e->Cancel = false; }
}


};
}
