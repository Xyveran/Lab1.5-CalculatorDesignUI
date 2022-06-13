#include "CalculatorWindow.h"

wxBEGIN_EVENT_TABLE(CalculatorWindow, wxFrame)

wxEND_EVENT_TABLE()

CalculatorWindow::CalculatorWindow() : wxFrame(nullptr, wxID_ANY, "Ortiz - Calculator", wxPoint(50, 50), wxSize(310, 330))
{
	PlusButton = new wxButton(this, wxID_ANY, "+", wxPoint(255,130), wxSize(25, 25));
	MinusButton = new wxButton(this, wxID_ANY, "-", wxPoint(255, 160), wxSize(25, 25));
	
	DiviButton = new wxButton(this, wxID_ANY, "/", wxPoint(255, 190), wxSize(25, 25));
	MultiButton = new wxButton(this, wxID_ANY, "*", wxPoint(255, 220), wxSize(25, 25));
	
	ModButton = new wxButton(this, wxID_ANY, "%", wxPoint(225, 130), wxSize(25, 25));
	CButton = new wxButton(this, wxID_ANY, "c", wxPoint(135, 130), wxSize(25, 25));
	
	EqualButton = new wxButton(this, wxID_ANY, "=", wxPoint(255, 250), wxSize(25, 25));
	NegativeButton = new wxButton(this, wxID_ANY, "(-)", wxPoint(165, 130), wxSize(25, 25));
	
	ZeroButton = new wxButton(this, wxID_ANY, "0", wxPoint(165, 250), wxSize(55, 25));
	OneButton = new wxButton(this, wxID_ANY, "1", wxPoint(165, 220), wxSize(25, 25));
	TwoButton = new wxButton(this, wxID_ANY, "2", wxPoint(195, 220), wxSize(25, 25));
	ThreeButton = new wxButton(this, wxID_ANY, "3", wxPoint(225, 220), wxSize(25, 25));
	FourButton = new wxButton(this, wxID_ANY, "4", wxPoint(165, 190), wxSize(25, 25));
	
	FiveButton = new wxButton(this, wxID_ANY, "5", wxPoint(195, 190), wxSize(25, 25));
	SixButton = new wxButton(this, wxID_ANY, "6", wxPoint(225, 190), wxSize(25, 25));
	SevenButton = new wxButton(this, wxID_ANY, "7", wxPoint(165, 160), wxSize(25, 25));
	EightButton = new wxButton(this, wxID_ANY, "8", wxPoint(195, 160), wxSize(25, 25));
	NineButton = new wxButton(this, wxID_ANY, "9", wxPoint(225, 160), wxSize(25, 25));
	
	
	BinaryButton = new wxButton(this, wxID_ANY, "Bin", wxPoint(135, 220), wxSize(25, 55));
	HexButton = new wxButton(this, wxID_ANY, "Hex", wxPoint(135, 160), wxSize(25, 55));
	DeciButton = new wxButton(this, wxID_ANY, ".", wxPoint(225, 250), wxSize(25, 25));

	//From wxWidgets.org documentation
	NumberEntryBox = new wxTextCtrl(this, wxID_ANY, "", wxPoint(135, 100), wxSize(145, 25),
		wxTE_MULTILINE | wxTE_RICH, wxDefaultValidator, wxTextCtrlNameStr);
}
		