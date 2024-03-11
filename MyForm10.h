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
	/// Summary for MyForm10
	/// </summary>
	public ref class MyForm10 : public System::Windows::Forms::Form
	{
	public:
		String^ as= "";
		String^ Cit = "";
	private: System::Windows::Forms::Button^ button2;
	public:
		String^ ID = "";
		MyForm10(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		MyForm10(String^ NA)
		{
			as= NA;
		}
	

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm10()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm10::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(34, 68);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(108, 39);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Name";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label2->Location = System::Drawing::Point(34, 137);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(78, 39);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Age";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label3->Location = System::Drawing::Point(34, 210);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(121, 39);
			this->label3->TabIndex = 4;
			this->label3->Text = L"CNIC#";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label4->Location = System::Drawing::Point(34, 280);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(138, 39);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Number";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label5->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label5->Location = System::Drawing::Point(34, 351);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(103, 39);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Class";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label6->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label6->Location = System::Drawing::Point(34, 419);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(140, 39);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Seat No";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->textBox1->Location = System::Drawing::Point(297, 274);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(253, 45);
			this->textBox1->TabIndex = 8;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->textBox2->Location = System::Drawing::Point(297, 62);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(253, 45);
			this->textBox2->TabIndex = 9;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->textBox3->Location = System::Drawing::Point(297, 207);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(253, 45);
			this->textBox3->TabIndex = 10;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->textBox4->Location = System::Drawing::Point(297, 131);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(253, 45);
			this->textBox4->TabIndex = 11;
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->textBox5->Location = System::Drawing::Point(297, 345);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(253, 45);
			this->textBox5->TabIndex = 12;
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->textBox6->Location = System::Drawing::Point(297, 419);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(253, 45);
			this->textBox6->TabIndex = 13;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button1->Location = System::Drawing::Point(322, 493);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(164, 69);
			this->button1->TabIndex = 14;
			this->button1->Text = L"Book Now";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm10::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->button2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button2->Location = System::Drawing::Point(554, 493);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(164, 69);
			this->button2->TabIndex = 15;
			this->button2->Text = L"Back";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm10::button2_Click);
			// 
			// MyForm10
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(799, 574);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm10";
			this->Text = L"Passenger\'s Details";
			this->Load += gcnew System::EventHandler(this, &MyForm10::MyForm10_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm10_Load(System::Object^ sender, System::EventArgs^ e) {
		textBox2->Text = as;

	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
		try {
			SqlConnection^ conn = gcnew SqlConnection("Data Source=localhost\\sqlexpress;Initial Catalog=ADMIN;Integrated Security=True");
			conn->Open();

			// Prepare SQL query to select data from Lahore table
			SqlCommand^ cmd = gcnew SqlCommand("SELECT Train_name, Departure_Time, Arrival_Time, Date, E_Fare, F_Fare, B_Fare, Departure, Arrival FROM " + Cit + " WHERE Id=@Id", conn);


			cmd->Parameters->AddWithValue("@id", ID);

			// Execute SQL query and get result set
			SqlDataReader^ reader = cmd->ExecuteReader();
			String^ name;
			String^ DTIme;
			String^ ATime;
			String^ Date;
			String^ Dp;
			String^ Ar;
			int Cls;
			// Check if there is a row returned
			if (reader->Read())
			{
				// Get the value of the UserName column from the current row
				name = reader->GetString(0);
				DTIme = reader->GetString(1);
				ATime = reader->GetString(2);
				Date = reader->GetString(3);
				Dp = reader->GetString(7);
				Ar = reader->GetString(8);
				if (textBox5->Text == "Economy")
				{
					Cls = reader->GetInt32(4);
				}
				else  if (textBox5->Text == "First")
				{
					Cls = reader->GetInt32(5);
				}
				else  if (textBox5->Text == "Business")
				{
					Cls = reader->GetInt32(6);
				}
				else
				{
					MessageBox::Show("Available Train-Classes Are : \n\tBusiness\n\tEconomy\n\tFirst", "Enter Valid Class", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}


			}
			reader->Close();
			String ^Seat = textBox6->Text;
			// Prepare SQL query to select data from Lahore table
			SqlCommand^ cmd2 = gcnew SqlCommand("SELECT * FROM Booked WHERE TrainName=@name AND Dep_Time=@dt AND Arr_Timr=@at AND Seat=@S AND Date=@Date AND Departure=@D AND Arrival=@Ar", conn);
			cmd2->Parameters->AddWithValue("@name", name);
			cmd2->Parameters->AddWithValue("@dt", DTIme);
			cmd2->Parameters->AddWithValue("@at", ATime);
			cmd2->Parameters->AddWithValue("@Date", Date);
			cmd2->Parameters->AddWithValue("@D", Dp);
			cmd2->Parameters->AddWithValue("@Ar", Ar);
			cmd2->Parameters->AddWithValue("@S", Seat);
			// Execute SQL query and get result set
			SqlDataReader^ reader1 = cmd2->ExecuteReader();
			bool Allow = false;
			int seat = System::Convert::ToInt32(textBox6->Text);
			// Check if there is a row returned
			if (!reader1->Read())
			{
				// Get the value of the UserName column from the current row
				Allow = true;

			}

			// Close the reader and the SqlConnection
			reader1->Close();
			
			SqlCommand^ cmd1 = gcnew SqlCommand("INSERT INTO [Booked] (BookedBy, Age, Number, CNIC, TrainName, Seat, Class_Fare, Dep_Time, Arr_Timr, Date, Departure, Arrival ) VALUES (@bookedby, @age, @Num, @Cnic, @Trainname, @Seat, @Class_Fare, @Dep_Time, @Arr_Time, @Date, @D, @Ar);", conn);
			if (textBox5->Text == "Economy" || textBox5->Text == "First" || textBox5->Text == "Business")
			{
				if (textBox6->Text != "" && textBox4->Text != "" && textBox1->Text != "", textBox3->Text != "" && textBox5->Text != "")
				{
					if (textBox4->Text->Length == 2)
					{
						if (textBox2->Text == as)
						{
							if (textBox1->Text->Length == 12)
							{
								if (textBox3->Text->Length == 15)
								{
									if (seat > 0 && seat < 100)
									{
										if (Allow==true)
										{
											cmd1->Parameters->AddWithValue("@BookedBy", as);
											cmd1->Parameters->AddWithValue("@Trainname", name);
											cmd1->Parameters->AddWithValue("@Seat", textBox6->Text);
											cmd1->Parameters->AddWithValue("@Class_Fare", Cls);
											cmd1->Parameters->AddWithValue("@Dep_Time", DTIme);
											cmd1->Parameters->AddWithValue("@Arr_Time", ATime);
											cmd1->Parameters->AddWithValue("@Date", Date);
											cmd1->Parameters->AddWithValue("@D", Dp);
											cmd1->Parameters->AddWithValue("@Ar", Ar);
											cmd1->Parameters->AddWithValue("@age", textBox4->Text);
											cmd1->Parameters->AddWithValue("@Num", textBox1->Text);
											cmd1->Parameters->AddWithValue("@Cnic", textBox3->Text);
											cmd1->ExecuteNonQuery();
											MessageBox::Show("Seat Booked Successfully", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
											this->Close();
											conn->Close();
										}
										else
										{
											MessageBox::Show("Seat is Already Booked\nChoose Any other Seat", "Error", MessageBoxButtons::OK, MessageBoxIcon::Information);
										}
									}
									else
									{
										MessageBox::Show("Seat Number Is Invalid\nSeats Available Are 1 to 100", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
									}
								}
								else
								{
									MessageBox::Show("CNIC# Should be of the Pattern. 33101-2345678-9", "Invalid CNIC", MessageBoxButtons::OK, MessageBoxIcon::Error);
								}
							}
							else
							{
								MessageBox::Show("Number Should be of the Pattern. 0312-3456789", "Invalid Number", MessageBoxButtons::OK, MessageBoxIcon::Error);
							}
						}
						else
						{
							MessageBox::Show("Name Should be same as Username", "Invalid Name", MessageBoxButtons::OK, MessageBoxIcon::Error);
						}
					}
					else
					{
						MessageBox::Show("User of age less than 10 or greater than 99 cannot Book Tickets", "Enter Valid Age", MessageBoxButtons::OK, MessageBoxIcon::Information);
					}
				}
				else
				{
					MessageBox::Show("Please Fill all the Data", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}







		}
		catch(SqlException^e)
		{
			MessageBox::Show(e->Message);
		}
		
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
