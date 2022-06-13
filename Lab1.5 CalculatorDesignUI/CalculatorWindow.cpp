#include "CalculatorWindow.h"

wxBEGIN_EVENT_TABLE(CalculatorWindow, wxFrame)
	EVT_BUTTON(101, CalculatorWindow::OnButtonClick)
	EVT_BUTTON(102, CalculatorWindow::OnButtonClick)
	EVT_BUTTON(103, CalculatorWindow::OnButtonClick)
	EVT_BUTTON(104, CalculatorWindow::OnButtonClick)
	EVT_BUTTON(105, CalculatorWindow::OnButtonClick)
	EVT_BUTTON(106, CalculatorWindow::OnButtonClick)
	EVT_BUTTON(107, CalculatorWindow::OnButtonClick)
	EVT_BUTTON(108, CalculatorWindow::OnButtonClick)
	///////////////////////
	EVT_BUTTON(200, CalculatorWindow::OnButtonClick)
	EVT_BUTTON(201, CalculatorWindow::OnButtonClick)
	EVT_BUTTON(202, CalculatorWindow::OnButtonClick)
	EVT_BUTTON(203, CalculatorWindow::OnButtonClick)
	EVT_BUTTON(204, CalculatorWindow::OnButtonClick)
	EVT_BUTTON(205, CalculatorWindow::OnButtonClick)
	EVT_BUTTON(206, CalculatorWindow::OnButtonClick)
	EVT_BUTTON(207, CalculatorWindow::OnButtonClick)
	EVT_BUTTON(208, CalculatorWindow::OnButtonClick)
	EVT_BUTTON(209, CalculatorWindow::OnButtonClick)
	////////////
	EVT_BUTTON(301, CalculatorWindow::OnButtonClick)
	EVT_BUTTON(302, CalculatorWindow::OnButtonClick)
	EVT_BUTTON(303, CalculatorWindow::OnButtonClick)
wxEND_EVENT_TABLE()

CalculatorWindow::CalculatorWindow() : wxFrame(nullptr, wxID_ANY, "Ortiz - Calculator", wxPoint(50, 50), wxSize(310, 330))
{
	PlusButton = new wxButton(this, 101, "+", wxPoint(255,130), wxSize(25, 25));
	MinusButton = new wxButton(this, 102, "-", wxPoint(255, 160), wxSize(25, 25));
	
	DiviButton = new wxButton(this, 103, "/", wxPoint(255, 190), wxSize(25, 25));
	MultiButton = new wxButton(this, 104, "*", wxPoint(255, 220), wxSize(25, 25));
	
	ModButton = new wxButton(this, 105, "%", wxPoint(225, 130), wxSize(25, 25));
	ClearButton = new wxButton(this, 106, "C", wxPoint(135, 130), wxSize(25, 25));
	
	EqualButton = new wxButton(this, 107, "=", wxPoint(255, 250), wxSize(25, 25));
	NegativeButton = new wxButton(this, 108, "(-)", wxPoint(165, 130), wxSize(25, 25));
	
	ZeroButton = new wxButton(this, 200, "0", wxPoint(165, 250), wxSize(55, 25));
	OneButton = new wxButton(this, 201, "1", wxPoint(165, 220), wxSize(25, 25));
	TwoButton = new wxButton(this, 202, "2", wxPoint(195, 220), wxSize(25, 25));
	ThreeButton = new wxButton(this, 203, "3", wxPoint(225, 220), wxSize(25, 25));
	FourButton = new wxButton(this, 204, "4", wxPoint(165, 190), wxSize(25, 25));
	
	FiveButton = new wxButton(this, 205, "5", wxPoint(195, 190), wxSize(25, 25));
	SixButton = new wxButton(this, 206, "6", wxPoint(225, 190), wxSize(25, 25));
	SevenButton = new wxButton(this, 207, "7", wxPoint(165, 160), wxSize(25, 25));
	EightButton = new wxButton(this, 208, "8", wxPoint(195, 160), wxSize(25, 25));
	NineButton = new wxButton(this, 209, "9", wxPoint(225, 160), wxSize(25, 25));
	
	BinaryButton = new wxButton(this, 301, "Bin", wxPoint(135, 220), wxSize(25, 55));
	HexButton = new wxButton(this, 302, "Hex", wxPoint(135, 160), wxSize(25, 55));
	DeciButton = new wxButton(this, 303, ".", wxPoint(225, 250), wxSize(25, 25));

	//From wxWidgets.org documentation
	NumberEntryBox = new wxTextCtrl(this, 1000, "", wxPoint(135, 100), wxSize(145, 25),
		wxTE_MULTILINE | wxTE_RICH, wxDefaultValidator, wxTextCtrlNameStr);
}
void CalculatorWindow::OnButtonClick(wxCommandEvent& evt) {	
	int id = evt.GetId();
	//evt.GetEventObject();

	// if the clear button is selected (id 106) clear the box
	if (id == 106) {
		NumberEntryBox->Clear();
	}
	else {
		wxString label = FindItem(id, NULL)->GetLabel();
		NumberEntryBox->AppendText(label);
	}
}