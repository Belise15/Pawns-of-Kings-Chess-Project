#include "mainMenuForm.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThread]

void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	PawnsofKingsChessProject::mainMenuForm form;
	Application::Run(% form);
}

