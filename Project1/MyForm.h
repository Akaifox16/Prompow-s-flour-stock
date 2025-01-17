#pragma once
#include "chart.h"
#include "bread.h"
#include "Summary.h"
#include "addBread.h"
#include "Added.h"
#include <algorithm>
#include "makesure.h"
#include "fail.h"
#include"Help1.h"


namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Reflection;
	using namespace System::IO;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
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







	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ button2;
	private: bool dragging;
	private: Point offset;
		 





	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button6;


	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Button^ Sort;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::ListBox^ listBox3;
	private: System::Windows::Forms::ListBox^ listBox4;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label7;

	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::ListBox^ listBox6;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::ListBox^ listBox5;











	private: System::ComponentModel::IContainer^ components;
	protected:


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Sort = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->listBox4 = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->listBox5 = (gcnew System::Windows::Forms::ListBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->listBox6 = (gcnew System::Windows::Forms::ListBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Controls->Add(this->panel2);
			this->flowLayoutPanel1->Controls->Add(this->button2);
			this->flowLayoutPanel1->Controls->Add(this->button1);
			this->flowLayoutPanel1->Controls->Add(this->Sort);
			this->flowLayoutPanel1->Controls->Add(this->button3);
			this->flowLayoutPanel1->Controls->Add(this->button4);
			this->flowLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->flowLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(166, 555);
			this->flowLayoutPanel1->TabIndex = 4;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(249)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 22.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->panel2->ForeColor = System::Drawing::Color::Transparent;
			this->panel2->Location = System::Drawing::Point(3, 3);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(163, 104);
			this->panel2->TabIndex = 0;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 36, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
				static_cast<System::Int32>(static_cast<System::Byte>(63)));
			this->label5->Location = System::Drawing::Point(49, 3);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(117, 73);
			this->label5->TabIndex = 0;
			this->label5->Text = L"SM";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->label6->Location = System::Drawing::Point(25, 70);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(122, 21);
			this->label6->TabIndex = 1;
			this->label6->Text = L"management";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// button2
			// 
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->Location = System::Drawing::Point(3, 113);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(163, 90);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Dashboard";
			this->button2->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(3, 209);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(163, 90);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Retail";
			this->button1->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// Sort
			// 
			this->Sort->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->Sort->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Sort->FlatAppearance->BorderSize = 0;
			this->Sort->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Sort->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Sort->ForeColor = System::Drawing::Color::White;
			this->Sort->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Sort.Image")));
			this->Sort->Location = System::Drawing::Point(3, 305);
			this->Sort->Name = L"Sort";
			this->Sort->Size = System::Drawing::Size(163, 90);
			this->Sort->TabIndex = 10;
			this->Sort->Text = L"Sort";
			this->Sort->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->Sort->UseVisualStyleBackColor = false;
			this->Sort->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button3
			// 
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->Location = System::Drawing::Point(3, 401);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(163, 90);
			this->button3->TabIndex = 9;
			this->button3->Text = L"Summary";
			this->button3->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(195)),
				static_cast<System::Int32>(static_cast<System::Byte>(163)));
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->button4->Location = System::Drawing::Point(3, 497);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(160, 55);
			this->button4->TabIndex = 18;
			this->button4->Text = L"Add Bakery  :D";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click_1);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::Red;
			this->button5->Location = System::Drawing::Point(1059, -8);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(50, 45);
			this->button5->TabIndex = 9;
			this->button5->Text = L"X";
			this->button5->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->listBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->listBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox1->ForeColor = System::Drawing::Color::White;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 23;
			this->listBox1->Location = System::Drawing::Point(213, 101);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(270, 368);
			this->listBox1->TabIndex = 10;
			this->listBox1->Visible = false;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox1_SelectedIndexChanged);
			// 
			// listBox2
			// 
			this->listBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->listBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->listBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->listBox2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox2->ForeColor = System::Drawing::Color::White;
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 23;
			this->listBox2->Location = System::Drawing::Point(489, 101);
			this->listBox2->Name = L"listBox2";
			this->listBox2->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->listBox2->Size = System::Drawing::Size(150, 368);
			this->listBox2->TabIndex = 11;
			this->listBox2->Visible = false;
			// 
			// listBox3
			// 
			this->listBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->listBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->listBox3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->listBox3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox3->ForeColor = System::Drawing::Color::White;
			this->listBox3->FormattingEnabled = true;
			this->listBox3->ItemHeight = 23;
			this->listBox3->Location = System::Drawing::Point(644, 101);
			this->listBox3->Name = L"listBox3";
			this->listBox3->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->listBox3->Size = System::Drawing::Size(150, 368);
			this->listBox3->TabIndex = 12;
			this->listBox3->Visible = false;
			// 
			// listBox4
			// 
			this->listBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->listBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->listBox4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->listBox4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox4->ForeColor = System::Drawing::Color::White;
			this->listBox4->FormattingEnabled = true;
			this->listBox4->ItemHeight = 23;
			this->listBox4->Location = System::Drawing::Point(800, 101);
			this->listBox4->Name = L"listBox4";
			this->listBox4->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->listBox4->Size = System::Drawing::Size(150, 368);
			this->listBox4->TabIndex = 13;
			this->listBox4->Visible = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(249)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->label1->Location = System::Drawing::Point(398, 51);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(94, 34);
			this->label1->TabIndex = 14;
			this->label1->Text = L"MENU";
			this->label1->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(249)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->label2->Location = System::Drawing::Point(553, 51);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(86, 34);
			this->label2->TabIndex = 15;
			this->label2->Text = L"SOLD";
			this->label2->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(249)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->label3->Location = System::Drawing::Point(660, 51);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(134, 34);
			this->label3->TabIndex = 16;
			this->label3->Text = L"INSTOCK";
			this->label3->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(249)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->label4->Location = System::Drawing::Point(858, 51);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(92, 34);
			this->label4->TabIndex = 17;
			this->label4->Text = L"PRICE";
			this->label4->Visible = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label7->ForeColor = System::Drawing::Color::Gold;
			this->label7->Location = System::Drawing::Point(746, 503);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(148, 34);
			this->label7->TabIndex = 18;
			this->label7->Text = L"Best seller";
			this->label7->Visible = false;
			this->label7->Click += gcnew System::EventHandler(this, &MyForm::label7_Click);
			// 
			// listBox5
			// 
			this->listBox5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->listBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->listBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->listBox5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->listBox5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox5->ForeColor = System::Drawing::Color::White;
			this->listBox5->FormattingEnabled = true;
			this->listBox5->ItemHeight = 23;
			this->listBox5->Location = System::Drawing::Point(907, 514);
			this->listBox5->Name = L"listBox5";
			this->listBox5->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->listBox5->Size = System::Drawing::Size(187, 23);
			this->listBox5->TabIndex = 19;
			this->listBox5->Visible = false;
			this->listBox5->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox5_SelectedIndexChanged);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::Red;
			this->button7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.Image")));
			this->button7->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button7->Location = System::Drawing::Point(1003, -8);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(50, 45);
			this->button7->TabIndex = 20;
			this->button7->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click_1);
			// 
			// listBox6
			// 
			this->listBox6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->listBox6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->listBox6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->listBox6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox6->ForeColor = System::Drawing::Color::White;
			this->listBox6->FormattingEnabled = true;
			this->listBox6->ItemHeight = 23;
			this->listBox6->Location = System::Drawing::Point(956, 101);
			this->listBox6->Name = L"listBox6";
			this->listBox6->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->listBox6->Size = System::Drawing::Size(110, 368);
			this->listBox6->TabIndex = 21;
			this->listBox6->Visible = false;
			this->listBox6->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox6_SelectedIndexChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(249)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->label8->Location = System::Drawing::Point(993, 51);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(73, 34);
			this->label8->TabIndex = 22;
			this->label8->Text = L"DAY";
			this->label8->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1116, 555);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->listBox6);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->listBox5);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listBox4);
			this->Controls->Add(this->listBox3);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->Font = (gcnew System::Drawing::Font(L"SimSun", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Sales management";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseUp);
			this->flowLayoutPanel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void progressBar1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->dragging = false;
	}
	private: System::Void price_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Cal_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	Close();
	
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	chart^ c = gcnew chart();
	c->ShowDialog();
}
private: System::Void chart1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	listBox1->Items->Clear();
	listBox2->Items->Clear();
	listBox3->Items->Clear();
	listBox4->Items->Clear();
	listBox6->Items->Clear();
	listBox1->Visible = true;
	listBox2->Visible = true;
	listBox3->Visible = true;
	listBox4->Visible = true;
	listBox5->Visible = true;
	listBox6->Visible = true;
	label1->Visible = true;
	label2->Visible = true;
	label3->Visible = true;
	label4->Visible = true;
	label7->Visible = true;
	label8->Visible = true;

	std::ifstream in("today_baked.txt");
	std::string textline;
	std::vector<bread> listed;
	char name[50];
	while (std::getline(in, textline)) {
		std::istringstream iss(textline);
		std::string sold, stock, amount, day;
		double p;

		bread tmp;
		std::istringstream iss2(iss.str());
		iss2 >> name >> tmp.stock >> tmp.cost >> tmp.sold >> tmp.day;
		tmp.name = name;
		listed.push_back(tmp);

		iss >> name >> stock >> amount >> sold >> day;
		p = stof(amount);

		if (listed.at(listed.size() - 1).day >= 5) {
			p /= 1.5;
		}

		if(p - int(p) > 0.75 ){ amount = std::to_string(int(p) + 1); }
		else if(p - int(p) > 0.5){ amount = std::to_string(int(p)) + ".75"; }
		else if (p - int(p) > 0.25){ amount = std::to_string(int(p)) + ".50"; }
		else if (p - int(p) > 0) { amount = std::to_string(int(p))+ ".25"; }
		else { amount = std::to_string(int(p)); }
		listed.at(listed.size() - 1).cost = stof(amount);

		this->listBox1->Items->Add(marshal_as<String^>(name) + "\n");
		this->listBox2->Items->Add(marshal_as<String^>(sold) + "\n");
		this->listBox3->Items->Add(marshal_as<String^>(stock) + "\n");
		this->listBox4->Items->Add(marshal_as<String^>(amount) + "\n");
		this->listBox6->Items->Add(marshal_as<String^>(day) + "\n");
	}
	in.close();

}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	makesure^ z = gcnew makesure();
	z->Show();
	MyForm::Show();
}
private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	std::ifstream file("today_baked.txt");
	std::string textline;
	std::vector<bread> listed;
	char name[50];
	while (std::getline(file, textline)) {
		bread tmp;
		std::istringstream iss(textline);
		iss >> name >> tmp.stock >> tmp.cost >> tmp.sold >> tmp.day;
		tmp.name = name;
		listed.push_back(tmp);

	}
	file.close();
	if (listed.size() == 0) {
		fail^ f = gcnew fail();
		f->UpdateLebel("Fail !! Store is empty ");
		f->ShowDialog();
	}
	else {
		for (int i = 0; i < listed.size(); i++) {
			for (int j = i; j > 0; j--) {
				if (listed[j].sold > listed[j - 1].sold) {
					std::swap(listed[j - 1], listed[j]);
				}
			}
		}
		this->listBox1->Items->Clear();
		this->listBox2->Items->Clear();
		this->listBox3->Items->Clear();
		this->listBox4->Items->Clear();
		this->listBox5->Items->Clear();
		this->listBox6->Items->Clear();

		for (int i = 0; i < listed.size(); i++) {

			double p;
			std::string pay;
			p = listed.at(i).cost;

			if (listed.at(i).day >= 5) {
				p /= 1.5;
			}

			if (p - int(p) > 0.75) { pay = std::to_string(int(p) + 1); }
			else if (p - int(p) > 0.5) { pay = std::to_string(int(p)) + ".75"; }
			else if (p - int(p) > 0.25) { pay = std::to_string(int(p)) + ".50"; }
			else if (p - int(p) > 0) { pay = std::to_string(int(p)) + ".25"; }
			else { pay = std::to_string(int(p)); }
			p = stof(pay);

			std::string namae, kai, stocku, amounto, day;
			std::stringstream ss;
			ss << listed[i].name << " " << listed[i].sold << " " << listed[i].stock << " " << listed[i].cost << " " << listed[i].day ;
			ss >> namae >> kai >> stocku >> amounto >> day ;
			this->listBox1->Items->Add(marshal_as<String^>(namae) + "\n");
			this->listBox2->Items->Add(marshal_as<String^>(kai) + "\n");
			this->listBox3->Items->Add(marshal_as<String^>(stocku) + "\n");
			this->listBox4->Items->Add(marshal_as<String^>(pay) + "\n");
			this->listBox6->Items->Add(marshal_as<String^>(day) + "\n");
		}

		if (listed[0].sold == listed[1].sold) {
			this->listBox5->Items->Add(marshal_as<String^>(listed.at(0).name) + "\n");
			this->listBox5->Items->Add(marshal_as<String^>(listed.at(1).name) + "\n");
		}
		else {
			this->listBox5->Items->Add(marshal_as<String^>(listed.at(0).name) + "\n");
		}

		Added^ g = gcnew Added();
		g->ShowDialog();
	}
}
private: System::Void MyForm_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (this->dragging) {
		Point currentScreenPos = PointToScreen(e->Location);
		Location = Point(currentScreenPos.X - this->offset.X, currentScreenPos.Y - this->offset.Y);
	}
}
private: System::Void MyForm_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	this->dragging = false;
}
private: System::Void MyForm_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	this->dragging = true;
	this->offset = Point(e->X, e->Y);
}
private: System::Void button4_Click_1(System::Object^ sender, System::EventArgs^ e) {
	addBread^ addB = gcnew addBread();
	addB->ShowDialog();
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	listBox1->Visible = false;
	listBox2->Visible = false;
	listBox3->Visible = false;
	listBox4->Visible = false;
	listBox5->Visible = false;
	listBox6->Visible = false;
	label1->Visible = false;
	label2->Visible = false;
	label3->Visible = false;
	label4->Visible = false;
	label7->Visible = false;
	label8->Visible = false;
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	listBox1->Visible = false;
	listBox2->Visible = false;
	listBox3->Visible = false;
	listBox4->Visible = false;
	listBox5->Visible = false;
	listBox6->Visible = false;
	label1->Visible = false;
	label2->Visible = false;
	label3->Visible = false;
	label4->Visible = false;
	label7->Visible = false;
	label8->Visible = false;
}
private: System::Void button7_Click_1(System::Object^ sender, System::EventArgs^ e) {
	Help1^ helpme = gcnew Help1();
	helpme->ShowDialog();
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void listBox6_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void listBox5_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
