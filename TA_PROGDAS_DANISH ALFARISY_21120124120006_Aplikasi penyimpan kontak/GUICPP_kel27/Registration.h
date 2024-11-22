#pragma once

#include "Login.h" 
#include "Kontak.h"

namespace GUICPPkel27 {
    using namespace System;
    using namespace System::Windows::Forms;
    using namespace System::ComponentModel;
    using namespace System::Drawing;

    public ref class Registration : public System::Windows::Forms::Form
    {
    public:
        Registration(void);     // Konstruktor
        ~Registration();        // Destruktor

    private:
        // Deklarasi komponen UI


        System::Windows::Forms::Label^ label3;

        System::Windows::Forms::TextBox^ textBox_username;
        System::Windows::Forms::TextBox^ textBox_password;

        System::Windows::Forms::Button^ button_login;
        System::Windows::Forms::Button^ button_about;
        System::Windows::Forms::Button^ button_submit;
    private: System::Windows::Forms::Button^ button_exit;


        System::ComponentModel::Container^ components;

        // Prototipe fungsi event
        void InitializeComponent(void);
        void buttonlogin_Click(System::Object^ sender, System::EventArgs^ e);
        void button_submit_Click(System::Object^ sender, System::EventArgs^ e);
        void button_about_Click(System::Object^ sender, System::EventArgs^ e);
        void button_exit_Click(System::Object^ sender, System::EventArgs^ e);

        void textBox_username_TextChanged(System::Object^ sender, System::EventArgs^ e);
        void MyForm_Load(System::Object^ sender, System::EventArgs^ e);



   
    private: System::Void textBox_password_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }
    };
    ;
}
