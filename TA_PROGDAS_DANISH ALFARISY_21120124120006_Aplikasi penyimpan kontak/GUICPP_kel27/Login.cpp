#include "login.h"

namespace GUICPPkel27 {

    Login::Login(String^ username, String^ password)
    {
        InitializeComponent();
        this->stored_username = username;
        this->stored_password = password;
    }

    Login::~Login()
    {
        if (components)
        {
            delete components;
        }
    }

    // Inisialisasi Komponen UI
    void Login::InitializeComponent(void) {
        System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Login::typeid));
        this->textBox_username = (gcnew System::Windows::Forms::TextBox());
        this->textBox_password = (gcnew System::Windows::Forms::TextBox());
        this->button_exit = (gcnew System::Windows::Forms::Button());
        this->button_about = (gcnew System::Windows::Forms::Button());
        this->label3 = (gcnew System::Windows::Forms::Label());
        this->button_submit = (gcnew System::Windows::Forms::Button());
        this->SuspendLayout();
        // 
        // textBox_username
        // 
        this->textBox_username->Location = System::Drawing::Point(399, 366);
        this->textBox_username->Name = L"textBox_username";
        this->textBox_username->Size = System::Drawing::Size(200, 22);
        this->textBox_username->TabIndex = 16;
        // 
        // textBox_password
        // 
        this->textBox_password->Location = System::Drawing::Point(399, 432);
        this->textBox_password->Name = L"textBox_password";
        this->textBox_password->PasswordChar = '*';
        this->textBox_password->Size = System::Drawing::Size(200, 22);
        this->textBox_password->TabIndex = 15;
        this->textBox_password->TextChanged += gcnew System::EventHandler(this, &Login::textBox_password_TextChanged);
        // 
        // button_exit
        // 
        this->button_exit->BackColor = System::Drawing::Color::DimGray;
        this->button_exit->Cursor = System::Windows::Forms::Cursors::Hand;
        this->button_exit->Location = System::Drawing::Point(890, 497);
        this->button_exit->Name = L"button_exit";
        this->button_exit->Size = System::Drawing::Size(190, 54);
        this->button_exit->TabIndex = 13;
        this->button_exit->Text = L"Exit";
        this->button_exit->UseVisualStyleBackColor = false;
        this->button_exit->Click += gcnew System::EventHandler(this, &Login::button_exit_Click);
        // 
        // button_about
        // 
        this->button_about->BackColor = System::Drawing::Color::DimGray;
        this->button_about->Cursor = System::Windows::Forms::Cursors::Hand;
        this->button_about->Location = System::Drawing::Point(36, 497);
        this->button_about->Name = L"button_about";
        this->button_about->Size = System::Drawing::Size(148, 54);
        this->button_about->TabIndex = 14;
        this->button_about->Text = L"About";
        this->button_about->UseVisualStyleBackColor = false;
        this->button_about->Click += gcnew System::EventHandler(this, &Login::button_about_Click);
        // 
        // label3
        // 
        this->label3->AutoSize = true;
        this->label3->BackColor = System::Drawing::Color::Transparent;
        this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label3->ForeColor = System::Drawing::SystemColors::ActiveCaption;
        this->label3->Location = System::Drawing::Point(511, 246);
        this->label3->Name = L"label3";
        this->label3->Size = System::Drawing::Size(88, 26);
        this->label3->TabIndex = 20;
        this->label3->Text = L"LOG IN";
        // 
        // button_submit
        // 
        this->button_submit->BackColor = System::Drawing::Color::DimGray;
        this->button_submit->Cursor = System::Windows::Forms::Cursors::Hand;
        this->button_submit->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
        this->button_submit->Location = System::Drawing::Point(399, 486);
        this->button_submit->Name = L"button_submit";
        this->button_submit->Size = System::Drawing::Size(162, 54);
        this->button_submit->TabIndex = 21;
        this->button_submit->Text = L"Submit";
        this->button_submit->UseVisualStyleBackColor = false;
        this->button_submit->Click += gcnew System::EventHandler(this, &Login::button_submit_Click);
        // 
        // Login
        // 
        this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Inherit;
        this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
        this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
        this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
        this->ClientSize = System::Drawing::Size(1122, 603);
        this->Controls->Add(this->button_submit);
        this->Controls->Add(this->label3);
        this->Controls->Add(this->button_about);
        this->Controls->Add(this->button_exit);
        this->Controls->Add(this->textBox_password);
        this->Controls->Add(this->textBox_username);
        this->Name = L"Login";
        this->Text = L"LOG IN";
        this->ResumeLayout(false);
        this->PerformLayout();

    }


    void Login::button_exit_Click(System::Object^ sender, System::EventArgs^ e) {
        Application::Exit();
    
    }
    void Login::button_about_Click(System::Object^ sender, System::EventArgs^ e) {
        MessageBox::Show("Ini Adalah Aplikasi Tugas Akhir " + "\nNama : Danish Alfarisy" + "\nNIM : 21120124120006" + "\nJurusan / Angkatan : Tekkom / 2024", "Info", MessageBoxButtons::OK);
    }

    void Login::button_submit_Click(System::Object^ sender, System::EventArgs^ e) {
        String^ input_username = textBox_username->Text;
        String^ input_password = textBox_password->Text;

        // Validate login
        if (input_username == stored_username && input_password == stored_password) {
            MessageBox::Show("Selamat Datang Kembali Danish Alfarisy", "Login berhasil!", MessageBoxButtons::OK, MessageBoxIcon::Information);
            Kontak^ kontak = gcnew Kontak();
            kontak->Show();
            this->Hide();
        }
        else {
            MessageBox::Show("Username atau Password salah. Silakan coba lagi.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }

        // Clear input fields
        textBox_username->Clear();
        textBox_password->Clear();
    }

}
