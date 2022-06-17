#include "ButtonFactory.h"


ButtonFactory::ButtonFactory() {

}
wxButton* ButtonFactory::CreatePlus(wxWindow* parent) {	

	wxButton* plus = new wxButton(parent, 101, "+", wxPoint(255, 130), wxSize(25, 25));

	//plus->Bind(wxEVT_BUTTON, &CalculatorWindow::OnButtonClick, parent);

	return plus;
}
wxButton* ButtonFactory::CreateMinus(wxWindow* parent) {

	wxButton* minus = new wxButton(parent, 102, "-", wxPoint(255, 160), wxSize(25, 25));

	return minus;
}
wxButton* ButtonFactory::CreateDivide(wxWindow* parent) {

	wxButton* divide = new wxButton(parent, 103, "/", wxPoint(255, 190), wxSize(25, 25));

	return divide;
}
wxButton* ButtonFactory::CreateMultiply(wxWindow* parent) {

	wxButton* multiply = new wxButton(parent, 104, "*", wxPoint(255, 220), wxSize(25, 25));

	return multiply;
}
wxButton* ButtonFactory::CreateMod(wxWindow* parent) {

	wxButton* mod = new wxButton(parent, 105, "%", wxPoint(225, 130), wxSize(25, 25));

	return mod;
}
wxButton* ButtonFactory::CreateClear(wxWindow* parent) {

	wxButton* clear = new wxButton(parent, 106, "C", wxPoint(135, 130), wxSize(25, 25));

	return clear;
}
wxButton* ButtonFactory::CreateEqual(wxWindow* parent) {

	wxButton* equal = new wxButton(parent, 107, "=", wxPoint(255, 250), wxSize(25, 25));

	return equal;
}
wxButton* ButtonFactory::CreateNegative(wxWindow* parent) {

	wxButton* negative = new wxButton(parent, 108, "(-)", wxPoint(165, 130), wxSize(25, 25));

	return negative;
}
wxButton* ButtonFactory::CreateZero(wxWindow* parent) {

	wxButton* zero = new wxButton(parent, 200, "0", wxPoint(165, 250), wxSize(55, 25));

	return zero;
}
wxButton* ButtonFactory::CreateOne(wxWindow* parent) {

	wxButton* one = new wxButton(parent, 201, "1", wxPoint(165, 220), wxSize(25, 25));

	return one;
}
wxButton* ButtonFactory::CreateTwo(wxWindow* parent) {

	wxButton* two = new wxButton(parent, 202, "2", wxPoint(195, 220), wxSize(25, 25));

	return two;
}
wxButton* ButtonFactory::CreateThree(wxWindow* parent) {

	wxButton* three = new wxButton(parent, 203, "3", wxPoint(225, 220), wxSize(25, 25));

	return three;
}
wxButton* ButtonFactory::CreateFour(wxWindow* parent) {

	wxButton* four = new wxButton(parent, 204, "4", wxPoint(165, 190), wxSize(25, 25));

	return four;
}
wxButton* ButtonFactory::CreateFive(wxWindow* parent) {

	wxButton* five = new wxButton(parent, 205, "5", wxPoint(195, 190), wxSize(25, 25));

	return five;
}
wxButton* ButtonFactory::CreateSix(wxWindow* parent) {

	wxButton* six = new wxButton(parent, 206, "6", wxPoint(225, 190), wxSize(25, 25));

	return six;
}
wxButton* ButtonFactory::CreateSeven(wxWindow* parent) {

	wxButton* seven = new wxButton(parent, 207, "7", wxPoint(165, 160), wxSize(25, 25));

	return seven;
}
wxButton* ButtonFactory::CreateEight(wxWindow* parent) {

	wxButton* eight = new wxButton(parent, 208, "8", wxPoint(195, 160), wxSize(25, 25));

	return eight;
}
wxButton* ButtonFactory::CreateNine(wxWindow* parent) {

	wxButton* nine = new wxButton(parent, 209, "9", wxPoint(225, 160), wxSize(25, 25));

	return nine;
}
wxButton* ButtonFactory::CreateBinary(wxWindow* parent) {

	wxButton* binary = new wxButton(parent, 301, "Bin", wxPoint(135, 220), wxSize(25, 55));

	return binary;
}
wxButton* ButtonFactory::CreateHex(wxWindow* parent) {

	wxButton* hex = new wxButton(parent, 302, "Hex", wxPoint(135, 160), wxSize(25, 55));

	return hex;
}
wxButton* ButtonFactory::CreateDecimal(wxWindow* parent) {

	wxButton* deci = new wxButton(parent, 303, ".", wxPoint(225, 250), wxSize(25, 25));

	return deci;
}
wxButton* ButtonFactory::CreateButton(wxWindow* parent, wxWindowID id, wxString string, wxPoint point, wxSize size) {

	wxButton* button = new wxButton(parent, id, string, point, size);

	return button;
}



//void Bind(wxButton* button, wxWindow* parent) {
//	button->Bind(wxEVT_BUTTON, &ButtonFactory::OnButtonClick, parent);
//}
//
//void ButtonFactory::OnButtonClick(wxCommandEvent& evt) {
//	int id = evt.GetId();
//	//evt.GetEventObject();
//
//	// if the clear button is selected (id 106) clear the box
//	if (id == 106) {
//		NumberEntryBox->Clear();
//	}
//	else {
//		wxString label = FindItem(id, NULL)->GetLabel();
//		NumberEntryBox->AppendText(label);
//	}
//}