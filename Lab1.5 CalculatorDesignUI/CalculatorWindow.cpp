#include "CalculatorWindow.h"

CalculatorWindow::CalculatorWindow() : wxFrame(nullptr, wxID_ANY, "Ortiz - Calculator", wxPoint(400, 200), wxSize(600, 600))
{
	PlusButton = new wxButton(this, wxID_ANY, "+", wxPoint(390,190), wxSize(25, 25));
	MinusButton = new wxButton(this, wxID_ANY, "-", wxPoint(380, 180), wxSize(25, 25));
	
	DiviButton = new wxButton(this, wxID_ANY, "/", wxPoint(370, 170), wxSize(25, 25));
	MultiButton = new wxButton(this, wxID_ANY, "*", wxPoint(360, 160), wxSize(25, 25));
	
	ModButton = new wxButton(this, wxID_ANY, "%", wxPoint(350, 150), wxSize(25, 25));
	CButton = new wxButton(this, wxID_ANY, "c", wxPoint(390, 190), wxSize(25, 25));
	
	EqualButton = new wxButton(this, wxID_ANY, "=", wxPoint(380, 180), wxSize(25, 25));
	NegativeButton = new wxButton(this, wxID_ANY, "(-)", wxPoint(370, 170), wxSize(25, 25));
	
	ZeroButton = new wxButton(this, wxID_ANY, "0", wxPoint(360, 160), wxSize(25, 25));
	OneButton = new wxButton(this, wxID_ANY, "1", wxPoint(360, 160), wxSize(25, 25));
	TwoButton = new wxButton(this, wxID_ANY, "2", wxPoint(350, 150), wxSize(25, 25));
	ThreeButton = new wxButton(this, wxID_ANY, "3", wxPoint(340, 140), wxSize(25, 25));
	FourButton = new wxButton(this, wxID_ANY, "4", wxPoint(340, 140), wxSize(25, 25));
	
	FiveButton = new wxButton(this, wxID_ANY, "5", wxPoint(390, 190), wxSize(25, 25));
	SixButton = new wxButton(this, wxID_ANY, "6", wxPoint(380, 180), wxSize(25, 25));
	SevenButton = new wxButton(this, wxID_ANY, "7", wxPoint(370, 170), wxSize(25, 25));
	EightButton = new wxButton(this, wxID_ANY, "8", wxPoint(360, 160), wxSize(25, 25));
	NineButton = new wxButton(this, wxID_ANY, "9", wxPoint(350, 150), wxSize(25, 25));
	
	
	BinaryButton = new wxButton(this, wxID_ANY, "Bin", wxPoint(340, 140), wxSize(25, 25));
	HexButton = new wxButton(this, wxID_ANY, "Hex", wxPoint(340, 140), wxSize(25, 25));
	DeciButton = new wxButton(this, wxID_ANY, "Dec", wxPoint(340, 140), wxSize(25, 25));
}
