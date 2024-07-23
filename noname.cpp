///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.1.0-0-g733bf3d)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "noname.h"

///////////////////////////////////////////////////////////////////////////

MyFrame1::MyFrame1(wxWindow *parent, wxWindowID id, const wxString &title, const wxPoint &pos, const wxSize &size, long style) : wxFrame(parent, id, title, pos, size, style)
{
	this->SetSizeHints(wxDefaultSize, wxDefaultSize);
	this->SetBackgroundColour(wxColour(55, 19, 143));

	wxBoxSizer *bSizer1;
	bSizer1 = new wxBoxSizer(wxVERTICAL);

	wxBoxSizer *bSizer3;
	bSizer3 = new wxBoxSizer(wxHORIZONTAL);

	wxBoxSizer *bSizer101;
	bSizer101 = new wxBoxSizer(wxVERTICAL);

	m_staticText3 = new wxStaticText(this, wxID_ANY, wxT(""), wxDefaultPosition, wxSize(250, 40), wxALIGN_RIGHT);
	m_staticText3->Wrap(-1);
	m_staticText3->SetFont(wxFont(24, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial")));

	bSizer101->Add(m_staticText3, 0, wxALIGN_RIGHT | wxALL, 5);

	m_staticText4 = new wxStaticText(this, wxID_ANY, wxT(""), wxDefaultPosition, wxSize(250, -1), wxALIGN_RIGHT);
	m_staticText4->Wrap(-1);
	m_staticText4->SetFont(wxFont(12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial")));

	bSizer101->Add(m_staticText4, 0, wxALIGN_RIGHT | wxALL, 5);

	bSizer3->Add(bSizer101, 1, wxEXPAND, 50);

	bSizer1->Add(bSizer3, 1, wxEXPAND, 5);

	wxBoxSizer *bSizer4;
	bSizer4 = new wxBoxSizer(wxVERTICAL);

	wxBoxSizer *bSizer5;
	bSizer5 = new wxBoxSizer(wxHORIZONTAL);

	wxBoxSizer *bSizer7;
	bSizer7 = new wxBoxSizer(wxVERTICAL);

	m_button5 = new wxButton(this, wxID_ANY, wxT("C"), wxDefaultPosition, wxSize(50, 50), 0);
	m_button5->SetFont(wxFont(10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial")));
	m_button5->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_INFOTEXT));
	m_button5->SetBackgroundColour(wxColour(69, 24, 177));

	bSizer7->Add(m_button5, 0, wxALL, 5);

	m_button4 = new wxButton(this, wxID_ANY, wxT("7"), wxDefaultPosition, wxSize(50, 50), 0);
	m_button4->SetFont(wxFont(12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial")));
	m_button4->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_INFOTEXT));
	m_button4->SetBackgroundColour(wxColour(69, 24, 177));

	bSizer7->Add(m_button4, 0, wxALL, 5);

	m_button3 = new wxButton(this, wxID_ANY, wxT("4"), wxDefaultPosition, wxSize(50, 50), 0);
	m_button3->SetFont(wxFont(12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial")));
	m_button3->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_INFOTEXT));
	m_button3->SetBackgroundColour(wxColour(69, 24, 177));

	bSizer7->Add(m_button3, 0, wxALL, 5);

	m_button2 = new wxButton(this, wxID_ANY, wxT("1"), wxDefaultPosition, wxSize(50, 50), 0);
	m_button2->SetFont(wxFont(12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial")));
	m_button2->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_INFOTEXT));
	m_button2->SetBackgroundColour(wxColour(69, 24, 177));

	bSizer7->Add(m_button2, 0, wxALL, 5);

	m_button1 = new wxButton(this, wxID_ANY, wxT("0"), wxDefaultPosition, wxSize(50, 50), 0);
	m_button1->SetFont(wxFont(12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial")));
	m_button1->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_INFOTEXT));
	m_button1->SetBackgroundColour(wxColour(69, 24, 177));

	bSizer7->Add(m_button1, 0, wxALL, 5);

	bSizer5->Add(bSizer7, 1, wxEXPAND, 5);

	wxBoxSizer *bSizer8;
	bSizer8 = new wxBoxSizer(wxVERTICAL);

	m_button6 = new wxButton(this, wxID_ANY, wxT("/"), wxDefaultPosition, wxSize(50, 50), 0);
	m_button6->SetFont(wxFont(12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial")));
	m_button6->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_INFOTEXT));
	m_button6->SetBackgroundColour(wxColour(69, 24, 177));

	bSizer8->Add(m_button6, 0, wxALL, 5);

	m_button7 = new wxButton(this, wxID_ANY, wxT("8"), wxDefaultPosition, wxSize(50, 50), 0);
	m_button7->SetFont(wxFont(12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial")));
	m_button7->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_INFOTEXT));
	m_button7->SetBackgroundColour(wxColour(69, 24, 177));

	bSizer8->Add(m_button7, 0, wxALL, 5);

	m_button8 = new wxButton(this, wxID_ANY, wxT("5"), wxDefaultPosition, wxSize(50, 50), 0);
	m_button8->SetFont(wxFont(12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial")));
	m_button8->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_INFOTEXT));
	m_button8->SetBackgroundColour(wxColour(69, 24, 177));

	bSizer8->Add(m_button8, 0, wxALL, 5);

	m_button9 = new wxButton(this, wxID_ANY, wxT("2"), wxDefaultPosition, wxSize(50, 50), 0);
	m_button9->SetFont(wxFont(12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial")));
	m_button9->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_INFOTEXT));
	m_button9->SetBackgroundColour(wxColour(69, 24, 177));

	bSizer8->Add(m_button9, 0, wxALL, 5);

	m_button10 = new wxButton(this, wxID_ANY, wxT("."), wxDefaultPosition, wxSize(50, 50), 0);
	m_button10->SetFont(wxFont(16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial")));
	m_button10->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_INFOTEXT));
	m_button10->SetBackgroundColour(wxColour(69, 24, 177));

	bSizer8->Add(m_button10, 0, wxALL, 5);

	bSizer5->Add(bSizer8, 1, wxEXPAND, 5);

	wxBoxSizer *bSizer10;
	bSizer10 = new wxBoxSizer(wxVERTICAL);

	m_button11 = new wxButton(this, wxID_ANY, wxT("%"), wxDefaultPosition, wxSize(50, 50), 0);
	m_button11->SetFont(wxFont(12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial")));
	m_button11->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_INFOTEXT));
	m_button11->SetBackgroundColour(wxColour(69, 24, 177));

	bSizer10->Add(m_button11, 0, wxALL, 5);

	m_button12 = new wxButton(this, wxID_ANY, wxT("9"), wxDefaultPosition, wxSize(50, 50), 0);
	m_button12->SetFont(wxFont(12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial")));
	m_button12->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_INFOTEXT));
	m_button12->SetBackgroundColour(wxColour(69, 24, 177));

	bSizer10->Add(m_button12, 0, wxALL, 5);

	m_button13 = new wxButton(this, wxID_ANY, wxT("6"), wxDefaultPosition, wxSize(50, 50), 0);
	m_button13->SetFont(wxFont(12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial")));
	m_button13->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_INFOTEXT));
	m_button13->SetBackgroundColour(wxColour(69, 24, 177));

	bSizer10->Add(m_button13, 0, wxALL, 5);

	m_button14 = new wxButton(this, wxID_ANY, wxT("3"), wxDefaultPosition, wxSize(50, 50), 0);
	m_button14->SetFont(wxFont(12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial")));
	m_button14->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_INFOTEXT));
	m_button14->SetBackgroundColour(wxColour(69, 24, 177));

	bSizer10->Add(m_button14, 0, wxALL, 5);

	m_button15 = new wxButton(this, wxID_ANY, wxT("Del"), wxDefaultPosition, wxSize(50, 50), 0);
	m_button15->SetFont(wxFont(12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial")));
	m_button15->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_INFOTEXT));
	m_button15->SetBackgroundColour(wxColour(69, 24, 177));

	bSizer10->Add(m_button15, 0, wxALL, 5);

	bSizer5->Add(bSizer10, 1, wxEXPAND, 5);

	wxBoxSizer *bSizer12;
	bSizer12 = new wxBoxSizer(wxVERTICAL);

	m_button16 = new wxButton(this, wxID_ANY, wxT("X"), wxDefaultPosition, wxSize(50, 50), 0);
	m_button16->SetFont(wxFont(12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial")));
	m_button16->SetForegroundColour(wxColour(0, 0, 0));
	m_button16->SetBackgroundColour(wxColour(252, 197, 32));

	bSizer12->Add(m_button16, 0, wxALL, 5);

	m_button17 = new wxButton(this, wxID_ANY, wxT("-"), wxDefaultPosition, wxSize(50, 50), 0);
	m_button17->SetFont(wxFont(12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial")));
	m_button17->SetForegroundColour(wxColour(0, 0, 0));
	m_button17->SetBackgroundColour(wxColour(255, 131, 54));

	bSizer12->Add(m_button17, 0, wxALL, 5);

	m_button18 = new wxButton(this, wxID_ANY, wxT("+"), wxDefaultPosition, wxSize(50, 110), 0);
	m_button18->SetFont(wxFont(12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial")));
	m_button18->SetForegroundColour(wxColour(0, 0, 0));
	m_button18->SetBackgroundColour(wxColour(255, 91, 66));

	bSizer12->Add(m_button18, 0, wxALL, 5);

	m_button19 = new wxButton(this, wxID_ANY, wxT("="), wxDefaultPosition, wxSize(50, 50), 0);
	m_button19->SetFont(wxFont(12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial")));
	m_button19->SetForegroundColour(wxColour(0, 0, 0));
	m_button19->SetBackgroundColour(wxColour(255, 55, 77));

	bSizer12->Add(m_button19, 0, wxALL, 5);

	bSizer5->Add(bSizer12, 1, wxEXPAND, 5);

	bSizer4->Add(bSizer5, 1, wxEXPAND, 5);

	wxBoxSizer *bSizer6;
	bSizer6 = new wxBoxSizer(wxVERTICAL);

	bSizer4->Add(bSizer6, 1, wxEXPAND, 5);

	bSizer1->Add(bSizer4, 1, wxEXPAND, 5);

	this->SetSizer(bSizer1);
	this->Layout();

	this->Centre(wxBOTH);

	// Connect Events
	m_button5->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MyFrame1::cClicked), NULL, this);
	m_button4->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MyFrame1::sevenClicked), NULL, this);
	m_button3->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MyFrame1::fourClicked), NULL, this);
	m_button2->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MyFrame1::oneClicked), NULL, this);
	m_button1->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MyFrame1::zeroClicked), NULL, this);
	m_button6->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MyFrame1::splitClicked), NULL, this);
	m_button7->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MyFrame1::eigthClicked), NULL, this);
	m_button8->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MyFrame1::fiveClicked), NULL, this);
	m_button9->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MyFrame1::twoClicked), NULL, this);
	m_button10->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MyFrame1::pointClicked), NULL, this);
	m_button11->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MyFrame1::moduloClicked), NULL, this);
	m_button12->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MyFrame1::nineClicked), NULL, this);
	m_button13->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MyFrame1::sixClicked), NULL, this);
	m_button14->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MyFrame1::threeClicked), NULL, this);
	m_button15->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MyFrame1::delClicked), NULL, this);
	m_button16->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MyFrame1::multipleClicked), NULL, this);
	m_button17->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MyFrame1::lessClicked), NULL, this);
	m_button18->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MyFrame1::plusClicked), NULL, this);
	m_button19->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MyFrame1::equalClicked), NULL, this);
}

MyFrame1::~MyFrame1()
{
	// Disconnect Events
	m_button5->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MyFrame1::cClicked), NULL, this);
	m_button4->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MyFrame1::sevenClicked), NULL, this);
	m_button3->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MyFrame1::fourClicked), NULL, this);
	m_button2->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MyFrame1::oneClicked), NULL, this);
	m_button1->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MyFrame1::zeroClicked), NULL, this);
	m_button6->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MyFrame1::splitClicked), NULL, this);
	m_button7->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MyFrame1::eigthClicked), NULL, this);
	m_button8->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MyFrame1::fiveClicked), NULL, this);
	m_button9->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MyFrame1::twoClicked), NULL, this);
	m_button10->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MyFrame1::pointClicked), NULL, this);
	m_button11->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MyFrame1::moduloClicked), NULL, this);
	m_button12->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MyFrame1::nineClicked), NULL, this);
	m_button13->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MyFrame1::sixClicked), NULL, this);
	m_button14->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MyFrame1::threeClicked), NULL, this);
	m_button15->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MyFrame1::delClicked), NULL, this);
	m_button16->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MyFrame1::multipleClicked), NULL, this);
	m_button17->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MyFrame1::lessClicked), NULL, this);
	m_button18->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MyFrame1::plusClicked), NULL, this);
	m_button19->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MyFrame1::equalClicked), NULL, this);
}
// l'instantiation
#include <wx/wx.h>
class MyApp : public wxApp
{
public:
	virtual bool OnInit()
	{
		MyFrame1 *frame = new MyFrame1(nullptr);
		frame->Show(true);
		return true;
	}
};

wxIMPLEMENT_APP(MyApp);
