// Windows Forms Project.cpp: ������� ���� �������.

#include "stdafx.h"
#include "Form1.h"

using namespace WindowsFormsProject;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// ��������� ���������� �������� Windows XP �� �������� �����-���� ��������� ����������
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// �������� �������� ���� � ��� ������
	clrboard();
	Application::Run(gcnew Form1());
	return 0;
}
