#pragma once
#include "bread.h"
#include <msclr\marshal_cppstd.h>

namespace Project1 {
	using namespace msclr::interop;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System :: IO;

	/// <summary>
	/// Summary for chart
	/// </summary>
	public ref class chart : public System::Windows::Forms::Form
	{
	public:
		chart(void)
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
		~chart()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;





	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::Button^ button2;

	private: Bunifu::Framework::UI::BunifuMaterialTextbox^ bunifuMaterialTextbox1;
	private: Bunifu::Framework::UI::BunifuMaterialTextbox^ bunifuMaterialTextbox2;


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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->bunifuMaterialTextbox1 = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
			this->bunifuMaterialTextbox2 = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(252, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(87, 32);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Chart";
			this->label1->Click += gcnew System::EventHandler(this, &chart::label1_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::PaleTurquoise;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(321, 168);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(84, 32);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Close";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &chart::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(68, 88);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(67, 23);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Name";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(299, 93);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(82, 23);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Amount";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::PaleTurquoise;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(185, 168);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(84, 32);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Add";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &chart::button2_Click);
			// 
			// bunifuMaterialTextbox1
			// 
			this->bunifuMaterialTextbox1->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::None;
			this->bunifuMaterialTextbox1->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::None;
			this->bunifuMaterialTextbox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->bunifuMaterialTextbox1->characterCasing = System::Windows::Forms::CharacterCasing::Normal;
			this->bunifuMaterialTextbox1->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->bunifuMaterialTextbox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->bunifuMaterialTextbox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuMaterialTextbox1->HintForeColor = System::Drawing::Color::Empty;
			this->bunifuMaterialTextbox1->HintText = L"";
			this->bunifuMaterialTextbox1->isPassword = false;
			this->bunifuMaterialTextbox1->LineFocusedColor = System::Drawing::Color::Blue;
			this->bunifuMaterialTextbox1->LineIdleColor = System::Drawing::Color::Gray;
			this->bunifuMaterialTextbox1->LineMouseHoverColor = System::Drawing::Color::Blue;
			this->bunifuMaterialTextbox1->LineThickness = 3;
			this->bunifuMaterialTextbox1->Location = System::Drawing::Point(156, 83);
			this->bunifuMaterialTextbox1->Margin = System::Windows::Forms::Padding(4);
			this->bunifuMaterialTextbox1->MaxLength = 32767;
			this->bunifuMaterialTextbox1->Name = L"bunifuMaterialTextbox1";
			this->bunifuMaterialTextbox1->Size = System::Drawing::Size(113, 33);
			this->bunifuMaterialTextbox1->TabIndex = 13;
			this->bunifuMaterialTextbox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->bunifuMaterialTextbox1->OnValueChanged += gcnew System::EventHandler(this, &chart::bunifuMaterialTextbox1_OnValueChanged);
			// 
			// bunifuMaterialTextbox2
			// 
			this->bunifuMaterialTextbox2->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::None;
			this->bunifuMaterialTextbox2->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::None;
			this->bunifuMaterialTextbox2->characterCasing = System::Windows::Forms::CharacterCasing::Normal;
			this->bunifuMaterialTextbox2->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->bunifuMaterialTextbox2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->bunifuMaterialTextbox2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuMaterialTextbox2->HintForeColor = System::Drawing::Color::Empty;
			this->bunifuMaterialTextbox2->HintText = L"";
			this->bunifuMaterialTextbox2->isPassword = false;
			this->bunifuMaterialTextbox2->LineFocusedColor = System::Drawing::Color::Blue;
			this->bunifuMaterialTextbox2->LineIdleColor = System::Drawing::Color::Gray;
			this->bunifuMaterialTextbox2->LineMouseHoverColor = System::Drawing::Color::Blue;
			this->bunifuMaterialTextbox2->LineThickness = 3;
			this->bunifuMaterialTextbox2->Location = System::Drawing::Point(403, 88);
			this->bunifuMaterialTextbox2->Margin = System::Windows::Forms::Padding(4);
			this->bunifuMaterialTextbox2->MaxLength = 32767;
			this->bunifuMaterialTextbox2->Name = L"bunifuMaterialTextbox2";
			this->bunifuMaterialTextbox2->Size = System::Drawing::Size(113, 33);
			this->bunifuMaterialTextbox2->TabIndex = 14;
			this->bunifuMaterialTextbox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->bunifuMaterialTextbox2->OnValueChanged += gcnew System::EventHandler(this, &chart::bunifuMaterialTextbox2_OnValueChanged);
			// 
			// chart
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->ClientSize = System::Drawing::Size(585, 260);
			this->Controls->Add(this->bunifuMaterialTextbox2);
			this->Controls->Add(this->bunifuMaterialTextbox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"chart";
			this->Text = L"chart";
			this->Load += gcnew System::EventHandler(this, &chart::chart_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void monthCalendar1_DateChanged(System::Object^ sender, System::Windows::Forms::DateRangeEventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ name = bunifuMaterialTextbox1->Text;
	String^ sold = bunifuMaterialTextbox2->Text;

	// String^ name to string namefos
	char cStr[50] = { 0 };
	String^ clrString = name;
	if (clrString->Length < sizeof(cStr))
		sprintf(cStr, "%s", clrString);
	std::string nameofs = cStr;

	// String^ sold to string soldfos to int soldint
	cStr[50] = { 0 };
	clrString = sold;
	if (clrString->Length < sizeof(cStr))
		sprintf(cStr, "%s", clrString);
	std::string soldofs = cStr;
	int soldint = std::stoi(soldofs);


	std::ifstream in("today_baked.txt");
	std::string textline;
	std::vector<bread> listed;
	while (std::getline(in, textline)) {
		bread tmp;
		std::istringstream iss(textline);
		iss >> tmp.name >> tmp.stock >> tmp.cost >> tmp.sold >> tmp.day;
		listed.push_back(tmp);
	}
	in.close();
	StreamWriter^ sw = gcnew StreamWriter("file.txt");
	for (int j = 0; j < listed.size(); j++) {
		if (nameofs == listed[j].name) {
			listed[j].sold = soldint;
			listed[j].stock -=   soldint;
		}
	}
	for (int i = 0; i < listed.size(); i++) {
		std::ostringstream oss;
		oss << listed.at(i).name << " " << listed.at(i).stock << " " << listed.at(i).cost << " " << listed.at(i).sold << " " << listed.at(i).day;
		String^ str = marshal_as<String^>(oss.str());
		sw->Write(str + "/n");
	}
	sw->Close();
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void chart_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void bunifuMaterialTextbox1_OnValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void bunifuMaterialTextbox2_OnValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
