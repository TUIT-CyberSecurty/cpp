#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    My11::MyForm^ form = gcnew My11::MyForm(); // ���������� ��� ������������ ���
    Application::Run(form);
    return 0;
}
