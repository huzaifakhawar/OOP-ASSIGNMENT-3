#pragma once

namespace Project35 {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace System::Data::SqlClient;

    public ref class Rooms : public System::Windows::Forms::Form
    {
    public:
        Rooms(void)
        {
            InitializeComponent();
        }

    protected:
        ~Rooms()
        {
            if (components)
            {
                delete components;
            }
        }

    private: System::Windows::Forms::DataGridView^ dataGridView1;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::TextBox^ textBox1;
    private: System::Windows::Forms::TextBox^ textBox2;
    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::Button^ refreshButton;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;

    protected:
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
            this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->refreshButton = (gcnew System::Windows::Forms::Button());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
            this->SuspendLayout();
            // 
            // dataGridView1
            // 
            this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
                this->Column1,
                    this->Column2
            });
            this->dataGridView1->Location = System::Drawing::Point(286, 26);
            this->dataGridView1->Name = L"dataGridView1";
            this->dataGridView1->Size = System::Drawing::Size(245, 210);
            this->dataGridView1->TabIndex = 8;
            this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Rooms::dataGridView1_CellContentClick);
            // 
            // Column1
            // 
            this->Column1->HeaderText = L"Subject";
            this->Column1->Name = L"Column1";
            // 
            // Column2
            // 
            this->Column2->HeaderText = L"Room No";
            this->Column2->Name = L"Column2";
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->Location = System::Drawing::Point(5, 53);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(69, 18);
            this->label1->TabIndex = 9;
            this->label1->Text = L"Subject";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->Location = System::Drawing::Point(5, 102);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(80, 18);
            this->label2->TabIndex = 10;
            this->label2->Text = L"Room No";
            // 
            // textBox1
            // 
            this->textBox1->Location = System::Drawing::Point(90, 51);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(109, 20);
            this->textBox1->TabIndex = 11;
            // 
            // textBox2
            // 
            this->textBox2->Location = System::Drawing::Point(90, 102);
            this->textBox2->Name = L"textBox2";
            this->textBox2->Size = System::Drawing::Size(109, 20);
            this->textBox2->TabIndex = 12;
            // 
            // button1
            // 
            this->button1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button1->Location = System::Drawing::Point(116, 154);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(75, 23);
            this->button1->TabIndex = 13;
            this->button1->Text = L"Add";
            this->button1->UseVisualStyleBackColor = true;
            this->button1->Click += gcnew System::EventHandler(this, &Rooms::button1_Click);
            // 
            // refreshButton
            // 
            this->refreshButton->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->refreshButton->Location = System::Drawing::Point(109, 203);
            this->refreshButton->Name = L"refreshButton";
            this->refreshButton->Size = System::Drawing::Size(93, 23);
            this->refreshButton->TabIndex = 14;
            this->refreshButton->Text = L"Refresh";
            this->refreshButton->UseVisualStyleBackColor = true;
            this->refreshButton->Click += gcnew System::EventHandler(this, &Rooms::refreshButton_Click);
            // 
            // Rooms
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(801, 537);
            this->Controls->Add(this->refreshButton);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->textBox2);
            this->Controls->Add(this->textBox1);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->dataGridView1);
            this->Name = L"Rooms";
            this->Text = L"Rooms";
            this->Load += gcnew System::EventHandler(this, &Rooms::Rooms_Load);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

    private: System::Void Rooms_Load(System::Object^ sender, System::EventArgs^ e) {
        // Connection string
        String^ connectionString = "Data Source=DESKTOP-R9M0T3R;Initial Catalog=mydatabase;Integrated Security=True";

        // SQL select command
        String^ query = "SELECT Subject, RoomNo FROM Rooms";

        // Create connection and command objects
        SqlConnection^ connection = gcnew SqlConnection(connectionString);
        SqlCommand^ command = gcnew SqlCommand(query, connection);

        try {
            connection->Open();
            SqlDataReader^ reader = command->ExecuteReader();

            // Clear existing rows
            dataGridView1->Rows->Clear();

            // Populate DataGridView with data from the database
            while (reader->Read()) {
                dataGridView1->Rows->Add(reader["Subject"]->ToString(), reader["RoomNo"]->ToString());
            }

            reader->Close();
        }
        catch (Exception^ ex) {
            MessageBox::Show(ex->Message);
        }
        finally {
            connection->Close();
        }
    }

    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
        // Connection string
        String^ connectionString = "Data Source=DESKTOP-R9M0T3R;Initial Catalog=mydatabase;Integrated Security=True";

        // SQL insert command
        String^ query = "INSERT INTO Rooms(Subject, RoomNo) VALUES (@Subject, @RoomNo)";

        // Create connection and command objects
        SqlConnection^ connection = gcnew SqlConnection(connectionString);
        SqlCommand^ command = gcnew SqlCommand(query, connection);

        // Add parameters
        command->Parameters->AddWithValue("@Subject", textBox1->Text);
        command->Parameters->AddWithValue("@RoomNo", textBox2->Text);

        try {
            connection->Open();
            command->ExecuteNonQuery();
            MessageBox::Show("Room added successfully!");
        }
        catch (Exception^ ex) {
            MessageBox::Show(ex->Message);
        }
        finally {
            connection->Close();
        }
    }

    private: System::Void refreshButton_Click(System::Object^ sender, System::EventArgs^ e) {
        Rooms_Load(sender, e);
    }

    private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
    }
    private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }

    private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }
    };
}
