#pragma once
#include "wx/wx.h"



class CalculatorWindow : public wxFrame
{
public:
	CalculatorWindow();

	wxTextCtrl* NumberEntryBox;

private:
	wxButton* PlusButton, * MinusButton;
	wxButton* DiviButton, * MultiButton;
	wxButton* ModButton, * CButton;
	wxButton* EqualButton, * NegativeButton;
	wxButton* ZeroButton, * OneButton, * TwoButton, * ThreeButton, * FourButton;
	wxButton* FiveButton, * SixButton, * SevenButton, * EightButton, * NineButton;
	wxButton* BinaryButton, * HexButton, * DeciButton;

	wxDECLARE_EVENT_TABLE();
};

