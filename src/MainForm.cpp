#include "MainForm.h"

wxBEGIN_EVENT_TABLE(MainForm, wxFrame)
	EVT_SIZE(MainForm::OnSizeChange)
wxEND_EVENT_TABLE()

MainForm::MainForm() : wxFrame(nullptr, wxID_ANY, "Hamster Launcher Pre-Alpha 0.0.0.2e", wxDefaultPosition, wxSize(1280, 720))
{
	muttiPanel = new wxPanel(this);
	topBar = new wxPanel(muttiPanel, wxID_ANY, wxPoint(0, 0), wxSize(1280, 50), wxTAB_TRAVERSAL, "KEK");
	topBar->SetBackgroundColour(wxColour(170,170,170));
	button1 = new wxButton(topBar, wxID_ANY, "SPIELE" , wxPoint(0, 0), wxSize(100, 50));
	button2 = new wxButton(topBar, wxID_ANY, "WALLPAPER" , wxPoint(100, 0), wxSize(100, 50));
	button3 = new wxButton(topBar, wxID_ANY, "Setup", wxPoint(200, 0), wxSize(50, 50));
}

MainForm::~MainForm()
{

}

void MainForm::OnSizeChange(wxSizeEvent& evt)
{
	wxSize newSize = evt.GetSize();
	muttiPanel->SetSize(newSize);
	topBar->SetSize(newSize.x, topBar->GetSize().y);
	
	
}
 