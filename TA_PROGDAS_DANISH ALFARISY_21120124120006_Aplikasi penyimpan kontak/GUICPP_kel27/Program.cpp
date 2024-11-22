#include "Registration.h"  // Pastikan ini sesuai dengan nama form Anda

using namespace std;

using namespace System;
using namespace System::Windows::Forms;
using namespace GUICPPkel27;  // Pastikan namespace ini sesuai dengan project Anda





[STAThread]
int main() {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    // Membuat objek form dari MyForm (pastikan MyForm sesuai dengan nama form Anda)
    GUICPPkel27::Registration^ form = gcnew Registration();  // Membuat objek form MyForm

    // Menjalankan aplikasi dengan form yang baru dibuat
    Application::Run(form);  // Menjalankan aplikasi dengan form yang sudah dibuat
  
}