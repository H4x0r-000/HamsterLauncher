#pragma once

#include <wx/wx.h>

class MainForm : public wxFrame
{
public:
	MainForm();
	~MainForm();

private:
	wxPanel* muttiPanel;
	wxPanel* topBar;
	wxButton* button1;
	wxButton* button2;
	wxButton* button3;

	void OnSizeChange(wxSizeEvent& evt);

	wxDECLARE_EVENT_TABLE();
};

