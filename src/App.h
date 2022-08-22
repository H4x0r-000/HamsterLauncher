#pragma once

#include <wx/wx.h>
#include "MainForm.h"

class App : public wxApp
{
public:
	App();
	~App();

	MainForm* mainForm = nullptr;

public:
	virtual bool OnInit();
};