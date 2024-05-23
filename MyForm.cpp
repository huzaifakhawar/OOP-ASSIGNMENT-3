#include"MyForm.h"
using namespace System;
using namespace System::Windows::Forms;
void main(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles;
	Project35::MyForm Frm;
	Application::Run(% Frm);
}
