#include "Registration.h"

namespace GUICPPkel27 {

    // Konstruktor
    Registration::Registration(void)
    {
        InitializeComponent();  // Menginisialisasi komponen
    }

    // Destruktor
    Registration::~Registration()
    {
        if (components)
        {
            delete components;
        }
    }

    // Inisialisasi komponen UI
    void Registration::InitializeComponent(void)
    {
        System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Registration::typeid));
        this->label3 = (gcnew System::Windows::Forms::Label());
        this->textBox_username = (gcnew System::Windows::Forms::TextBox());
        this->textBox_password = (gcnew System::Windows::Forms::TextBox());
        this->button_login = (gcnew System::Windows::Forms::Button());
        this->button_about = (gcnew System::Windows::Forms::Button());
        this->button_submit = (gcnew System::Windows::Forms::Button());
        this->button_exit = (gcnew System::Windows::Forms::Button());
        this->SuspendLayout();
        // 
        // label3
        // 
        this->label3->AutoSize = true;
        this->label3->BackColor = System::Drawing::Color::Transparent;
        this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label3->ForeColor = System::Drawing::SystemColors::ButtonFace;
        this->label3->Location = System::Drawing::Point(428, 230);
        this->label3->Name = L"label3";
        this->label3->Size = System::Drawing::Size(174, 26);
        this->label3->TabIndex = 0;
        this->label3->Text = L"REGISTRATION";
        // 
        // textBox_username
        // 
        this->textBox_username->Location = System::Drawing::Point(372, 344);
        this->textBox_username->Name = L"textBox_username";
        this->textBox_username->Size = System::Drawing::Size(200, 22);
        this->textBox_username->TabIndex = 5;
        this->textBox_username->TextChanged += gcnew System::EventHandler(this, &Registration::textBox_username_TextChanged);
        // 
        // textBox_password
        // 
        this->textBox_password->Location = System::Drawing::Point(372, 413);
        this->textBox_password->Name = L"textBox_password";
        this->textBox_password->PasswordChar = '*';
        this->textBox_password->Size = System::Drawing::Size(200, 22);
        this->textBox_password->TabIndex = 4;
        this->textBox_password->TextChanged += gcnew System::EventHandler(this, &Registration::textBox_password_TextChanged);
        // 
        // button_login
        // 
        this->button_login->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
        this->button_login->Cursor = System::Windows::Forms::Cursors::Hand;
        this->button_login->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
        this->button_login->Location = System::Drawing::Point(795, 475);
        this->button_login->Name = L"button_login";
        this->button_login->Size = System::Drawing::Size(190, 54);
        this->button_login->TabIndex = 3;
        this->button_login->Text = L"Log In";
        this->button_login->UseVisualStyleBackColor = false;
        this->button_login->Click += gcnew System::EventHandler(this, &Registration::buttonlogin_Click);
        // 
        // button_about
        // 
        this->button_about->BackColor = System::Drawing::Color::DimGray;
        this->button_about->Cursor = System::Windows::Forms::Cursors::Hand;
        this->button_about->Location = System::Drawing::Point(30, 466);
        this->button_about->Name = L"button_about";
        this->button_about->Size = System::Drawing::Size(152, 54);
        this->button_about->TabIndex = 2;
        this->button_about->Text = L"About";
        this->button_about->UseMnemonic = false;
        this->button_about->UseVisualStyleBackColor = false;
        this->button_about->Click += gcnew System::EventHandler(this, &Registration::button_about_Click);
        // 
        // button_submit
        // 
        this->button_submit->BackColor = System::Drawing::Color::DimGray;
        this->button_submit->Cursor = System::Windows::Forms::Cursors::Hand;
        this->button_submit->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
        this->button_submit->Location = System::Drawing::Point(372, 466);
        this->button_submit->Name = L"button_submit";
        this->button_submit->Size = System::Drawing::Size(162, 54);
        this->button_submit->TabIndex = 1;
        this->button_submit->Text = L"Submit";
        this->button_submit->UseVisualStyleBackColor = false;
        this->button_submit->Click += gcnew System::EventHandler(this, &Registration::button_submit_Click);
        // 
        // button_exit
        // 
        this->button_exit->BackColor = System::Drawing::Color::Gray;
        this->button_exit->Cursor = System::Windows::Forms::Cursors::Hand;
        this->button_exit->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
        this->button_exit->ImageKey = L"(none)";
        this->button_exit->Location = System::Drawing::Point(813, 26);
        this->button_exit->Name = L"button_exit";
        this->button_exit->Size = System::Drawing::Size(190, 54);
        this->button_exit->TabIndex = 8;
        this->button_exit->Text = L"Exit";
        this->button_exit->UseVisualStyleBackColor = false;
        this->button_exit->Click += gcnew System::EventHandler(this, &Registration::button_exit_Click);
        // 
        // Registration
        // 
        this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Inherit;
        this->BackColor = System::Drawing::SystemColors::Control;
        this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
        this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
        this->ClientSize = System::Drawing::Size(1033, 563);
        this->Controls->Add(this->button_exit);
        this->Controls->Add(this->label3);
        this->Controls->Add(this->button_submit);
        this->Controls->Add(this->button_about);
        this->Controls->Add(this->button_login);
        this->Controls->Add(this->textBox_password);
        this->Controls->Add(this->textBox_username);
        this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
        this->Name = L"Registration";
        this->Text = L"Registration Form";
        this->Load += gcnew System::EventHandler(this, &Registration::MyForm_Load);
        this->ResumeLayout(false);
        this->PerformLayout();

    }

    // Event handler untuk klik tombol login
    void Registration::buttonlogin_Click(System::Object^ sender, System::EventArgs^ e)
    {
        Login^ login = gcnew Login("Danish Alfarisy", "123");
        login->Show();
        this->Hide();
    }

    void Registration::button_submit_Click(System::Object^ sender, System::EventArgs^ e)
    {
        String^ username = textBox_username->Text;
        String^ password = textBox_password->Text;

        if (String::IsNullOrWhiteSpace(username) || String::IsNullOrWhiteSpace(password)) {
            MessageBox::Show("Username atau Password tidak boleh kosong.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
        else {
            if (username->Length < 5) {
                MessageBox::Show("Username minimal 5 karakter", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
                return;
            }
            else {
                MessageBox::Show("Registrasi berhasil!\nUsername: " + username + "\nPassword: " + password, "Registrasi Sukses", MessageBoxButtons::OK, MessageBoxIcon::Information);
                Kontak^ kontak = gcnew Kontak();
                kontak->Show();
                this->Hide();
            }
        }
    }

    void Registration::button_about_Click(System::Object^ sender, System::EventArgs^ e) {
        MessageBox::Show("Ini Adalah Aplikasi Tugas Akhir " + "\nNama : Danish Alfarisy" + "\nNIM : 21120124120006" + "\nJurusan / Angkatan : Tekkom / 2024", "Info", MessageBoxButtons::OK);

    }

    void Registration::button_exit_Click(System::Object^ sender, System::EventArgs^ e) {
        Application::Exit();

    }

    // Event handler untuk perubahan teks di textBox_username
    void Registration::textBox_username_TextChanged(System::Object^ sender, System::EventArgs^ e) {}

    // Event handler untuk tombol submit
   

    // Event handler untuk form load
    void Registration::MyForm_Load(System::Object^ sender, System::EventArgs^ e) {}
}
