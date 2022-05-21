#pragma once
#include <string>
#include <cstring>
#include <algorithm>
#include <msclr\marshal_cppstd.h>
#include <cmath>
#include <ctgmath>
using namespace std;
string  s;
namespace LOGCALC {
	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	int stage = 6;
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
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label4;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->button1->FlatAppearance->BorderSize = 5;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(461, 105);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(66, 60);
			this->button1->TabIndex = 0;
			this->button1->Text = L"+";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->button2->FlatAppearance->BorderSize = 5;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(461, 170);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(66, 60);
			this->button2->TabIndex = 1;
			this->button2->Text = L"-";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button3->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->button3->FlatAppearance->BorderSize = 5;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(461, 236);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(66, 60);
			this->button3->TabIndex = 2;
			this->button3->Text = L"/";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button4->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->button4->FlatAppearance->BorderSize = 5;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(461, 302);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(66, 60);
			this->button4->TabIndex = 3;
			this->button4->Text = L"*";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::SlateGray;
			this->button5->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->button5->FlatAppearance->BorderSize = 5;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(27, 302);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(211, 60);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Посчитать";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->textBox1->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->textBox1->Location = System::Drawing::Point(55, 39);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(127, 22);
			this->textBox1->TabIndex = 5;
			this->textBox1->Text = L"Аргумент";
			this->textBox1->Click += gcnew System::EventHandler(this, &MyForm::textBox1_Click);
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::ControlLight;
			this->textBox2->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->textBox2->Location = System::Drawing::Point(55, 105);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(127, 22);
			this->textBox2->TabIndex = 6;
			this->textBox2->Text = L"Аргумент";
			this->textBox2->Click += gcnew System::EventHandler(this, &MyForm::textBox2_Click);
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::ControlLight;
			this->textBox3->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->textBox3->Location = System::Drawing::Point(26, 65);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(40, 22);
			this->textBox3->TabIndex = 7;
			this->textBox3->Text = L"Осн.";
			this->textBox3->Click += gcnew System::EventHandler(this, &MyForm::textBox3_Click);
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::SystemColors::ControlLight;
			this->textBox4->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->textBox4->Location = System::Drawing::Point(26, 132);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(40, 22);
			this->textBox4->TabIndex = 8;
			this->textBox4->Text = L"Осн.";
			this->textBox4->Click += gcnew System::EventHandler(this, &MyForm::textBox4_Click);
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::SystemColors::ControlLight;
			this->textBox5->Location = System::Drawing::Point(183, 69);
			this->textBox5->Multiline = true;
			this->textBox5->Click += gcnew System::EventHandler(this, &MyForm::textBox5_Click);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(32, 32);
			this->textBox5->TabIndex = 9;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged);
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::SystemColors::ControlLight;
			this->textBox6->Location = System::Drawing::Point(244, 65);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(164, 27);
			this->textBox6->TabIndex = 10;
			this->textBox6->Click += gcnew System::EventHandler(this, &MyForm::textBox6_Click);
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox6_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(241, 37);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(97, 20);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Результат";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(4, 39);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(33, 18);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Log";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(3, 105);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(33, 18);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Log";
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button9->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->button9->FlatAppearance->BorderSize = 5;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->Location = System::Drawing::Point(245, 170);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(66, 60);
			this->button9->TabIndex = 17;
			this->button9->Text = L"4";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button16->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->button16->FlatAppearance->BorderSize = 5;
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button16->Location = System::Drawing::Point(389, 302);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(66, 60);
			this->button16->TabIndex = 24;
			this->button16->Text = L",";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button7->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(317, 105);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(66, 60);
			this->button7->TabIndex = 26;
			this->button7->Text = L"2";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button8->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->button8->FlatAppearance->BorderSize = 5;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->Location = System::Drawing::Point(389, 105);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(66, 60);
			this->button8->TabIndex = 27;
			this->button8->Text = L"3";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button10->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->button10->FlatAppearance->BorderSize = 5;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->Location = System::Drawing::Point(317, 170);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(66, 60);
			this->button10->TabIndex = 28;
			this->button10->Text = L"5";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button11->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->button11->FlatAppearance->BorderSize = 5;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button11->Location = System::Drawing::Point(389, 170);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(66, 60);
			this->button11->TabIndex = 29;
			this->button11->Text = L"6";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button12->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->button12->FlatAppearance->BorderSize = 5;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button12->Location = System::Drawing::Point(245, 236);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(66, 60);
			this->button12->TabIndex = 30;
			this->button12->Text = L"7";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button13->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->button13->FlatAppearance->BorderSize = 5;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button13->Location = System::Drawing::Point(317, 236);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(66, 60);
			this->button13->TabIndex = 31;
			this->button13->Text = L"8";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button14->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->button14->FlatAppearance->BorderSize = 5;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button14->Location = System::Drawing::Point(389, 236);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(66, 60);
			this->button14->TabIndex = 32;
			this->button14->Text = L"9";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button15->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->button15->FlatAppearance->BorderSize = 5;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button15->Location = System::Drawing::Point(244, 302);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(139, 60);
			this->button15->TabIndex = 33;
			this->button15->Text = L"0";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button6->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->button6->FlatAppearance->BorderSize = 5;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(245, 105);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(66, 60);
			this->button6->TabIndex = 34;
			this->button6->Text = L"1";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::MediumSlateBlue;
			this->button17->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->button17->FlatAppearance->BorderSize = 5;
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button17->Location = System::Drawing::Point(414, 65);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(113, 27);
			this->button17->TabIndex = 35;
			this->button17->Text = L"Очистить";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::MediumSlateBlue;
			this->button18->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->button18->FlatAppearance->BorderSize = 0;
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button18->Location = System::Drawing::Point(99, 170);
			this->button18->Margin = System::Windows::Forms::Padding(0);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(139, 60);
			this->button18->TabIndex = 36;
			this->button18->Text = L"Backspace";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button19->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button19->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->button19->FlatAppearance->BorderSize = 5;
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button19->ForeColor = System::Drawing::SystemColors::Desktop;
			this->button19->Location = System::Drawing::Point(28, 171);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(66, 60);
			this->button19->TabIndex = 37;
			this->button19->Text = L"x²\r\n";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button20->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->button20->FlatAppearance->BorderSize = 5;
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button20->Location = System::Drawing::Point(28, 236);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(66, 60);
			this->button20->TabIndex = 38;
			this->button20->Text = L"x³";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button21->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->button21->FlatAppearance->BorderSize = 5;
			this->button21->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button21->Location = System::Drawing::Point(172, 236);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(66, 60);
			this->button21->TabIndex = 39;
			this->button21->Text = L"√x ";
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::button21_Click);
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button22->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->button22->FlatAppearance->BorderSize = 5;
			this->button22->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button22->Location = System::Drawing::Point(100, 236);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(66, 60);
			this->button22->TabIndex = 40;
			this->button22->Text = L"->n";
			this->button22->UseVisualStyleBackColor = false;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::button22_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"Натуральный логарифм", L"Десятичный логарифм",
					L"Логарифм по основанию"
			});
			this->comboBox1->Location = System::Drawing::Point(317, 10);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Text = "Логарифм по основанию";
			this->comboBox1->Size = System::Drawing::Size(210, 24);
			this->comboBox1->TabIndex = 41;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(55, 13);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(124, 17);
			this->label4->TabIndex = 42;
			this->label4->Text = L"";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(543, 374);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->RightToLeftLayout = true;
			this->Text = L"Калькулятор";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox5->Text = "+";
}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	stage = 5;
}
private: System::Void textBox5_Click(System::Object^ sender, System::EventArgs^ e) {
	stage = 5;
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox5->Text = "-";
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox5->Text = "/";
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox5->Text = "*";
}
private: System::Void textBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "Аргумент")
	{
		textBox1->Text = "";
		textBox1->ForeColor = System::Drawing::SystemColors::Desktop;
	}
	stage = 1;
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	stage = 1;
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	stage = 3;
}
private: System::Void textBox3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox3->Text == "Осн.")
	{
		textBox3->Text = "";
		textBox3->ForeColor = System::Drawing::SystemColors::Desktop;
	}
	stage = 3;
}
private: System::Void textBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox2->Text == "Аргумент")
	{
		textBox2->Text = "";
		textBox2->ForeColor = System::Drawing::SystemColors::Desktop;
	}
	stage = 2;
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	stage = 2;
}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	stage = 4;
}
private: System::Void textBox4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox4->Text == "Осн.")
	{
		textBox4->Text = "";
		textBox4->ForeColor = System::Drawing::SystemColors::Desktop;
	}
	stage = 4;
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	double a, aa, b, bb;
	bool flag = true;
	try
	{
		if (comboBox1->Text == "Логарифм по основанию")
		{
			if ((textBox2->Text == "Аргумент" || textBox2->Text == "") && (textBox4->Text == "Осн." || textBox4->Text == ""))
			{
				a = System::Convert::ToDouble(textBox1->Text);
				aa = System::Convert::ToDouble(textBox3->Text);
				if (aa == 1)
				{
					MessageBox::Show("Основание первого логарифма не может быть 1!");
				}
				else if (aa <= 0)
				{
					MessageBox::Show("Основание первого логарифма должно быть положительным!");
				}
				else if (a <= 0)
				{
					MessageBox::Show("Аргумент первого логарифма должен быть положительным!");
				}
				else
				{
					textBox6->Text = System::Convert::ToString(log(a) / log(aa));
				}
				return;
			}
			if ((textBox1->Text == "Аргумент" || textBox1->Text == "") && (textBox3->Text == "Осн." || textBox3->Text == ""))
			{
				b = System::Convert::ToDouble(textBox2->Text);
				bb = System::Convert::ToDouble(textBox4->Text);
				if (bb == 1)
				{
					MessageBox::Show("Основание второго логарифма не может быть 1!");
				}
				else if (bb <= 0)
				{
					MessageBox::Show("Основание второго логарифма должно быть положительным!");
				}
				else if (b <= 0)
				{
					MessageBox::Show("Аргумент второго логарифма должен быть положительным!");
				}
				else
				{
						textBox6->Text = System::Convert::ToString(log(b) / log(bb));
				}
				return;
			}
		}
		else if (comboBox1->Text == "Натуральный логарифм")
		{
			aa = 2.7182818284;
			bb = 2.7182818284;
			if (textBox2->Text == "Аргумент" || textBox2->Text == "")
			{
				a = System::Convert::ToDouble(textBox1->Text);
				if (a <= 0)
				{
					MessageBox::Show("Аргумент первого логарифма должен быть положительным!");
				}
				else
				{
					textBox6->Text = System::Convert::ToString(log(a) / log(aa));
				}
				return;
			}
			else if (textBox1->Text == "Аргумент" || textBox1->Text == "")
			{
				b = System::Convert::ToDouble(textBox2->Text);
				if (b <= 0)
				{
					MessageBox::Show("Аргумент первого логарифма должен быть положительным!");
				}
				else
				{
					textBox6->Text = System::Convert::ToString(log(b) / log(bb));
				}
				return;
			}
		}
		else if (comboBox1->Text == "Десятичный логарифм")
		{
			aa = 10;
			bb = 10;

			if (textBox2->Text == "Аргумент" || textBox2->Text == "")
			{
				a = System::Convert::ToDouble(textBox1->Text);
				if (a <= 0)
				{
					MessageBox::Show("Аргумент первого логарифма должен быть положительным!");
				}
				else
				{
					textBox6->Text = System::Convert::ToString(log(a) / log(aa));
				}
				return;
			}
			else if (textBox1->Text == "Аргумент" || textBox1->Text == "")
			{
				b = System::Convert::ToDouble(textBox1->Text);
				if (b <= 0)
				{
					MessageBox::Show("Аргумент первого логарифма должен быть положительным!");
				}
				else
				{
					textBox6->Text = System::Convert::ToString(log(b) / log(bb));
				}
				return;
			}
		}

		a = System::Convert::ToDouble(textBox1->Text);
		b = System::Convert::ToDouble(textBox2->Text);
		if (comboBox1->Text == "Логарифм по основанию")
		{
			aa = System::Convert::ToDouble(textBox3->Text);
			bb = System::Convert::ToDouble(textBox4->Text);
		}

		if (aa == 1 || bb == 1)
		{
			MessageBox::Show("Основание не может быть равно 1!");
			flag = false;
		}
		else if (aa <= 0 || bb <= 0)
		{
			MessageBox::Show("Основание должно быть положительным!");
			flag = false;
		}
		else if (a <= 0 || b <= 0)
		{
			MessageBox::Show("Значение аргкмента должно быть положительным!");
			flag = false;
		}
		else if (textBox5->Text == "")
		{
			MessageBox::Show("Выберите действие!");
			flag = false;
		}

		if (flag)
		{
			switch (System::Convert::ToChar(textBox5->Text))
			{
			case '+':
			{
				String^ s;
				double f1 = log(a) / log(aa);
				double f2 = log(b) / log(bb);
				double res = f1 + f2;
				s = System::Convert::ToString(res);
				textBox6->Text = s;
				break;
			}
			case '-':
			{
				String^ s;
				double f1 = log(a) / log(aa);
				double f2 = log(b) / log(bb);
				double res = f1 - f2;
				s = System::Convert::ToString(res);
				textBox6->Text = s;
				break;
			}
			case '*':
			{
				String^ s;
				double f1 = log(a) / log(aa);
				double f2 = log(b) / log(bb);
				double res = f1 * f2;
				s = System::Convert::ToString(res);
				textBox6->Text = s;
				break;
			}
			case '/':
			{
				String^ s;
				double f1 = log(a) / log(aa);
				double f2 = log(b) / log(bb);
				double res = f1 / f2;
				s = System::Convert::ToString(res);
				textBox6->Text = s;
				break;
			}
			}
		}
	}
	catch (...)
	{
		MessageBox::Show("Ошибка ввода!");
	}
}
private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	stage =  6;
}
private: System::Void textBox6_Click(System::Object^ sender, System::EventArgs^ e) {
	stage = 6;
}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox3->ForeColor = System::Drawing::SystemColors::ActiveCaption;
	this->textBox4->ForeColor = System::Drawing::SystemColors::ActiveCaption;
	this->textBox1->ForeColor = System::Drawing::SystemColors::ActiveCaption;
	this->textBox2->ForeColor = System::Drawing::SystemColors::ActiveCaption;
	this->comboBox1->Text = "Логарифм по основанию";
	textBox1->Text = "Аргумент";
	textBox2->Text = "Аргумент";
	textBox3->Text = "Осн.";
	textBox4->Text = "Осн.";
	textBox5->Text = "";
	textBox6->Text = "";
	stage = 6;
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) { // 1 button click
	switch (stage)
	{
		case 1:
			textBox1->Text += "1";
			break;
		case 2:
			textBox2->Text += "1";
			break;
		case 3:
			textBox3->Text += "1";
			break;
		case 4:
			textBox4->Text += "1";
			break;
		case 6:
			textBox6->Text += "1";
			break;
	}
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) { // 2 button
	switch (stage)
	{
	case 1:
		textBox1->Text += "2";
		break;
	case 2:
		textBox2->Text += "2";
		break;
	case 3:
		textBox3->Text += "2";
		break;
	case 4:
		textBox4->Text += "2";
		break;
	case 6:
		textBox6->Text += "2";
		break;
	}
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) { // 3 button
	switch (stage)
	{
	case 1:
		textBox1->Text += "3";
		break;
	case 2:
		textBox2->Text += "3";
		break;
	case 3:
		textBox3->Text += "3";
		break;
	case 4:
		textBox4->Text += "3";
		break;
	case 6:
		textBox6->Text += "3";
		break;
	}
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) { // 4 button
	switch (stage)
	{
	case 1:
		textBox1->Text += "4";
		break;
	case 2:
		textBox2->Text += "4";
		break;
	case 3:
		textBox3->Text += "4";
		break;
	case 4:
		textBox4->Text += "4";
		break;
	case 6:
		textBox6->Text += "4";
		break;
	}
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) { // 5 button
	switch (stage)
	{
	case 1:
		textBox1->Text += "5";
		break;
	case 2:
		textBox2->Text += "5";
		break;
	case 3:
		textBox3->Text += "5";
		break;
	case 4:
		textBox4->Text += "5";
		break;
	case 6:
		textBox6->Text += "5";
		break;
	}
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) { // 6 button
	switch (stage)
	{
	case 1:
		textBox1->Text += "6";
		break;
	case 2:
		textBox2->Text += "6";
		break;
	case 3:
		textBox3->Text += "6";
		break;
	case 4:
		textBox4->Text += "6";
		break;
	case 6:
		textBox6->Text += "6";
		break;
	}
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) { // 7 button
	switch (stage)
	{
	case 1:
		textBox1->Text += "7";
		break;
	case 2:
		textBox2->Text += "7";
		break;
	case 3:
		textBox3->Text += "7";
		break;
	case 4:
		textBox4->Text += "7";
		break;
	case 6:
		textBox6->Text += "7";
		break;
	}
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) { // 8 button
	switch (stage)
	{
	case 1:
		textBox1->Text += "8";
		break;
	case 2:
		textBox2->Text += "8";
		break;
	case 3:
		textBox3->Text += "8";
		break;
	case 4:
		textBox4->Text += "8";
		break;
	case 6:
		textBox6->Text += "8";
		break;
	}
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) { // 9 button
	switch (stage)
	{
	case 1:
		textBox1->Text += "9";
		break;
	case 2:
		textBox2->Text += "9";
		break;
	case 3:
		textBox3->Text += "9";
		break;
	case 4:
		textBox4->Text += "9";
		break;
	case 6:
		textBox6->Text += "9";
		break;
	}
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) { // , button
	msclr::interop::marshal_context context;
	switch (stage)
	{
	case 1:
		s = context.marshal_as<std::string>(textBox1->Text);
		if (s.find(',') == -1)
		{
			textBox1->Text += ",";
		}
		break;
	case 2:
		s = context.marshal_as<std::string>(textBox2->Text);
		if (s.find(',') == -1)
		{
			textBox2->Text += ",";
		}
		break;
	case 3:
		s = context.marshal_as<std::string>(textBox3->Text);
		if (s.find(',') == -1)
		{
			textBox3->Text += ",";
		}
		break;
	case 4:
		s = context.marshal_as<std::string>(textBox4->Text);
		if (s.find(',') == -1)
		{
			textBox4->Text += ",";
		}
		break;
	case 6:
		s = context.marshal_as<std::string>(textBox6->Text);
		if (s.find(',') == -1)
		{
			textBox6->Text += ",";
		}
		break;
	}
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) { // 0 button
	switch (stage)
	{
	case 1:
		textBox1->Text += "0";
		break;
	case 2:
		textBox2->Text += "0";
		break;
	case 3:
		textBox3->Text += "0";
		break;
	case 4:
		textBox4->Text += "0";
		break;
	case 6:
		textBox6->Text += "0";
		break;
	}
}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) { // BACKSPACE CLICK
	switch (stage)
	{
	case 1:
		if (textBox1->Text->Length > 0)
		{
			int size = textBox1->Text->Length;
			textBox1->Text = textBox1->Text->Remove(size - 1);
		}
		break;
	case 2:
		if (textBox2->Text->Length > 0)
		{
			int size = textBox2->Text->Length;
			textBox2->Text = textBox2->Text->Remove(size - 1);
		}
		break;
	case 3:
		if (textBox3->Text->Length > 0)
		{
			int size = textBox3->Text->Length;
			textBox3->Text = textBox3->Text->Remove(size - 1);
		}
		break;
	case 4:
		if (textBox4->Text->Length > 0)
		{
			int size = textBox4->Text->Length;
			textBox4->Text = textBox4->Text->Remove(size - 1);
		}
		break;
	case 5:
		if (textBox5->Text->Length > 0)
		{
			int size = textBox5->Text->Length;
			textBox5->Text = textBox5->Text->Remove(size - 1);
		}
		break;
	case 6:
		if (textBox6->Text->Length > 0)
		{
			int size = textBox6->Text->Length;
			textBox6->Text = textBox6->Text->Remove(size - 1);
		}
		break;
	}
	
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
	try 
	{
		double a = System::Convert::ToDouble(textBox6->Text);
		textBox6->Text = System::Convert::ToString(a * a);
	}
	catch (...)
	{
		MessageBox::Show("Результат содержит недопустимые символы!");
	}
}
private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		double a = System::Convert::ToDouble(textBox6->Text);
		textBox6->Text = System::Convert::ToString(a * a * a);
	}
	catch (...)
	{
		MessageBox::Show("Результат содержит недопустимые символы!");
	}
}
private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		double a = System::Convert::ToDouble(textBox6->Text);
		textBox6->Text = System::Convert::ToString(sqrt(a));
	}
	catch (...)
	{
		MessageBox::Show("Результат содержит недопустимые символы!");
	}
}
private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
	double a, aa, bb;
	try
	{
		a = System::Convert::ToDouble(textBox1->Text);
		aa = System::Convert::ToDouble(textBox3->Text);
		bb = System::Convert::ToDouble(textBox4->Text);
		if (aa == 1)
		{
			MessageBox::Show("Основание не может быть 1!");
		}
		else if (aa <= 0)
		{
			MessageBox::Show("Основание первого логарифма должно быть положительным!");
		}
		else if (a <= 0)
		{
			MessageBox::Show("Аргумент первого логарифмадолжен быть положительным!");
		}
		else if (bb == 1)
		{
			MessageBox::Show("Основание второго логарифма не должно быть равным 1");
		}
		else if (bb <= 0)
		{
			MessageBox::Show("Основание второго логарифма должно быть положительным!");
		}
		textBox6->Text = System::Convert::ToString(log(a) / log(bb));
	}
	catch (...)
	{
		MessageBox::Show("Ошибка ввода!");
	}
}

private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (System::Convert::ToString(comboBox1->Text) == "Натуральный логарифм")
	{
		textBox3->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
		textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
		textBox3->Enabled = false;
		textBox3->Text = "";

		textBox4->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
		textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
		textBox4->Enabled = false;
		textBox4->Text = "";

		textBox1->Text = L"Аргумент";
		textBox1->BackColor = System::Drawing::SystemColors::ControlLight;
		textBox1->ForeColor = System::Drawing::SystemColors::ActiveCaption;

		textBox2->Text = L"Аргумент";
		textBox2->BackColor = System::Drawing::SystemColors::ControlLight;
		textBox2->ForeColor = System::Drawing::SystemColors::ActiveCaption;

		label3->Text = L"Ln";
		label2->Text = L"Ln";
		label4->Text = "e = 2,7182818284";
	}
	else if(System::Convert::ToString(comboBox1->Text) == "Логарифм по основанию")
	{ 
		textBox3->BackColor = System::Drawing::SystemColors::ControlLight;
		textBox3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
		textBox3->Enabled = true;
		textBox3->Text = "Осн.";

		textBox4->BackColor = System::Drawing::SystemColors::ControlLight;
		textBox4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
		textBox4->Enabled = true;
		textBox4->Text = "Осн.";

		textBox1->Text = L"Аргумент";
		textBox1->BackColor = System::Drawing::SystemColors::ControlLight;
		textBox1->ForeColor = System::Drawing::SystemColors::ActiveCaption;

		textBox2->Text = L"Аргумент";
		textBox2->BackColor = System::Drawing::SystemColors::ControlLight;
		textBox2->ForeColor = System::Drawing::SystemColors::ActiveCaption;

		label3->Text = L"Log";
		label2->Text = L"Log";
		label4->Text = "";
	}
	else if (System::Convert::ToString(comboBox1->Text) == "Десятичный логарифм")
	{
		textBox3->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
		textBox3->ForeColor = System::Drawing::SystemColors::GradientActiveCaption;
		textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
		textBox3->Enabled = false;
		textBox3->Text = "";

		textBox4->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
		textBox4->ForeColor = System::Drawing::SystemColors::GradientActiveCaption;
		textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
		textBox4->Enabled = false;
		textBox4->Text = "";

		textBox1->Text = L"Аргумент";
		textBox1->BackColor = System::Drawing::SystemColors::ControlLight;
		textBox1->ForeColor = System::Drawing::SystemColors::ActiveCaption;

		textBox2->Text = L"Аргумент";
		textBox2->BackColor = System::Drawing::SystemColors::ControlLight;
		textBox2->ForeColor = System::Drawing::SystemColors::ActiveCaption;

		label3->Text = L"Log₁₀";
		label2->Text = L"Log₁₀";
		label4->Text = "";
	}
	stage = 6;
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}