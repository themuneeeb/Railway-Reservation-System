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
	/// Summary for MyForm17
	/// </summary>
	public ref class MyForm17 : public System::Windows::Forms::Form
	{
	public:
		MyForm17(void)
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
		~MyForm17()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label2;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm17::typeid));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.8F));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(155, 401);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(296, 44);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Total Earnings =";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::DimGray;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.8F));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(455, 401);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(150, 44);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Earning";
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
			this->dataGridView1->Location = System::Drawing::Point(-1, 1);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(1080, 371);
			this->dataGridView1->TabIndex = 9;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DimGray;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button1->Location = System::Drawing::Point(840, 488);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(151, 83);
			this->button1->TabIndex = 17;
			this->button1->Text = L"Back";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm17::button1_Click);
			// 
			// MyForm17
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1067, 683);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm17";
			this->Text = L"Revenue Report";
			this->Load += gcnew System::EventHandler(this, &MyForm17::MyForm17_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm17_Load(System::Object^ sender, System::EventArgs^ e) {
		String^ SQL = "Data Source=localhost\\sqlexpress;Initial Catalog=ADMIN;Integrated Security=True";
		SqlConnection ^sql =gcnew  SqlConnection(SQL);
		sql->Open();
		String^ Query = "SELECT Class_Fare FROM Booked";
		SqlCommand^ cmd = gcnew SqlCommand(Query, sql);
		SqlDataReader^ reader = cmd->ExecuteReader();
		int sum =0;
		while (reader->Read())
		{
			sum += reader->GetInt32(0);
		}
		reader->Close();
		label1->Text = sum.ToString();
		try {
			String^ sqlconnection = "Data Source=localhost\\sqlexpress;Initial Catalog=ADMIN;Integrated Security=True";
			SqlConnection  sqlconn(sqlconnection);
			sqlconn.Open();
			String^ SqlQuery = "SELECT * FROM Booked ";
			SqlCommand^ cmd = gcnew SqlCommand(SqlQuery, % sqlconn);

			SqlDataAdapter^ adapter = gcnew SqlDataAdapter(cmd);
			DataSet^ dataset = gcnew DataSet();
			adapter->Fill(dataset, SqlQuery);

			dataGridView1->DataSource = dataset->Tables[SqlQuery];

		}
		catch (SqlException^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};
}
