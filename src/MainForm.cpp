#include "MainForm.h"

wxBEGIN_EVENT_TABLE(MainForm, wxFrame)

wxEND_EVENT_TABLE()

MainForm::MainForm() : wxFrame(nullptr, wxID_ANY, "Hamster Launcher Pre-Alpha 0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.1")
{
	wxButton* button1 = new wxButton(this, wxID_ANY, "Einz Coolen Button", wxPoint(50, 50), wxSize(300, 50));
}

MainForm::~MainForm()
{

}
 