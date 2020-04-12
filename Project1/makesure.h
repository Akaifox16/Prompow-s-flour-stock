#pragma once
#include "Summary.h"
#include "bread.h"
#include <msclr\marshal_cppstd.h>
#include "fail.h"

namespace Project1 {
	using namespace msclr::interop;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for makesure
	/// </summary>
	public ref class makesure : public System::Windows::Forms::Form
	{
	public:
		makesure(void)
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
		~makesure()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;
	private: bool dragging;
	private: Point offset;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(makesure::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox1->Location = System::Drawing::Point(109, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(130, 116);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::PaleTurquoise;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold));
			this->button1->Location = System::Drawing::Point(81, 187);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(77, 28);
			this->button1->TabIndex = 1;
			this->button1->Text = L"YES";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &makesure::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label1->Location = System::Drawing::Point(49, 144);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(245, 23);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Are you sure to end day \?";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::PaleTurquoise;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold));
			this->button2->Location = System::Drawing::Point(188, 187);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(77, 28);
			this->button2->TabIndex = 3;
			this->button2->Text = L"NO";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &makesure::button2_Click);
			// 
			// makesure
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->ClientSize = System::Drawing::Size(355, 244);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"makesure";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"makesure";
			this->Load += gcnew System::EventHandler(this, &makesure::makesure_Load);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &makesure::makesure_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &makesure::makesure_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &makesure::makesure_MouseUp);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//ทำให้หายไป---------
		makesure::Visible = false;
		//--------------
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
			fail^ b = gcnew fail();
			b->UpdateLebel("Fail !! Store is empty ");
			b->ShowDialog();
		}
		else {
			Summary^ c = gcnew Summary();
			double total = 0;
			c->clearListBox();
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

				double N_amount = listed.at(i).amount(listed.at(i).sold, p);

				total += N_amount;
				c->UpdateListBox1(marshal_as<String^>(listed.at(i).name) + "\n");
				std::stringstream ss;
				std::string sold, stock, amount;
				ss << listed.at(i).sold << " " << listed.at(i).stock << " " << N_amount;
				ss >> sold >> stock >> amount;

				c->UpdateListBox2(marshal_as<String^>(sold) + "\n");
				c->UpdateListBox3(marshal_as<String^>(stock) + "\n");
				c->UpdateListBox4(marshal_as<String^>(amount) + "\n");
			}
			std::stringstream str;
			std::string outTotal, baht;
			baht = "  Baht(฿)";
			str << total;
			str >> outTotal;
			c->UpdateTotal(marshal_as<String^>(outTotal + baht));
			c->ShowDialog();


			for (int i = 0; i < listed.size(); i++) {
				listed.at(i).day += 1;
			}

			std::ofstream out("today_baked.txt");
			for (int i = 0; i < listed.size(); i++) {
				std::ostringstream oss;
				if (listed.at(i).day < 7) {
					if (listed.at(i).stock == 0) { continue; }
					oss << listed.at(i).name << " " << listed.at(i).stock << " " << listed.at(i).cost << " " << 0 << " " << listed.at(i).day;
					textline = oss.str();
					out << textline << '\n';
				}
			}
			out.close();
		}
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void makesure_Load(System::Object^ sender, System::EventArgs^ e) {
	this->dragging = false;
}
private: System::Void makesure_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	this->dragging = true;
	this->offset = Point(e->X, e->Y);
}
private: System::Void makesure_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (this->dragging) {
		Point currentScreenPos = PointToScreen(e->Location);
		Location = Point(currentScreenPos.X - this->offset.X, currentScreenPos.Y - this->offset.Y);
	}
}
private: System::Void makesure_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	this->dragging = false;
}
};
}
