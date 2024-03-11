#pragma once
#include"MyForm4.h"
#include"MyForm5.h"
namespace R {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	/// <summary>
	/// Summary for MyForm3
	/// </summary>
	public ref class MyForm3 : public System::Windows::Forms::Form
	{
	public:
		MyForm3(void)
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
		~MyForm3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox4;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm3::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 40.8F));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(21, 7);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(234, 63);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Register";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.8F));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(11, 162);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(156, 35);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Username";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::Black;
			this->textBox1->Location = System::Drawing::Point(293, 170);
			this->textBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(204, 25);
			this->textBox1->TabIndex = 13;
			this->textBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm3::textBox1_KeyDown);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.8F));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(11, 209);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(220, 35);
			this->label4->TabIndex = 14;
			this->label4->Text = L"New Password";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Transparent;
			this->button1->Location = System::Drawing::Point(105, 349);
			this->button1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(132, 58);
			this->button1->TabIndex = 15;
			this->button1->Text = L"Sign Up ";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm3::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button2->ForeColor = System::Drawing::Color::AliceBlue;
			this->button2->Location = System::Drawing::Point(293, 351);
			this->button2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(141, 57);
			this->button2->TabIndex = 16;
			this->button2->Text = L"Exit";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm3::button2_Click);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::Color::Black;
			this->textBox2->Location = System::Drawing::Point(293, 217);
			this->textBox2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(204, 25);
			this->textBox2->TabIndex = 17;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm3::textBox2_TextChanged);
			this->textBox2->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm3::textBox2_KeyDown);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.8F));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(11, 258);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(266, 35);
			this->label3->TabIndex = 18;
			this->label3->Text = L"Confirm Password";
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->ForeColor = System::Drawing::Color::Black;
			this->textBox3->Location = System::Drawing::Point(293, 266);
			this->textBox3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(204, 25);
			this->textBox3->TabIndex = 19;
			this->textBox3->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm3::textBox3_KeyDown);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->BackColor = System::Drawing::Color::Transparent;
			this->radioButton1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->radioButton1->Location = System::Drawing::Point(281, 318);
			this->radioButton1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(54, 17);
			this->radioButton1->TabIndex = 20;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Admin";
			this->radioButton1->UseVisualStyleBackColor = false;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm3::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->BackColor = System::Drawing::Color::Transparent;
			this->radioButton2->ForeColor = System::Drawing::SystemColors::Control;
			this->radioButton2->Location = System::Drawing::Point(352, 318);
			this->radioButton2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(75, 17);
			this->radioButton2->TabIndex = 21;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Passenger";
			this->radioButton2->UseVisualStyleBackColor = false;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm3::radioButton2_CheckedChanged);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackColor = System::Drawing::Color::Transparent;
			this->checkBox1->ForeColor = System::Drawing::Color::Coral;
			this->checkBox1->Location = System::Drawing::Point(397, 302);
			this->checkBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(102, 17);
			this->checkBox1->TabIndex = 22;
			this->checkBox1->Text = L"Show Password";
			this->checkBox1->UseVisualStyleBackColor = false;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm3::checkBox1_CheckedChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.8F));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(11, 111);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(142, 35);
			this->label5->TabIndex = 23;
			this->label5->Text = L"Admin-ID";
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->ForeColor = System::Drawing::Color::Black;
			this->textBox4->Location = System::Drawing::Point(295, 111);
			this->textBox4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(204, 25);
			this->textBox4->TabIndex = 24;
			// 
			// MyForm3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(800, 555);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"MyForm3";
			this->Text = L"Registration Form";
			this->Load += gcnew System::EventHandler(this, &MyForm3::MyForm3_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ user=textBox1->Text;
	String^ passs = textBox2->Text;
	String^ passs1=textBox3->Text;
	String^ id = textBox4->Text;
	label5->Hide();
	textBox4->Hide();
	if (passs1==passs) {
		String^ sqlconnection = "Data Source=localhost\\sqlexpress;Initial Catalog=ADMIN;Integrated Security=True";
		SqlConnection  sqlconn(sqlconnection);
		sqlconn.Open();
		if (radioButton1->Checked)
		{
			try {
				label5->Show();
				textBox4->Show();
				String^ sqlconnection = "Data Source=localhost\\sqlexpress;Initial Catalog=ADMIN;Integrated Security=True";
				SqlConnection^ sqlconn = gcnew SqlConnection(sqlconnection);
				sqlconn->Open();
				String^ SqlQuery = "INSERT INTO [adm] (AdminName, Pass, AdminID) VALUES (@Namee, @Passx, @ID)";
				SqlCommand^ command = gcnew SqlCommand(SqlQuery, sqlconn);
				if (textBox1->Text != "" && textBox2->Text != "" && textBox3->Text != "")
				{
					if (textBox1->Text->Length >= 3 && textBox2->Text->Length >= 3)
					{
						if (textBox4->Text == "1100")
						{
							command->Parameters->AddWithValue("@Namee", user);
							command->Parameters->AddWithValue("@Passx", passs);
							command->Parameters->AddWithValue("@ID", id);
							command->ExecuteNonQuery();

							MyForm5^ F1 = gcnew MyForm5();
							this->Close();
							F1->Show();
						}
						else
						{
							if (textBox4->Text->Length==0)
								MessageBox::Show("Please Type Admin-ID or Contact @MMW for ADMIN-ID", "ADMIN-ID ", MessageBoxButtons::OK, MessageBoxIcon::Error);
							else 
								MessageBox::Show("Contact @MMW for ADMIN-ID", "ADMIN-ID is INCORRECT", MessageBoxButtons::OK, MessageBoxIcon::Error);
						}
					}
					else
					{
						if (textBox1->Text->Length <= 3 && textBox2->Text->Length>=3)
						{
							MessageBox::Show("Length of username should be 3 or more", "Username is too Short", MessageBoxButtons::OK, MessageBoxIcon::Error);
						}
						else if (textBox1->Text->Length >= 3 && textBox2->Text->Length <= 3)
						{
							MessageBox::Show("Length of Pass should be 3 or more", "Password is too Short", MessageBoxButtons::OK, MessageBoxIcon::Error);
						}
						else
						{
							
								MessageBox::Show("Length of username and Password should be 3 or more", "Username and Password is too Short", MessageBoxButtons::OK, MessageBoxIcon::Error);
							
						}
					}
				}
				else
				{
					MessageBox::Show("Name or Password is empty", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}

			}
			catch (SqlException^ ex)
			{
				MessageBox::Show("Username is already Taken", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			finally {
				sqlconn.Close();
			}
			
		}
		else if (radioButton2->Checked)
		{
			try {
				label5->Hide();
				textBox4->Hide();
				String^ sqlconnection = "Data Source=localhost\\sqlexpress;Initial Catalog=ADMIN;Integrated Security=True";
				SqlConnection^ sqlconn = gcnew SqlConnection(sqlconnection);
				sqlconn->Open();
				String^ SqlQuery = "INSERT INTO [User] (Username, Password) VALUES (@Namee, @Passx)";
				if (textBox1->Text != "" && textBox2->Text != "" && textBox3->Text != "")
				{
					if (textBox1->Text->Length >= 3 && textBox2->Text->Length >= 3)
					{
						SqlCommand^ command = gcnew SqlCommand(SqlQuery, sqlconn);
						command->Parameters->AddWithValue("@Namee", user);
						command->Parameters->AddWithValue("@Passx", passs);
						command->ExecuteNonQuery();

						this->Close();
						MyForm4^ F = gcnew MyForm4();
						F->as = user;
						F->Show();
					}
					else
					{
						if (textBox1->Text->Length <= 3 && textBox2->Text->Length >= 3)
						{
							MessageBox::Show("Length of username should be 3 or more", "Username is too Short", MessageBoxButtons::OK, MessageBoxIcon::Error);
						}
						else if (textBox1->Text->Length >= 3 && textBox2->Text->Length <= 3)
						{
							MessageBox::Show("Length of Pass should be 3 or more", "Password is too Short", MessageBoxButtons::OK, MessageBoxIcon::Error);
						}
						else
						{

							MessageBox::Show("Length of username and Password should be 3 or more", "Username and Password is too Short", MessageBoxButtons::OK, MessageBoxIcon::Error);

						}
					}

				}
				else
				{
					MessageBox::Show("Name or Password is empty", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}
			catch (SqlException^ ex)
			{
				MessageBox::Show("Username is already Taken","Error",MessageBoxButtons::OK,MessageBoxIcon::Error);
			}
			finally {
				sqlconn.Close();
			}
		}
		else
		{
			MessageBox::Show("Select Admin or Passenger", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		
	}
	else
	{
		MessageBox::Show("Password Should be same", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void MyForm3_Load(System::Object^ sender, System::EventArgs^ e) {
	label5->Hide();
	textBox4->Hide();
	if (checkBox1->Checked)
	{

		textBox3->UseSystemPasswordChar = false;
		textBox2->UseSystemPasswordChar = false;
	}
	else
	{
		textBox2->PasswordChar = true;
		textBox3->PasswordChar = true;
		textBox2->UseSystemPasswordChar = true;
		textBox3->UseSystemPasswordChar = true;
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	label5->Show();
	textBox4->Show();
	if (radioButton1->Checked == true || radioButton2->Checked == true)
	{
		button1->Enabled = true;
	}
	else
		button1->Enabled = false;
}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox1->Checked)
	{
		
		textBox3->UseSystemPasswordChar = false;
		textBox2->UseSystemPasswordChar = false;
	}
	else
	{
		textBox2->PasswordChar = true;
		textBox3->PasswordChar = true;
		textBox2->UseSystemPasswordChar =true;
		textBox3->UseSystemPasswordChar=true;
	}
	}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyValue == (int)Keys::Enter)
	{
		textBox2->Focus();
	}
}
private: System::Void textBox2_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyValue == (int)Keys::Enter)
	{
		textBox3->Focus();
	}
}
private: System::Void textBox3_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyValue == (int)Keys::Enter)
	{
		if (radioButton1->Checked || radioButton2->Checked)
		{
			button1->PerformClick();
		}
		else
		{
			MessageBox::Show("Select Admin or Passenger", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
}
private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	label5->Hide();
	textBox4->Hide();
}
};
}
