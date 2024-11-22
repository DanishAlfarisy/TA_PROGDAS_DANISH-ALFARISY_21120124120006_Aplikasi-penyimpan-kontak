#pragma once


namespace GUICPPkel27 {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace System::Text::RegularExpressions;
    using namespace System::Data::SqlClient;

    /// <summary>
    /// Summary for MyForm2
    /// </summary>
    public ref class Kontak : public System::Windows::Forms::Form
    {
    public:
        Kontak(void);     // Konstruktor
        ~Kontak();        // Destruktor

    
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::Label^ label6;

    private: System::Windows::Forms::TextBox^ textBox_nama;
    private: System::Windows::Forms::TextBox^ textBox_nohp;
    private: System::Windows::Forms::TextBox^ textBox_alamat_email;

    private: System::Windows::Forms::ComboBox^ comboBox_kelas;
    private: System::Windows::Forms::ComboBox^ comboBox_angkatan;
    private: System::Windows::Forms::ComboBox^ comboBox_jurusan;

    private: System::Windows::Forms::Button^ button_submit;
    private: System::Windows::Forms::Button^ button_about;

    private: System::Windows::Forms::FlowLayoutPanel^ LayOut_hasil;
    private: System::Windows::Forms::Button^ button_exit;
    private:System::ComponentModel::Container^ components;
    protected:


#pragma region Windows Form Designer generated code
        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        void InitializeComponent(void);
        void button_submit_Click(System::Object^ sender, System::EventArgs^ e);
        void button_about_Click(System::Object^ sender, System::EventArgs^ e);
        void button_exit_Click(System::Object^ sender, System::EventArgs^ e);
    
   
   
    
    private: System::Void textBox_nama_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }
    };
}

