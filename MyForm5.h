#pragma once
#include"MyForm7.h"
#include"MyForm8.h"
#include "MyForm13.h"
#include "MyForm16.h"
#include"MyForm17.h"
namespace R {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm5
	/// </summary>
	public ref class MyForm5 : public System::Windows::Forms::Form
	{
	public:
		MyForm5(void)
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
		~MyForm5()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button1;





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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm5::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label1->ForeColor = System::Drawing::Color::Azure;
			this->label1->Location = System::Drawing::Point(237, 44);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(329, 78);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Railway Reservation\r\n           System";
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::DimGray;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"MingLiU-ExtB", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button6->Location = System::Drawing::Point(137, 205);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(153, 76);
			this->button6->TabIndex = 14;
			this->button6->Text = L"ADD Train";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm5::button6_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::DimGray;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"MingLiU-ExtB", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button4->Location = System::Drawing::Point(339, 205);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(153, 76);
			this->button4->TabIndex = 15;
			this->button4->Text = L"DELETE Train";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm5::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::DimGray;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"MingLiU-ExtB", 12, System::Drawing::FontStyle::Bold));
			this->button3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button3->Location = System::Drawing::Point(542, 206);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(153, 76);
			this->button3->TabIndex = 16;
			this->button3->Text = L"Modify Train Fares";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm5::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::DimGray;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"MingLiU-ExtB", 12, System::Drawing::FontStyle::Bold));
			this->button2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button2->Location = System::Drawing::Point(137, 327);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(153, 76);
			this->button2->TabIndex = 17;
			this->button2->Text = L"Modify Train Timings";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm5::button2_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::DimGray;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"MingLiU-ExtB", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button5->Location = System::Drawing::Point(542, 327);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(153, 76);
			this->button5->TabIndex = 18;
			this->button5->Text = L"EXIT";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm5::button5_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DimGray;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"MingLiU-ExtB", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Location = System::Drawing::Point(339, 327);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(153, 76);
			this->button1->TabIndex = 19;
			this->button1->Text = L"Revenue Report";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm5::button1_Click_1);
			// 
			// MyForm5
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1067, 683);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm5";
			this->Text = L"Admin\'s Home Page";
			this->Load += gcnew System::EventHandler(this, &MyForm5::MyForm5_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {

	if (MessageBox::Show("Are you Sure you want to Quit?", "Confirm", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
	{
		Application::Exit();
	}
	else
	{

	}
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm7^ qw = gcnew MyForm7();
	qw->Show();
	

}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm8^ form = gcnew MyForm8();
	form->Show();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm13^ F2 = gcnew MyForm13();
	F2->Show();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm16^F = gcnew MyForm16();
	F->Show();
}
private: System::Void MyForm5_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	MyForm17^ F = gcnew MyForm17();
	F->Show();
}
};
}
