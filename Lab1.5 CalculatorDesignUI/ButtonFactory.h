#pragma once
#include "wx/wx.h"

class ButtonFactory : public wxFrame
{
public:
	ButtonFactory();

	wxButton* CreatePlus(wxWindow* parent);
	wxButton* CreateMinus(wxWindow* parent);

	wxButton* CreateDivide(wxWindow* parent);
	wxButton* CreateMultiply(wxWindow* parent);

	wxButton* CreateMod(wxWindow* parent);
	wxButton* CreateClear(wxWindow* parent);

	wxButton* CreateEqual(wxWindow* parent);
	wxButton* CreateNegative(wxWindow* parent);
	
	wxButton* CreateZero(wxWindow* parent);
	wxButton* CreateOne(wxWindow* parent);
	wxButton* CreateTwo(wxWindow* parent);
	wxButton* CreateThree(wxWindow* parent);
	wxButton* CreateFour(wxWindow* parent);

	wxButton* CreateFive(wxWindow* parent);
	wxButton* CreateSix(wxWindow* parent);
	wxButton* CreateSeven(wxWindow* parent);
	wxButton* CreateEight(wxWindow* parent);
	wxButton* CreateNine(wxWindow* parent);

	wxButton* CreateBinary(wxWindow* parent);
	wxButton* CreateHex(wxWindow* parent);
	wxButton* CreateDecimal(wxWindow* parent);

	wxButton* CreateButton(wxWindow* parent, wxWindowID id, wxString string, wxPoint point, wxSize size);
	
	/*void OnButtonClick(wxCommandEvent& evt);
	void Bind(wxButton* button, wxWindow* parent);*/

};

