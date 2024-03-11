#pragma once
#include"MyForm10.h"
#include"MyForm11.h"
namespace R {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for MyForm9
	/// </summary>
	public ref class MyForm9 : public System::Windows::Forms::Form
	{
	public:
		String^ name = "";
		MyForm9(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		MyForm9(String^ NA)
		{
			name = NA;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm9()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm9::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(12, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(236, 39);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Departure City";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->textBox1->Location = System::Drawing::Point(297, 21);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(253, 45);
			this->textBox1->TabIndex = 3;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm9::textBox1_TextChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DimGray;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Location = System::Drawing::Point(605, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(164, 69);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Search";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm9::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ActiveBorder;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->GridColor = System::Drawing::SystemColors::Control;
			this->dataGridView1->Location = System::Drawing::Point(2, 128);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(797, 224);
			this->dataGridView1->TabIndex = 8;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label2->Location = System::Drawing::Point(60, 368);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(678, 39);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Enter Id of the train You want to Book Ticket";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->textBox2->Location = System::Drawing::Point(322, 420);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(120, 45);
			this->textBox2->TabIndex = 10;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::DimGray;
			this->button2->Enabled = false;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->button2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button2->Location = System::Drawing::Point(297, 482);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(164, 69);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Book ";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm9::button2_Click_1);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::DimGray;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->button3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button3->Location = System::Drawing::Point(818, 195);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(164, 69);
			this->button3->TabIndex = 12;
			this->button3->Text = L"Back";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm9::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::DimGray;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->button4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button4->Location = System::Drawing::Point(695, 486);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(164, 69);
			this->button4->TabIndex = 13;
			this->button4->Text = L"View Booked Tickets";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm9::button4_Click);
			// 
			// MyForm9
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1067, 683);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm9";
			this->Text = L"Book Tickets";
			this->Load += gcnew System::EventHandler(this, &MyForm9::MyForm9_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		button2->Enabled = true;
		try {
			String^ sqlconnection = "Data Source=localhost\\sqlexpress;Initial Catalog=ADMIN;Integrated Security=True";
			SqlConnection  sqlconn(sqlconnection);
			sqlconn.Open();
			String^ SqlQuery = "SELECT * FROM " + textBox1->Text;
			SqlCommand^ cmd = gcnew SqlCommand(SqlQuery, % sqlconn);
			SqlDataAdapter^ adapter = gcnew SqlDataAdapter(cmd);
			DataSet^ dataset = gcnew DataSet();
			adapter->Fill(dataset, SqlQuery);

			dataGridView1->DataSource = dataset->Tables[SqlQuery];


		}
		catch (SqlException^ ex)
		{
			if (textBox1->Text->Length != 0)
				MessageBox::Show("Please Make Sure You have Entered Correct Departure City.The FIRST Letter Should be CAPITAL and rest Should be small LIKE:\n\tLahore", "Enter Valid City", MessageBoxButtons::OK, MessageBoxIcon::Error);
			else
				MessageBox::Show("Enter Departure City", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			button2->Enabled=false;
		}
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	// Define the connection string
	try {
		 
		String^ Id = textBox2->Text;
		// Define the SQL query to delete a row
		String^ City = textBox1->Text;

		String^ sqlconnection = "Data Source=localhost\\sqlexpress;Initial Catalog=ADMIN;Integrated Security=True";
		SqlConnection  sqlconn(sqlconnection);
		sqlconn.Open();
		String^ SqlQuery = "SELECT * FROM " + textBox1->Text + " WHERE Id=@Id";
		SqlCommand command(SqlQuery, % sqlconn);
		command.Parameters->AddWithValue("@Id", Id);
		
		SqlDataReader^ Reader = command.ExecuteReader();
		if (Reader->Read())
		{
			this->Close();
			MyForm10^ F = gcnew MyForm10();
			F->as = name;
			F->ID = Id;
			F->Cit = City;
			F->Show();
		}
		else
		{
			MessageBox::Show("Incorrect Username or Password", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	catch (SqlException^ e)
	{
		MessageBox::Show(e->Message);
	}
}
private: System::Void MyForm9_Load(System::Object^ sender, System::EventArgs^ e) {
	// SQL JOIN query to combine data from two tables
	String^ sqlconnection = "Data Source=localhost\\sqlexpress;Initial Catalog=ADMIN;Integrated Security=True";
	SqlConnection  sqlconn(sqlconnection);
	sqlconn.Open();

	String^ query = "SELECT * FROM Lahore UNION SELECT * FROM Multan UNION SELECT * FROM Faisalabad UNION SELECT * FROM Hyderabad UNION SELECT * FROM Islamabad UNION SELECT * FROM Karachi UNION SELECT * FROM Peshawar UNION SELECT * FROM Quetta UNION SELECT * FROM Sargodha UNION SELECT * FROM Sialkot UNION SELECT * FROM Bahawalnagar UNION SELECT * FROM Bahawalpur UNION SELECT * FROM Chiniot UNION SELECT * FROM Deraghazikhan UNION SELECT * FROM Gujranwala UNION SELECT * FROM Gujrat UNION SELECT * FROM Jhang UNION SELECT * FROM Kasur UNION SELECT * FROM Khanewal UNION SELECT * FROM Larkana UNION SELECT * FROM Mardan UNION SELECT * FROM Muzaffarabad UNION SELECT * FROM Okara UNION SELECT * FROM Pakpattan UNION SELECT * FROM Sadiqabad UNION SELECT * FROM Sahiwal UNION SELECT * FROM Sukkur UNION SELECT * FROM Rawalpindi";

	// Create a new SqlCommand object using the query and connection objects
	SqlCommand^ command = gcnew SqlCommand(query, % sqlconn);

	// Create a new SqlDataAdapter object using the SqlCommand object
	SqlDataAdapter^ adapter = gcnew SqlDataAdapter(command);

	// Create a new DataTable object to hold the result set
	DataTable^ table = gcnew DataTable();

	// Use the SqlDataAdapter object to fill the DataTable object with data from the SQL query
	adapter->Fill(table);

	// Bind the DataTable object to your datagrid
	dataGridView1->DataSource = table;

}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	// Define the connection string
	try {

		String^ Id = textBox2->Text;
		// Define the SQL query to delete a row
		String^ City = textBox1->Text;

		String^ sqlconnection = "Data Source=localhost\\sqlexpress;Initial Catalog=ADMIN;Integrated Security=True";
		SqlConnection  sqlconn(sqlconnection);
		sqlconn.Open();
		String^ SqlQuery = "SELECT * FROM " + textBox1->Text + " WHERE Id=@Id";
		SqlCommand command(SqlQuery, % sqlconn);
		command.Parameters->AddWithValue("@Id", Id);

		SqlDataReader^ Reader = command.ExecuteReader();
		if (Reader->Read())
		{
			this->Close();
			MyForm10^ F = gcnew MyForm10();
			F->as = name;
			F->ID = Id;
			F->Cit = City;
			F->Show();
		}
		else
		{
			MessageBox::Show("Enter Correct ID of Train", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	catch (SqlException^ e)
	{
		MessageBox::Show(e->Message);
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm11^ F = gcnew MyForm11();
	F->N = name;

	F->Show();
}
};
}
