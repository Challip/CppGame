#pragma once
#include <msclr\marshal_cppstd.h>
#include "Header.h"
#include "MyForm.h"

namespace Project4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{//set fist question to display when program start
		int gnum=1 ;
		

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label3;
	public: System::Windows::Forms::Label^ label4;
	private:
	private: System::Windows::Forms::Label^ label2;
	public:
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button5;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel2;




	private: System::Windows::Forms::TextBox^ textBox6;


	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::Button^ button11;


	private: System::Windows::Forms::Label^ label10;



	public:

	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			askequestion(gnum);
			String^ gettext = comboBox1->Text->ToString();
			String^ dd;


		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->groupBox1->SuspendLayout();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label1->Location = System::Drawing::Point(100, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(69, 27);
			this->label1->TabIndex = 0;
			this->label1->Text = L"label1";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(445, 244);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 44);
			this->button1->TabIndex = 2;
			this->button1->Tag = L"A";
			this->button1->Text = L"Check";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(276, 322);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(46, 17);
			this->label3->TabIndex = 8;
			this->label3->Tag = L"A";
			this->label3->Text = L"label3";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::Color::Red;
			this->label4->Location = System::Drawing::Point(442, 322);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(46, 17);
			this->label4->TabIndex = 9;
			this->label4->Tag = L"A";
			this->label4->Text = L"label4";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(640, 322);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(46, 17);
			this->label2->TabIndex = 11;
			this->label2->Tag = L"A";
			this->label2->Text = L"label2";
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(279, 144);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(110, 21);
			this->radioButton1->TabIndex = 13;
			this->radioButton1->TabStop = true;
			this->radioButton1->Tag = L"A";
			this->radioButton1->Text = L"radioButton1";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged_1);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(279, 202);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(110, 21);
			this->radioButton2->TabIndex = 14;
			this->radioButton2->TabStop = true;
			this->radioButton2->Tag = L"B";
			this->radioButton2->Text = L"radioButton2";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged_1);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(594, 144);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(110, 21);
			this->radioButton3->TabIndex = 15;
			this->radioButton3->TabStop = true;
			this->radioButton3->Tag = L"C";
			this->radioButton3->Text = L"radioButton3";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton3_CheckedChanged);
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(594, 202);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(110, 21);
			this->radioButton4->TabIndex = 16;
			this->radioButton4->TabStop = true;
			this->radioButton4->Tag = L"D";
			this->radioButton4->Text = L"radioButton4";
			this->radioButton4->UseVisualStyleBackColor = true;
			this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton4_CheckedChanged_1);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(445, 381);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 17;
			this->button2->Tag = L"A";
			this->button2->Text = L"Next";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(408, 129);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(159, 94);
			this->button3->TabIndex = 18;
			this->button3->Text = L"Continue";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->panel4);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->radioButton4);
			this->groupBox1->Controls->Add(this->radioButton3);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1068, 724);
			this->groupBox1->TabIndex = 19;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Multiple choice";
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->button10);
			this->panel4->Controls->Add(this->button9);
			this->panel4->Controls->Add(this->label15);
			this->panel4->Controls->Add(this->pictureBox5);
			this->panel4->Location = System::Drawing::Point(1, 4);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(1047, 674);
			this->panel4->TabIndex = 2;
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(261, 510);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(127, 56);
			this->button10->TabIndex = 3;
			this->button10->Text = L"Exit";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(691, 510);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(127, 56);
			this->button9->TabIndex = 2;
			this->button9->Text = L"Start";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(197, 42);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(732, 51);
			this->label15->TabIndex = 1;
			this->label15->Text = L"Welcome to Geography Quiz Game";
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(361, 140);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(399, 278);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 0;
			this->pictureBox5->TabStop = false;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->comboBox1);
			this->panel1->Controls->Add(this->button7);
			this->panel1->Location = System::Drawing::Point(12, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1051, 730);
			this->panel1->TabIndex = 19;
			this->panel1->Visible = false;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Controls->Add(this->label12);
			this->panel2->Controls->Add(this->pictureBox4);
			this->panel2->Controls->Add(this->pictureBox3);
			this->panel2->Controls->Add(this->pictureBox2);
			this->panel2->Controls->Add(this->button8);
			this->panel2->Controls->Add(this->button6);
			this->panel2->Controls->Add(this->label11);
			this->panel2->Controls->Add(this->label10);
			this->panel2->Controls->Add(this->label9);
			this->panel2->Controls->Add(this->label8);
			this->panel2->Controls->Add(this->textBox6);
			this->panel2->Controls->Add(this->textBox3);
			this->panel2->Controls->Add(this->textBox2);
			this->panel2->Controls->Add(this->textBox1);
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1051, 681);
			this->panel2->TabIndex = 7;
			this->panel2->Visible = false;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel2_Paint);
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->button11);
			this->panel3->Controls->Add(this->label14);
			this->panel3->Controls->Add(this->label13);
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1068, 681);
			this->panel3->TabIndex = 27;
			this->panel3->Visible = false;
			this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel3_Paint);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(473, 519);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(94, 36);
			this->button11->TabIndex = 2;
			this->button11->Text = L"Exit";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(451, 425);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(116, 32);
			this->label14->TabIndex = 1;
			this->label14->Text = L"label14";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(409, 262);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(217, 44);
			this->label13->TabIndex = 0;
			this->label13->Text = L"Game end ";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(689, 607);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(54, 17);
			this->label12->TabIndex = 25;
			this->label12->Text = L"label12";
			this->label12->Visible = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(296, 112);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(465, 272);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 26;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Visible = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(296, 112);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(465, 272);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 25;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Visible = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(296, 112);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(465, 272);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 24;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Visible = false;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(492, 607);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(93, 42);
			this->button8->TabIndex = 23;
			this->button8->Text = L"Next";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Visible = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(492, 532);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(88, 41);
			this->button6->TabIndex = 22;
			this->button6->Text = L"check";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(689, 556);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(54, 17);
			this->label11->TabIndex = 21;
			this->label11->Text = L"label11";
			this->label11->Visible = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(870, 553);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(54, 17);
			this->label10->TabIndex = 20;
			this->label10->Text = L"label10";
			this->label10->Visible = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(454, 402);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(144, 17);
			this->label9->TabIndex = 19;
			this->label9->Text = L"Where is this place \? ";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(408, 29);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(218, 17);
			this->label8->TabIndex = 18;
			this->label8->Text = L"Drag to correct answer to the box";
			// 
			// textBox6
			// 
			this->textBox6->AllowDrop = true;
			this->textBox6->Location = System::Drawing::Point(421, 428);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(220, 22);
			this->textBox6->TabIndex = 13;
			this->textBox6->Tag = L"6";
			this->textBox6->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &MyForm::textBox6_DragDrop);
			this->textBox6->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &MyForm::textBox6_DragEnter);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(102, 491);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(220, 22);
			this->textBox3->TabIndex = 10;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(421, 491);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(220, 22);
			this->textBox2->TabIndex = 9;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(762, 491);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(220, 22);
			this->textBox1->TabIndex = 8;
			this->textBox1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::textBox1_MouseDown);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(296, 112);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(456, 263);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(505, 361);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 6;
			this->button5->Text = L"Next";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Visible = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(679, 306);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(46, 17);
			this->label7->TabIndex = 5;
			this->label7->Text = L"label7";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(505, 255);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Check";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->ForeColor = System::Drawing::Color::Red;
			this->label6->Location = System::Drawing::Point(502, 306);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(46, 17);
			this->label6->TabIndex = 3;
			this->label6->Text = L"label6";
			this->label6->Visible = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(291, 61);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(64, 25);
			this->label5->TabIndex = 2;
			this->label5->Text = L"label5";
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"True", L"False" });
			this->comboBox1->Location = System::Drawing::Point(495, 144);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->comboBox1->Size = System::Drawing::Size(131, 28);
			this->comboBox1->TabIndex = 1;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(457, 244);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(216, 79);
			this->button7->TabIndex = 8;
			this->button7->Text = L"Continue";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Visible = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// MyForm
			// 
			this->AccessibleName = L"";
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1092, 748);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		label2->Visible = false;
		label4->Visible = false;
		label3->Visible = false;
		button1->Visible = true;
		button2->Visible = false;
		button3->Visible = false;

	}
		//set answer = A when radioButton 1 is clicked 
	private: System::Void radioButton1_CheckedChanged_1(System::Object^ sender, System::EventArgs^ e) {

		answer = "A";
	}
	private: System::Void radioButton2_CheckedChanged_1(System::Object^ sender, System::EventArgs^ e) {

		answer = "B";

	}
	private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

		answer = "C";

	}
	private: System::Void radioButton4_CheckedChanged_1(System::Object^ sender, System::EventArgs^ e) {

		answer = "D";
	}

	public: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//click button 1 to check answer and add score 
		check(gnum);
		label2->Visible = true;
		label3->Visible = true;
		label4->Visible = true;
		button1->Visible = false;
		label2->Text = "Your score: " + score.ToString();//convert from int to system string 
		button2->Visible = true;
		button3->Visible = false;
	}


	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		gnum++;//change the question everytime the next button is clecked 
		askequestion(gnum);
		label2->Visible = false;
		label4->Visible = false;
		label3->Visible = false;
		button1->Visible = true;
		button2->Visible = false;

		//Turn to next page after finish last Muliple choice question
		if (gnum > 6) {
			button2->Visible = false;
			button1->Visible = false;
			label1->Text = "end of mutiple choice section";
			label3->Visible = false;
			label4->Visible = false;
			radioButton1->Visible = false;
			radioButton2->Visible = false;
			radioButton3->Visible = false;
			radioButton4->Visible = false;
			button3->Visible = true;
			;
		}

	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		groupBox1->Visible=false;
		panel1->Visible = true;

	}

//-------------------------------------------T/F question ---------------------------------------------------
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		
		askequestion(gnum);
		//made selected item in combobox = answer
		String^ gettext = comboBox1->Text->ToString();
		//convert System::String^ to std::string
		std::string answerT = msclr::interop::marshal_as< std::string >(gettext);
		answer = answerT;
		label7->Text = "Your score: " + score.ToString();

		label7->Visible = true;

	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		check(gnum);
		label7->Text = "Your score: " + score.ToString();
		label6->Visible = true;
		button5->Visible = true;
		button4->Visible = false;

	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		gnum++;
		askequestion(gnum);
		label6->Visible = false;
		button5->Visible = false;
		button4->Visible = true;

		if (gnum > 12) {
			button4->Visible = false;
			label7->Visible = false;
			label5->Text = "End of true false section";
			comboBox1->Visible = false;
			label6->Visible = false;
			button7->Visible = true;
			;
		}
		
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		//panel1->Visible = false;
		panel2->Visible = true;
		button7->Visible = false;
	}

///////////////////////////drag and drop section///////////////////////////////////////////////////////////

	private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

		askequestion(gnum);

		this->textBox2->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::textBox1_MouseDown);
		this->textBox3->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::textBox1_MouseDown);

	}
	private: System::Void textBox1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		TextBox^ tb = (TextBox^)sender;
		tb->SelectAll();
		//allow text box to move around the form and copy text in textbox1 into the drop downbox
		tb->DoDragDrop(tb->Text, DragDropEffects::Copy);
	}

	private: System::Void textBox6_DragEnter(System::Object^ sender, System::Windows::Forms::DragEventArgs^ e) {
		//check dragged value 
		if (e->Data->GetDataPresent(DataFormats::Text))
		{
			e->Effect = DragDropEffects::Copy;
		}
		else
		{
			e->Effect = DragDropEffects::None;
		}
	}
	private: System::Void textBox6_DragDrop(System::Object^ sender, System::Windows::Forms::DragEventArgs^ e) {
		TextBox^ tb = (TextBox^)sender;
		//copy text of dragged to textbox
		tb->Text = (String^)e->Data->GetData(DataFormats::Text);
		//convert System::String^ to std::string
		String^ dd = tb->Text->ToString();
		std::string answerS = msclr::interop::marshal_as< std::string >(dd);
		answer = answerS;


	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		check(gnum);
		label10->Text = "Your score: " + score.ToString();
		label10->Visible = true;
		label11->Visible = true;
		button8->Visible = true;
		button6->Visible = false;
		label12->Visible = true;


	}

	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		gnum++;
		askequestion(gnum);
		label11->Visible = false;
		button6->Visible = true;
		button8->Visible = false;
		label12->Visible = false;

		if (gnum >= 17) {
			label11->Visible = false;
			button6->Visible = false;
			button8->Visible = false;
			label12->Visible = false;
			label10->Visible = false;
			pictureBox4->Visible = false;
			textBox1->Visible = false;
			textBox2->Visible = false;
			textBox3->Visible = false;
			textBox6->Visible = false;

			
			panel3->Visible = true;
		}

	}

		   //to display the question 
	private: Void askequestion(int gnum) {
		switch (gnum)
		{
		case 1:
			label1->Text = q1.Get_question();
			radioButton1->Text = q1.get_ChoiceA();
			radioButton2->Text = q1.get_ChoiceB();
			radioButton3->Text = q1.get_ChoiceC();
			radioButton4->Text = q1.get_ChoiceD();
			label3->Text = "Correct answer: " + q1.Get_correct();
			break;

		case 2:

			label1->Text = q2.Get_question();
			radioButton1->Text = q2.get_ChoiceA();
			radioButton2->Text = q2.get_ChoiceB();
			radioButton3->Text = q2.get_ChoiceC();
			radioButton4->Text = q2.get_ChoiceD();
			label3->Text = "Correct answer: " + q2.Get_correct();
			break;
		case 3:
			label1->Text = q3.Get_question();
			radioButton1->Text = q3.get_ChoiceA();
			radioButton2->Text = q3.get_ChoiceB();
			radioButton3->Text = q3.get_ChoiceC();
			radioButton4->Text = q3.get_ChoiceD();
			label3->Text = "Correct answer: " + q3.Get_correct();
			break;
		case 4:
			label1->Text = q4.Get_question();
			radioButton1->Text = q4.get_ChoiceA();
			radioButton2->Text = q4.get_ChoiceB();
			radioButton3->Text = q4.get_ChoiceC();
			radioButton4->Text = q4.get_ChoiceD();
			label3->Text = "Correct answer: " + q4.Get_correct();
			break;
		case 5:
			label1->Text = q5.Get_question();
			radioButton1->Text = q5.get_ChoiceA();
			radioButton2->Text = q5.get_ChoiceB();
			radioButton3->Text = q5.get_ChoiceC();
			radioButton4->Text = q5.get_ChoiceD();
			label3->Text = "Correct answer: " + q5.Get_correct();
			break;
		case 6:
			label1->Text = q6.Get_question();
			radioButton1->Text = q6.get_ChoiceA();
			radioButton2->Text = q6.get_ChoiceB();
			radioButton3->Text = q6.get_ChoiceC();
			radioButton4->Text = q6.get_ChoiceD();
			label3->Text = "Correct answer: " + q6.Get_correct();

			break;
		case 7:
			label5->Text = t1.Get_question();
			break;

		case 8:
			label5->Text = t2.Get_question();
			break;
		case 9:
			label5->Text = t3.Get_question();
			break;
		case 10:
			label5->Text = t4.Get_question();
			break;
		case 11:
			label5->Text = t5.Get_question();
			break;
		case 12:
			label5->Text = t6.Get_question();
			break;
		case 13:
			pictureBox1->Visible = true;
			textBox1->Text = d1.get_ChoiceA();
			textBox2->Text = d1.get_ChoiceB();
			textBox3->Text = d1.get_ChoiceC();
			label12->Text = "Correct answer: " + d1.Get_correct();
			break;
		case 14:
			pictureBox1->Visible = false;
			pictureBox2->Visible = true;
			textBox1->Text = d2.get_ChoiceA();
			textBox2->Text = d2.get_ChoiceB();
			textBox3->Text = d2.get_ChoiceC();
			label12->Text = "Correct answer: " + d2.Get_correct();
			break;
		case 15:
			pictureBox2->Visible = false;
			pictureBox3->Visible = true;
			textBox1->Text = d3.get_ChoiceA();
			textBox2->Text = d3.get_ChoiceB();
			textBox3->Text = d3.get_ChoiceC();
			label12->Text = "Correct answer: " + d3.Get_correct();
			break;
		case 16:
			pictureBox3->Visible = false;
			pictureBox4->Visible = true;
			textBox1->Text = d4.get_ChoiceA();
			textBox2->Text = d4.get_ChoiceB();
			textBox3->Text = d4.get_ChoiceC();
			label12->Text = "Correct answer: " + d4.Get_correct();
			break;


		}
	}

		   // for check answer   
	private: Void check(int gnum) {
		switch (gnum) {
		case 1:
			q1.scorecal(label4);
			break;
		case 2:
			q2.scorecal(label4);
			break;
		case 3:
			q3.scorecal(label4);
			break;
		case 4:
			q4.scorecal(label4);
			break;
		case 5:
			q5.scorecal(label4);
			break;
		case 6:
			q6.scorecal(label4);
			break;
		case 7:
			t1.scorecal(label6);
			break;
		case 8:
			t2.scorecal(label6);
			break;
		case 9:
			t3.scorecal(label6);
			break;
		case 10:
			t4.scorecal(label6);
			break;
		case 11:
			t5.scorecal(label6);
			break;
		case 12:
			t6.scorecal(label6);
			break;
		case 13:
			d1.scorecal(label11);
			break;
		case 14:
			d2.scorecal(label11);
			break;
		case 15:
			d3.scorecal(label11);
			break;
		case 16:
			d4.scorecal(label11);
			break;


		}

	}

//------------------------------------end window--------------------------------------------------------------
private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	label14->Text = "Your score: " + score.ToString() + "/200";
}
//-----------------------------------------opening window--------------------------------------------------------
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	panel4->Visible = false;
	groupBox1->Visible=true;
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();//close the window
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}

};
}

	

