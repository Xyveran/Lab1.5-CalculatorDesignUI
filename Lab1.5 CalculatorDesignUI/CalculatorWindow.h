#pragma once
#include "wx/wx.h"



class CalculatorWindow : public wxFrame
{
private:
	wxButton* PlusButton, * MinusButton;
	wxButton* DiviButton, * MultiButton;
	wxButton* ModButton, * ClearButton;
	wxButton* EqualButton, * NegativeButton;
	wxButton* ZeroButton, * OneButton, * TwoButton, * ThreeButton, * FourButton;
	wxButton* FiveButton, * SixButton, * SevenButton, * EightButton, * NineButton;
	wxButton* BinaryButton, * HexButton, * DeciButton;

	wxTextCtrl* NumberEntryBox;

public:
	CalculatorWindow();
	void OnButtonClick(wxCommandEvent& evt);

	wxDECLARE_EVENT_TABLE();
};

