#pragma once
#include"MyForm14.h"
namespace R {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for MyForm13
	/// </summary>
	public ref class MyForm13 : public System::Windows::Forms::Form
	{
	public:
		MyForm13(void)
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
		~MyForm13()
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

	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button3;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm13::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
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
			this->label1->Location = System::Drawing::Point(22, 19);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(190, 31);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Departure City";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->textBox1->Location = System::Drawing::Point(203, 14);
			this->textBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(191, 38);
			this->textBox1->TabIndex = 4;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DimGray;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Location = System::Drawing::Point(470, 6);
			this->button1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(104, 56);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Search";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm13::button1_Click);
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
			this->dataGridView1->Location = System::Drawing::Point(2, 100);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(601, 182);
			this->dataGridView1->TabIndex = 9;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->textBox2->Location = System::Drawing::Point(386, 295);
			this->textBox2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(74, 38);
			this->textBox2->TabIndex = 11;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::DimGray;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->button2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button2->Location = System::Drawing::Point(470, 287);
			this->button2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(133, 56);
			this->button2->TabIndex = 12;
			this->button2->Text = L"Modify \r\nFare";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm13::button2_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label2->Location = System::Drawing::Point(9, 297);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(377, 31);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Enter The ID Number of Train ";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::DimGray;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->button3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button3->Location = System::Drawing::Point(620, 143);
			this->button3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(104, 72);
			this->button3->TabIndex = 14;
			this->button3->Text = L"Back";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm13::button3_Click);
			// 
			// MyForm13
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(800, 427);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"MyForm13";
			this->Text = L"Modify Train Fare";
			this->Load += gcnew System::EventHandler(this, &MyForm13::MyForm13_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
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
			button2->Enabled = true;
		}
		catch (SqlException^ ex)
		{
			if (textBox1->Text->Length != 0)
				MessageBox::Show("Please Make Sure You have Entered Correct Departure City.The FIRST Letter Should be CAPITAL and rest Should be small LIKE:\n\tLahore", "Enter Valid City", MessageBoxButtons::OK, MessageBoxIcon::Error);
			else
				MessageBox::Show("Enter Departure City", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm14^ F = gcnew MyForm14();
	F->I = textBox2->Text;
	F->C = textBox1->Text;
	F->Show();
}
private: System::Void MyForm13_Load(System::Object^ sender, System::EventArgs^ e) {
	button2->Enabled = false;
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
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
