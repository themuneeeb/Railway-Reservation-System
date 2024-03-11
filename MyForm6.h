#pragma once
#include "MyForm9.h"
namespace R {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for MyForm6
	/// </summary>
	public ref class MyForm6 : public System::Windows::Forms::Form
	{
	public:
		String^ US = "";
		MyForm6(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		MyForm6(String^ name)
		{
			US = name;
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm6()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:

	protected:

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;




	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm6::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DimGray;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Location = System::Drawing::Point(610, 18);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(164, 69);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Search";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm6::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(39, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(236, 39);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Departure City";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm6::label1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->textBox1->Location = System::Drawing::Point(309, 24);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(253, 45);
			this->textBox1->TabIndex = 2;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm6::textBox1_TextChanged);
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
			this->dataGridView1->Location = System::Drawing::Point(2, 125);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(797, 224);
			this->dataGridView1->TabIndex = 7;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm6::dataGridView1_CellContentClick);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::DimGray;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->button2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button2->Location = System::Drawing::Point(329, 384);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(164, 86);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Back";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm6::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::DimGray;
			this->button3->Enabled = false;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->button3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button3->Location = System::Drawing::Point(801, 462);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(164, 86);
			this->button3->TabIndex = 9;
			this->button3->Text = L"Book Now";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm6::button3_Click);
			// 
			// MyForm6
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1067, 683);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm6";
			this->Text = L"Search Train";
			this->Load += gcnew System::EventHandler(this, &MyForm6::MyForm6_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
		
		try {
			button3->Enabled = true;
			String^ sqlconnection = "Data Source=localhost\\sqlexpress;Initial Catalog=ADMIN;Integrated Security=True";
			SqlConnection  sqlconn(sqlconnection);
			sqlconn.Open();
			String^ SqlQuery = "SELECT * FROM " + textBox1->Text;
			SqlCommand^ cmd = gcnew SqlCommand(SqlQuery,% sqlconn);
			SqlDataAdapter^ adapter = gcnew SqlDataAdapter(cmd);
			DataSet^ dataset = gcnew DataSet();
			adapter->Fill(dataset, SqlQuery);
			
			dataGridView1->DataSource = dataset->Tables[SqlQuery];
			
		}
		catch (SqlException^ex)
		{
			button3->Enabled = false;
			if (textBox1->Text->Length != 0)
				MessageBox::Show("Please Make Sure You have Entered Correct Departure City.The FIRST Letter Should be CAPITAL and rest Should be small LIKE:\n\tLahore", "Enter Valid City", MessageBoxButtons::OK, MessageBoxIcon::Error);
			else
				MessageBox::Show("Enter Departure City", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm9^ F = gcnew MyForm9();
	F->name = US;
	this->Close();
	F->Show();
	
}
private: System::Void MyForm6_Load(System::Object^ sender, System::EventArgs^ e) {
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
};
}
