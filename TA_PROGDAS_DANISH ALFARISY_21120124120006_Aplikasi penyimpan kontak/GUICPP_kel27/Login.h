#pragma once

#include "Kontak.h"

namespace GUICPPkel27 {
	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System;
	using namespace System::Windows::Forms;


public ref class Login : public System::Windows::Forms::Form
{
public:
	Login(String^ username, String^ password);

protected:
	~Login();

private:
	// Form controls

	System::Windows::Forms::Button^ button_about;
private: System::Windows::Forms::Button^ button_exit;

	System::Windows::Forms::TextBox^ textBox_password;
	System::Windows::Forms::TextBox^ textBox_username;




	// Stored username and password
	String^ stored_username;
	String^ stored_password;
private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::Button^ button_submit;

	System::ComponentModel::Container^ components;

	// Form Initialization
	void InitializeComponent(void);

private:
	// Event Handlers
	System::Void button_about_Click(System::Object^ sender, System::EventArgs^ e);
	System::Void button_submit_Click(System::Object^ sender, System::EventArgs^ e);
	System::Void button_exit_Click(System::Object^ sender, System::EventArgs^ e);
	
private: System::Void textBox_password_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}

};
}
