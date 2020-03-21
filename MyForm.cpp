#include "MyForm.h"
#include "chart.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThread]

void main()
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Project1::MyForm form;
    Application::Run(% form);
}
