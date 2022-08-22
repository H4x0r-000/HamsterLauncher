#include "App.h"

wxIMPLEMENT_APP(App);

App::App()
{
}

App::~App()
{
}

bool App::OnInit()
{
	mainForm = new MainForm();
	mainForm->Show();

	return true;
}
