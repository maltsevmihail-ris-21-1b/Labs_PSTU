#include "MyForm.h"
#include <iostream>

using namespace System;
using namespace System::Windows::Forms;


[STAThread]
int main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	LOGCALC::MyForm form;
	Application::Run(% form);
	return 0;
}