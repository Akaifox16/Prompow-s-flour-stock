#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Summary
	/// </summary>
	public ref class Summary : public System::Windows::Forms::Form
	{
	public:
		Summary(void)
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
		~Summary()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ListBox^ listBox1;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ListBox^ listBox3;
	private: System::Windows::Forms::ListBox^ listBox4;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->listBox4 = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Algerian", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::Highlight;
			this->label1->Location = System::Drawing::Point(17, 17);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(136, 42);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Menu :";
			this->label1->Click += gcnew System::EventHandler(this, &Summary::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Algerian", 22.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::Highlight;
			this->label2->Location = System::Drawing::Point(381, 24);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(101, 34);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Sold :";
			this->label2->Click += gcnew System::EventHandler(this, &Summary::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Algerian", 22.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::Highlight;
			this->label3->Location = System::Drawing::Point(549, 24);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(156, 34);
			this->label3->TabIndex = 2;
			this->label3->Text = L"In Stock :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Algerian", 22.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::Highlight;
			this->label4->Location = System::Drawing::Point(764, 24);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(148, 34);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Amount :";
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->listBox1->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(24, 63);
			this->listBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(333, 329);
			this->listBox1->TabIndex = 4;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Algerian", 25.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::Highlight;
			this->label6->Location = System::Drawing::Point(17, 405);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(129, 39);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Total";
			this->label6->Click += gcnew System::EventHandler(this, &Summary::label6_Click);
			// 
			// listBox2
			// 
			this->listBox2->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->listBox2->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->listBox2->FormattingEnabled = true;
			this->listBox2->Location = System::Drawing::Point(380, 61);
			this->listBox2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(141, 329);
			this->listBox2->TabIndex = 7;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(790, 405);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(98, 20);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Total(Bath฿)";
			// 
			// listBox3
			// 
			this->listBox3->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->listBox3->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->listBox3->FormattingEnabled = true;
			this->listBox3->Location = System::Drawing::Point(554, 63);
			this->listBox3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(151, 329);
			this->listBox3->TabIndex = 9;
			// 
			// listBox4
			// 
			this->listBox4->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->listBox4->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->listBox4->FormattingEnabled = true;
			this->listBox4->Location = System::Drawing::Point(760, 63);
			this->listBox4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->listBox4->Name = L"listBox4";
			this->listBox4->Size = System::Drawing::Size(157, 329);
			this->listBox4->TabIndex = 10;
			// 
			// Summary
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->ClientSize = System::Drawing::Size(983, 460);
			this->Controls->Add(this->listBox4);
			this->Controls->Add(this->listBox3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"Summary";
			this->Text = L"Summary";
			this->Load += gcnew System::EventHandler(this, &Summary::Summary_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
