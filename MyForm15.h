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
	/// Summary for MyForm15
	/// </summary>
	public ref class MyForm15 : public System::Windows::Forms::Form
	{
	public:
		String^ C = "";
	private: System::Windows::Forms::Button^ button1;
	public:
		String^ I = "";
		MyForm15(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		MyForm15(String^ name)
		{
			C = name;
			I = name;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm15()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button2;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm15::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(51, 168);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(263, 39);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Departure_Time";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->textBox2->Location = System::Drawing::Point(345, 238);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(137, 45);
			this->textBox2->TabIndex = 13;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm15::textBox2_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label2->Location = System::Drawing::Point(51, 244);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(209, 39);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Arrival_Time";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm15::label2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->textBox1->Location = System::Drawing::Point(345, 165);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(137, 45);
			this->textBox1->TabIndex = 15;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm15::textBox1_TextChanged);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::DimGray;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->button2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button2->Location = System::Drawing::Point(182, 358);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(151, 83);
			this->button2->TabIndex = 16;
			this->button2->Text = L"Modify Timings";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm15::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 17));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button1->Location = System::Drawing::Point(399, 359);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(151, 83);
			this->button1->TabIndex = 17;
			this->button1->Text = L"Back";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm15::button1_Click);
			// 
			// MyForm15
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1067, 683);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm15";
			this->Text = L"Edit Timings";
			this->Load += gcnew System::EventHandler(this, &MyForm15::MyForm15_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void MyForm15_Load(System::Object^ sender, System::EventArgs^ e) {
	try {
		SqlConnection^ conn = gcnew SqlConnection("Data Source=localhost\\sqlexpress;Initial Catalog=ADMIN;Integrated Security=True");
		conn->Open();

		// Prepare SQL query to select data from Lahore table
		SqlCommand^ cmd = gcnew SqlCommand("SELECT Departure_Time, Arrival_Time FROM " + C + " WHERE Id=@Id", conn);


		cmd->Parameters->AddWithValue("@id", I);

		// Execute SQL query and get result set
		SqlDataReader^ reader = cmd->ExecuteReader();
		String^ e;
		String^ f;
		// Check if there is a row returned
		if (reader->Read())
		{
			// Get the value of the UserName column from the current row
			e = reader->GetString(0);
			f = reader->GetString(1);
	
			textBox1->Text = e;
			textBox2->Text = f;
			// Do something with the username...
		}
		else
		{
			this->Close();
			MessageBox::Show("Enter Correct Train-ID", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		

		// Close the reader and the SqlConnection
		reader->Close();

		
		conn->Close();









	}
	catch (SqlException^ e)
	{
		MessageBox::Show("Departing Cities 'Lahore' and 'Multan'", "Enter Available City", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	SqlConnection^ conn = gcnew SqlConnection("Data Source=localhost\\sqlexpress;Initial Catalog=ADMIN;Integrated Security=True");
	conn->Open();
	SqlCommand^ cmd1 = gcnew SqlCommand("UPDATE " + C + " SET Departure_Time = @NewValue1, Arrival_Time = @NewValue2  WHERE Id = @Id", conn);
	cmd1->Parameters->AddWithValue("@id", I);
	cmd1->Parameters->AddWithValue("@NewValue1", textBox1->Text);
	cmd1->Parameters->AddWithValue("@NewValue2", textBox2->Text);
	

	cmd1->ExecuteNonQuery();
	MessageBox::Show("Train Timings modified Successfully", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
	conn->Close();
	this->Close();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
