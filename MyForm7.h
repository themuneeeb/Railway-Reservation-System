#pragma once

namespace R {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for MyForm7
	/// </summary>
	public ref class MyForm7 : public System::Windows::Forms::Form
	{
	public:
		MyForm7(void)
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
		~MyForm7()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm7::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(16, 47);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(152, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Train-name";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label2->ForeColor = System::Drawing::SystemColors::Control;
			this->label2->Location = System::Drawing::Point(16, 95);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(135, 31);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Departure";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label3->Location = System::Drawing::Point(16, 142);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(91, 31);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Arrival";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label4->ForeColor = System::Drawing::Color::Snow;
			this->label4->Location = System::Drawing::Point(16, 190);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(72, 31);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Date";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label5->Location = System::Drawing::Point(16, 279);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(166, 31);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Arrival_Time";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label6->Location = System::Drawing::Point(16, 233);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(210, 31);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Departure_Time";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label7->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label7->Location = System::Drawing::Point(16, 340);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(76, 25);
			this->label7->TabIndex = 6;
			this->label7->Text = L"E_Fare";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label8->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label8->Location = System::Drawing::Point(306, 340);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(76, 25);
			this->label8->TabIndex = 7;
			this->label8->Text = L"B_Fare";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label9->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label9->Location = System::Drawing::Point(169, 340);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(75, 25);
			this->label9->TabIndex = 8;
			this->label9->Text = L"F_Fare";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->textBox1->Location = System::Drawing::Point(224, 33);
			this->textBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(199, 38);
			this->textBox1->TabIndex = 9;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm7::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->textBox2->Location = System::Drawing::Point(224, 276);
			this->textBox2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(199, 38);
			this->textBox2->TabIndex = 10;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->textBox3->Location = System::Drawing::Point(224, 231);
			this->textBox3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(199, 38);
			this->textBox3->TabIndex = 11;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->textBox4->Location = System::Drawing::Point(224, 185);
			this->textBox4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(199, 38);
			this->textBox4->TabIndex = 12;
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->textBox5->Location = System::Drawing::Point(224, 140);
			this->textBox5->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(199, 38);
			this->textBox5->TabIndex = 13;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm7::textBox5_TextChanged);
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->textBox6->Location = System::Drawing::Point(224, 90);
			this->textBox6->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(199, 38);
			this->textBox6->TabIndex = 14;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &MyForm7::textBox6_TextChanged);
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->textBox7->Location = System::Drawing::Point(92, 343);
			this->textBox7->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(76, 23);
			this->textBox7->TabIndex = 15;
			// 
			// textBox8
			// 
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->textBox8->Location = System::Drawing::Point(238, 343);
			this->textBox8->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(65, 23);
			this->textBox8->TabIndex = 16;
			// 
			// textBox9
			// 
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->textBox9->Location = System::Drawing::Point(382, 344);
			this->textBox9->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(76, 23);
			this->textBox9->TabIndex = 17;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button1->ForeColor = System::Drawing::Color::Yellow;
			this->button1->Location = System::Drawing::Point(172, 370);
			this->button1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(101, 51);
			this->button1->TabIndex = 18;
			this->button1->Text = L"ADD";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm7::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button2->ForeColor = System::Drawing::Color::Yellow;
			this->button2->Location = System::Drawing::Point(310, 370);
			this->button2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(101, 51);
			this->button2->TabIndex = 19;
			this->button2->Text = L"Back";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm7::button2_Click);
			// 
			// MyForm7
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(800, 555);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"MyForm7";
			this->Text = L"Add Train";
			this->Load += gcnew System::EventHandler(this, &MyForm7::MyForm7_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm7_Load(System::Object^ sender, System::EventArgs^ e) {
		
	}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	
	String^ Trainname = textBox1->Text;
	String^ Arrival = textBox5->Text;
	String^ Departure = textBox6->Text;
	String^ A_time = textBox2->Text;
	String^ D_time = textBox3->Text;
	String^ E_f = textBox7->Text;
	String^ F_f = textBox8->Text;
	String^ B_f = textBox9->Text;
	String^ Date = textBox4->Text;
	int e1 = Convert::ToInt32(textBox7->Text);
	int f= Convert::ToInt32(textBox8->Text);
	int b= Convert::ToInt32(textBox9->Text);
	if (textBox1->Text != "" && textBox2->Text != "" && textBox3->Text != "" && textBox5->Text != ""/* && textBox6->Text !=*/ /*""*/ && textBox7->Text != "" && textBox8->Text != "" && textBox9->Text != "")
	{
		if (e1 > 100 && e1<5000 && f > 100 && f<5000 && b < 5000 && b > 100)
		{
			try {
				String^ sqlconnection = "Data Source=localhost\\sqlexpress;Initial Catalog=ADMIN;Integrated Security=True";
				SqlConnection^ sqlconn = gcnew SqlConnection(sqlconnection);
				sqlconn->Open();
				String^ SqlQuery = "INSERT INTO [" + Departure + "] (Train_name, Arrival, Departure_Time, Arrival_Time, E_Fare, F_Fare, B_Fare, Date, Departure ) VALUES (@Namee, @Arrive ,@DT, @AT, @EF, @FF, @BF, @Dat, @D )";
				SqlCommand^ command = gcnew SqlCommand(SqlQuery, sqlconn);
				command->Parameters->AddWithValue("@Namee", Trainname);
				command->Parameters->AddWithValue("@Arrive", Arrival);
				command->Parameters->AddWithValue("@DT", D_time);
				command->Parameters->AddWithValue("@AT", A_time);
				command->Parameters->AddWithValue("@EF", E_f);
				command->Parameters->AddWithValue("@FF", F_f);
				command->Parameters->AddWithValue("@BF", B_f);
				command->Parameters->AddWithValue("@Dat", Date);
				command->Parameters->AddWithValue("@D", Departure);
				command->ExecuteNonQuery();
				/*this->Close();*/
				MessageBox::Show("Train Added Successfully", "Added", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			catch (SqlException^ex)
			{
				if (textBox6->Text->Length != 0)
					MessageBox::Show("Please Make Sure You have Entered Correct Departure City.The FIRST Letter Should be CAPITAL and rest Should be small LIKE:\n\tLahore", "Enter Valid City", MessageBoxButtons::OK, MessageBoxIcon::Error);
				else
					MessageBox::Show("Enter Departure City", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		else {
			MessageBox::Show("Train Fares Entered are too LOW or too HIGH ", "Invali Data Entry", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		
	}
	else
	{
		MessageBox::Show("Fill All the Data", "Invalid Data", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
	   
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {

	
		
		
	



}
private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
