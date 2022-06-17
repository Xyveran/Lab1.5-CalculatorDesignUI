#include "CalculatorWindow.h"
#include "ButtonFactory.h"

wxBEGIN_EVENT_TABLE(CalculatorWindow, wxFrame)
wxEND_EVENT_TABLE()

CalculatorWindow::CalculatorWindow() : wxFrame(nullptr, wxID_ANY, "Ortiz - Calculator", wxPoint(50, 50), wxSize(310, 330))
{
	ButtonFactory factory;

	PlusButton = factory.CreatePlus(this);
	MinusButton = factory.CreateMinus(this);
	BindButton(PlusButton);
	BindButton(MinusButton);
	
	DiviButton = factory.CreateDivide(this);
	MultiButton = factory.CreateMultiply(this);
	BindButton(DiviButton);
	BindButton(MultiButton);
	
	ModButton = factory.CreateMod(this);
	ClearButton = factory.CreateClear(this);
	BindButton(ModButton);
	BindButton(ClearButton);
	
	EqualButton = factory.CreateEqual(this);
	NegativeButton = factory.CreateNegative(this);
	BindButton(EqualButton);
	BindButton(NegativeButton);
	
	ZeroButton = factory.CreateZero(this);
	OneButton = factory.CreateOne(this);
	TwoButton = factory.CreateTwo(this);
	ThreeButton = factory.CreateThree(this);
	FourButton = factory.CreateFour(this);
	BindButton(ZeroButton);
	BindButton(OneButton);
	BindButton(TwoButton);
	BindButton(ThreeButton);
	BindButton(FourButton);
	
	FiveButton = factory.CreateFive(this);
	SixButton = factory.CreateSix(this);
	SevenButton = factory.CreateSeven(this);
	EightButton = factory.CreateEight(this);
	NineButton = factory.CreateNine(this);
	BindButton(FiveButton);
	BindButton(SixButton);
	BindButton(SevenButton);
	BindButton(EightButton);
	BindButton(NineButton);

	BinaryButton = factory.CreateBinary(this);
	HexButton = factory.CreateHex(this);
	DeciButton = factory.CreateDecimal(this);
	BindButton(BinaryButton);
	BindButton(HexButton);
	BindButton(DeciButton);

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
 

void CalculatorWindow::BindButton(wxButton* button) {
	button->Bind(wxEVT_BUTTON, &CalculatorWindow::OnButtonClick, this);
}