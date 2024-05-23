#pragma once

namespace Project35 {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace System::Data::SqlClient;

 
    public ref class Student : public System::Windows::Forms::Form
    {
    public:
        Student(void)
        {
            InitializeComponent();
        
        }

    protected:
       
        ~Student()
        {
            if (components)
            {
                delete components;
            }
        }


    private: System::Windows::Forms::TextBox^ textBox1;

    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::DataGridView^ dataGridView1;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::TextBox^ textBox2;
    private: System::Windows::Forms::Button^ refreshButton; 


    protected:


    private:
     
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
       
        void InitializeComponent(void)
        {
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
            this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->refreshButton = (gcnew System::Windows::Forms::Button());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
            this->SuspendLayout();
            // 
            // textBox1
            // 
            this->textBox1->Location = System::Drawing::Point(93, 44);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(109, 20);
            this->textBox1->TabIndex = 3;
            this->textBox1->TextChanged += gcnew System::EventHandler(this, &Student::textBox1_TextChanged);
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->Location = System::Drawing::Point(23, 46);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(54, 18);
            this->label1->TabIndex = 5;
            this->label1->Text = L"Name";
            // 
            // dataGridView1
            // 
            this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
                this->Column1,
                    this->Column2
            });
            this->dataGridView1->Location = System::Drawing::Point(305, 12);
            this->dataGridView1->Name = L"dataGridView1";
            this->dataGridView1->Size = System::Drawing::Size(245, 210);
            this->dataGridView1->TabIndex = 6;
            this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Student::dataGridView1_CellContentClick_1);
            // 
            // Column1
            // 
            this->Column1->HeaderText = L"Name";
            this->Column1->Name = L"Column1";
            // 
            // Column2
            // 
            this->Column2->HeaderText = L"Section";
            this->Column2->Name = L"Column2";
            // 
            // button1
            // 
            this->button1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button1->Location = System::Drawing::Point(109, 149);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(75, 23);
            this->button1->TabIndex = 7;
            this->button1->Text = L"Add";
            this->button1->UseVisualStyleBackColor = true;
            this->button1->Click += gcnew System::EventHandler(this, &Student::button1_Click);
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->Location = System::Drawing::Point(15, 95);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(69, 18);
            this->label2->TabIndex = 8;
            this->label2->Text = L"Section";
            // 
            // textBox2
            // 
            this->textBox2->Location = System::Drawing::Point(93, 95);
            this->textBox2->Name = L"textBox2";
            this->textBox2->Size = System::Drawing::Size(109, 20);
            this->textBox2->TabIndex = 9;
            this->textBox2->TextChanged += gcnew System::EventHandler(this, &Student::textBox2_TextChanged);
            // 
            // refreshButton
            // 
            this->refreshButton->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->refreshButton->Location = System::Drawing::Point(100, 190);
            this->refreshButton->Name = L"refreshButton";
            this->refreshButton->Size = System::Drawing::Size(93, 23);
            this->refreshButton->TabIndex = 10;
            this->refreshButton->Text = L"Refresh";
            this->refreshButton->UseVisualStyleBackColor = true;
            this->refreshButton->Click += gcnew System::EventHandler(this, &Student::refreshButton_Click);
            // 
            // Student
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(851, 472);
            this->Controls->Add(this->refreshButton);
            this->Controls->Add(this->textBox2);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->dataGridView1);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->textBox1);
            this->Name = L"Student";
            this->Text = L"Student";
            this->Load += gcnew System::EventHandler(this, &Student::Student_Load);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
    private: System::Void Student_Load(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void dataGridView1_CellContentClick_1(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
    }
    private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }
 private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
    String^ studentName = textBox1->Text;
    String^ studentSection = textBox2->Text;

    String^ connectionString = "Data Source=DESKTOP-R9M0T3R ;Initial Catalog=mydatabase;Integrated Security=True";

    String^ query = "INSERT INTO student (Name, Section) VALUES (@Name, @Section)";

    SqlConnection^ connection = gcnew SqlConnection(connectionString);
    SqlCommand^ command = gcnew SqlCommand(query, connection);

    command->Parameters->AddWithValue("@Name", studentName);
    command->Parameters->AddWithValue("@Section", studentSection);

    try {
        connection->Open();
        command->ExecuteNonQuery();
        MessageBox::Show("Student added successfully!");
    }
    catch (Exception^ ex) {
        MessageBox::Show("An error occurred: " + ex->Message);
    }
    finally {
        connection->Close();
    }

    dataGridView1->Rows->Add(studentName, studentSection);
};

    private: System::Void refreshButton_Click(System::Object^ sender, System::EventArgs^ e) {
        textBox1->Clear();
        textBox2->Clear();
    };
    };
}
