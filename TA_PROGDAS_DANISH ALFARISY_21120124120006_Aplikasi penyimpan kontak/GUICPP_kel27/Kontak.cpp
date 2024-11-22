#include "Kontak.h"

namespace GUICPPkel27 {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace System::Text::RegularExpressions;
    using namespace System::Data::SqlClient;

    Kontak::Kontak(void)
    {
        InitializeComponent();  // Menginisialisasi komponen
    }

    // Destruktor
    Kontak::~Kontak()
    {
        if (components)
        {
            delete components;
        }
    }

    // Inisialisasi komponen UI
    void Kontak::InitializeComponent(void) {
        System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Kontak::typeid));
        this->label1 = (gcnew System::Windows::Forms::Label());
        this->label2 = (gcnew System::Windows::Forms::Label());
        this->label3 = (gcnew System::Windows::Forms::Label());
        this->label4 = (gcnew System::Windows::Forms::Label());
        this->label5 = (gcnew System::Windows::Forms::Label());
        this->label6 = (gcnew System::Windows::Forms::Label());
        this->textBox_nama = (gcnew System::Windows::Forms::TextBox());
        this->textBox_nohp = (gcnew System::Windows::Forms::TextBox());
        this->textBox_alamat_email = (gcnew System::Windows::Forms::TextBox());
        this->comboBox_kelas = (gcnew System::Windows::Forms::ComboBox());
        this->comboBox_angkatan = (gcnew System::Windows::Forms::ComboBox());
        this->comboBox_jurusan = (gcnew System::Windows::Forms::ComboBox());
        this->button_submit = (gcnew System::Windows::Forms::Button());
        this->button_about = (gcnew System::Windows::Forms::Button());
        this->LayOut_hasil = (gcnew System::Windows::Forms::FlowLayoutPanel());
        this->button_exit = (gcnew System::Windows::Forms::Button());
        this->SuspendLayout();
        // 
        // label1
        // 
        this->label1->BackColor = System::Drawing::Color::Transparent;
        this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label1->ForeColor = System::Drawing::SystemColors::ActiveBorder;
        this->label1->Location = System::Drawing::Point(149, 91);
        this->label1->Name = L"label1";
        this->label1->Size = System::Drawing::Size(124, 23);
        this->label1->TabIndex = 30;
        this->label1->Text = L"Name";
        // 
        // label2
        // 
        this->label2->BackColor = System::Drawing::Color::Transparent;
        this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label2->ForeColor = System::Drawing::SystemColors::ActiveBorder;
        this->label2->Location = System::Drawing::Point(149, 146);
        this->label2->Name = L"label2";
        this->label2->Size = System::Drawing::Size(256, 23);
        this->label2->TabIndex = 18;
        this->label2->Text = L" Phone Number";
        // 
        // label3
        // 
        this->label3->BackColor = System::Drawing::Color::Transparent;
        this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label3->ForeColor = System::Drawing::SystemColors::ActiveBorder;
        this->label3->Location = System::Drawing::Point(149, 344);
        this->label3->Name = L"label3";
        this->label3->Size = System::Drawing::Size(100, 23);
        this->label3->TabIndex = 21;
        this->label3->Text = L"Class";
        // 
        // label4
        // 
        this->label4->BackColor = System::Drawing::Color::Transparent;
        this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label4->ForeColor = System::Drawing::SystemColors::ActiveBorder;
        this->label4->Location = System::Drawing::Point(149, 410);
        this->label4->Name = L"label4";
        this->label4->Size = System::Drawing::Size(100, 23);
        this->label4->TabIndex = 23;
        this->label4->Text = L"Year";
        // 
        // label5
        // 
        this->label5->BackColor = System::Drawing::Color::Transparent;
        this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label5->ForeColor = System::Drawing::SystemColors::ActiveBorder;
        this->label5->Location = System::Drawing::Point(149, 274);
        this->label5->Name = L"label5";
        this->label5->Size = System::Drawing::Size(148, 23);
        this->label5->TabIndex = 27;
        this->label5->Text = L"Study Program";
        // 
        // label6
        // 
        this->label6->BackColor = System::Drawing::Color::Transparent;
        this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label6->ForeColor = System::Drawing::SystemColors::ActiveBorder;
        this->label6->Location = System::Drawing::Point(149, 211);
        this->label6->Name = L"label6";
        this->label6->Size = System::Drawing::Size(174, 23);
        this->label6->TabIndex = 25;
        this->label6->Text = L"Email Address ";
        // 
        // textBox_nama
        // 
        this->textBox_nama->Location = System::Drawing::Point(153, 117);
        this->textBox_nama->Name = L"textBox_nama";
        this->textBox_nama->Size = System::Drawing::Size(200, 22);
        this->textBox_nama->TabIndex = 31;
        this->textBox_nama->TextChanged += gcnew System::EventHandler(this, &Kontak::textBox_nama_TextChanged);
        // 
        // textBox_nohp
        // 
        this->textBox_nohp->Location = System::Drawing::Point(153, 172);
        this->textBox_nohp->Name = L"textBox_nohp";
        this->textBox_nohp->Size = System::Drawing::Size(200, 22);
        this->textBox_nohp->TabIndex = 16;
        // 
        // textBox_alamat_email
        // 
        this->textBox_alamat_email->Location = System::Drawing::Point(153, 237);
        this->textBox_alamat_email->Name = L"textBox_alamat_email";
        this->textBox_alamat_email->Size = System::Drawing::Size(200, 22);
        this->textBox_alamat_email->TabIndex = 29;
        // 
        // comboBox_kelas
        // 
        this->comboBox_kelas->FormattingEnabled = true;
        this->comboBox_kelas->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Kelas A", L"Kelas B", L"Kelas C", L"Kelas D" });
        this->comboBox_kelas->Location = System::Drawing::Point(153, 370);
        this->comboBox_kelas->Name = L"comboBox_kelas";
        this->comboBox_kelas->Size = System::Drawing::Size(200, 24);
        this->comboBox_kelas->TabIndex = 22;
        // 
        // comboBox_angkatan
        // 
        this->comboBox_angkatan->FormattingEnabled = true;
        this->comboBox_angkatan->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"2020", L"2021", L"2022", L"2023", L"2024" });
        this->comboBox_angkatan->Location = System::Drawing::Point(153, 436);
        this->comboBox_angkatan->Name = L"comboBox_angkatan";
        this->comboBox_angkatan->Size = System::Drawing::Size(200, 24);
        this->comboBox_angkatan->TabIndex = 24;
        // 
        // comboBox_jurusan
        // 
        this->comboBox_jurusan->FormattingEnabled = true;
        this->comboBox_jurusan->Items->AddRange(gcnew cli::array< System::Object^  >(27) {
            L"Ekonomi Pembangunan", L"Akuntansi", L"Sastra Inggris",
                L"Sastra Jerman", L"Sastra Arab", L"Fisika", L"Biologi", L"Matematika", L"Kedokteran", L"Kedokteran Gigi", L"Gizi", L"Automasi ",
                L"Agribisnis", L"Agroekoteknologi", L"Peternakan", L"Teknik Sipil", L"Teknik Arsitektur", L"Teknik Kimia", L"Teknik Mesin", L"Teknik Elektro",
                L"PWK", L"Teknik Industri", L"Teknik Lingkungan ", L"Teknik Perkapalan", L"Teknik Geodesi", L"Teknik Geologi", L"Teknik Komputer"
        });
        this->comboBox_jurusan->Location = System::Drawing::Point(153, 300);
        this->comboBox_jurusan->Name = L"comboBox_jurusan";
        this->comboBox_jurusan->Size = System::Drawing::Size(200, 24);
        this->comboBox_jurusan->TabIndex = 28;
        // 
        // button_submit
        // 
        this->button_submit->BackColor = System::Drawing::Color::DimGray;
        this->button_submit->Cursor = System::Windows::Forms::Cursors::Hand;
        this->button_submit->Location = System::Drawing::Point(153, 466);
        this->button_submit->Name = L"button_submit";
        this->button_submit->Size = System::Drawing::Size(144, 37);
        this->button_submit->TabIndex = 20;
        this->button_submit->Text = L"Submit";
        this->button_submit->UseVisualStyleBackColor = false;
        this->button_submit->Click += gcnew System::EventHandler(this, &Kontak::button_submit_Click);
        // 
        // button_about
        // 
        this->button_about->BackColor = System::Drawing::Color::DimGray;
        this->button_about->Cursor = System::Windows::Forms::Cursors::Hand;
        this->button_about->Location = System::Drawing::Point(900, 527);
        this->button_about->Name = L"button_about";
        this->button_about->Size = System::Drawing::Size(190, 54);
        this->button_about->TabIndex = 15;
        this->button_about->Text = L"About";
        this->button_about->UseVisualStyleBackColor = false;
        this->button_about->Click += gcnew System::EventHandler(this, &Kontak::button_about_Click);
        // 
        // LayOut_hasil
        // 
        this->LayOut_hasil->AutoScroll = true;
        this->LayOut_hasil->BackColor = System::Drawing::Color::Transparent;
        this->LayOut_hasil->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
        this->LayOut_hasil->ForeColor = System::Drawing::SystemColors::ActiveBorder;
        this->LayOut_hasil->Location = System::Drawing::Point(606, 109);
        this->LayOut_hasil->Name = L"LayOut_hasil";
        this->LayOut_hasil->Size = System::Drawing::Size(357, 376);
        this->LayOut_hasil->TabIndex = 32;
        // 
        // button_exit
        // 
        this->button_exit->BackColor = System::Drawing::Color::DimGray;
        this->button_exit->Cursor = System::Windows::Forms::Cursors::Hand;
        this->button_exit->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
        this->button_exit->ImageKey = L"(none)";
        this->button_exit->Location = System::Drawing::Point(900, 12);
        this->button_exit->Name = L"button_exit";
        this->button_exit->Size = System::Drawing::Size(190, 54);
        this->button_exit->TabIndex = 33;
        this->button_exit->Text = L"Exit";
        this->button_exit->UseVisualStyleBackColor = false;
        this->button_exit->Click += gcnew System::EventHandler(this, &Kontak::button_exit_Click);
        // 
        // Kontak
        // 
        this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
        this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
        this->BackColor = System::Drawing::SystemColors::Control;
        this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
        this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
        this->ClientSize = System::Drawing::Size(1127, 593);
        this->Controls->Add(this->comboBox_angkatan);
        this->Controls->Add(this->label3);
        this->Controls->Add(this->label5);
        this->Controls->Add(this->label6);
        this->Controls->Add(this->comboBox_jurusan);
        this->Controls->Add(this->button_exit);
        this->Controls->Add(this->LayOut_hasil);
        this->Controls->Add(this->button_about);
        this->Controls->Add(this->button_submit);
        this->Controls->Add(this->label4);
        this->Controls->Add(this->comboBox_kelas);
        this->Controls->Add(this->textBox_alamat_email);
        this->Controls->Add(this->textBox_nohp);
        this->Controls->Add(this->label2);
        this->Controls->Add(this->textBox_nama);
        this->Controls->Add(this->label1);
        this->Name = L"Kontak";
        this->Text = L"Kontak";
        this->ResumeLayout(false);
        this->PerformLayout();

    }







    void Kontak::button_submit_Click(System::Object^ sender, System::EventArgs^ e)
    {
        // Mendeklarasikan input yang diambil dari form
        String^ input_nama = textBox_nama->Text;
        String^ input_nohp = textBox_nohp->Text;
        String^ input_alamat_email = textBox_alamat_email->Text;
        String^ opsi_jurusan = comboBox_jurusan->SelectedItem != nullptr ? dynamic_cast<String^>(comboBox_jurusan->SelectedItem) : nullptr;
        String^ opsi_kelas = comboBox_kelas->SelectedItem != nullptr ? dynamic_cast<String^>(comboBox_kelas->SelectedItem) : nullptr;
        String^ opsi_angkatan = comboBox_angkatan->SelectedItem != nullptr ? dynamic_cast<String^>(comboBox_angkatan->SelectedItem) : nullptr;

        // Validasi No HP
        String^ pattern = "^[0-9]{10,15}$";  // 10-15 digit angka
        Regex^ regex = gcnew Regex(pattern);

        if (!regex->IsMatch(input_nohp)) {
            MessageBox::Show("Nomor HP tidak valid. Pastikan hanya angka dan panjangnya antara 10 hingga 15 digit.",
                "Validasi Gagal", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }

        // Menampilkan hasil input dalam label
        Label^ resultLabel = gcnew Label();
        resultLabel->Text = "Nama: " + input_nama + "\nNo HP: " + input_nohp + "\nJurusan: " + opsi_jurusan + "\nAngkatan: " + opsi_angkatan + "\nKelas: " + opsi_kelas + "\nAlamat Email: " + input_alamat_email;
        resultLabel->AutoSize = true;
        resultLabel->Padding = System::Windows::Forms::Padding(0, 5, 0, 5);

        // Menambahkan label ke FlowLayoutPanel
        LayOut_hasil->Controls->Add(resultLabel);

        // Mengosongkan input fields setelah submit
        textBox_nama->Clear();
        comboBox_jurusan->SelectedIndex = -1;
        comboBox_kelas->SelectedIndex = -1;
        comboBox_angkatan->SelectedIndex = -1;
        textBox_nohp->Clear();
        textBox_alamat_email->Clear();
    }

    void Kontak::button_about_Click(System::Object^ sender, System::EventArgs^ e) {
        MessageBox::Show("Ini Adalah Aplikasi Tugas Akhir " + "\nNama : Danish Alfarisy" + "\nNIM : 21120124120006" + "\nJurusan / Angkatan : Tekkom / 2024", "Info", MessageBoxButtons::OK);

    }
    void Kontak::button_exit_Click(System::Object^ sender, System::EventArgs^ e) {
        Application::Exit();

    }

}
