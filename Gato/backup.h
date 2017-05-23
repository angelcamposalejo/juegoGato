#pragma once  //______________________________________ Gato.h  
#include "Resource.h"
class Gato : public Win::Dialog
{
public:
	Gato()
	{
	}
	~Gato()
	{
	}
	wstring salida(wstring entrada);
protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Button btA;
	Win::Button btB;
	Win::Button btC;
	Win::Button btD;
	Win::Button btE;
	Win::Button btF;
	Win::Button btG;
	Win::Button btH;
	Win::Button btI;
	Win::Label lb1;
protected:
	Win::Gdi::Font fontArial014A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx = Sys::Convert::PixelToDlgUnitX(323);
		dlgTemplate.cy = Sys::Convert::PixelToDlgUnitY(183);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"Gato";
		btA.Create(NULL, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 18, 21, 89, 28, hWnd, 1000);
		btB.Create(NULL, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 126, 21, 87, 28, hWnd, 1001);
		btC.Create(NULL, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 229, 21, 85, 28, hWnd, 1002);
		btD.Create(NULL, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 18, 68, 87, 28, hWnd, 1003);
		btE.Create(NULL, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 127, 68, 85, 28, hWnd, 1004);
		btF.Create(NULL, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 230, 68, 84, 28, hWnd, 1005);
		btG.Create(NULL, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 18, 112, 87, 28, hWnd, 1006);
		btH.Create(NULL, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 126, 113, 87, 28, hWnd, 1007);
		btI.Create(NULL, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 230, 113, 86, 28, hWnd, 1008);
		lb1.Create(NULL, L"Juego del Gato", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 231, 151, 83, 25, hWnd, 1009);
		fontArial014A.Create(L"Arial", 14, false, false, false, false);
		btA.Font = fontArial014A;
		btB.Font = fontArial014A;
		btC.Font = fontArial014A;
		btD.Font = fontArial014A;
		btE.Font = fontArial014A;
		btF.Font = fontArial014A;
		btG.Font = fontArial014A;
		btH.Font = fontArial014A;
		btI.Font = fontArial014A;
		lb1.Font = fontArial014A;
	}
	//_________________________________________________
	void btA_Click(Win::Event& e);
	void btB_Click(Win::Event& e);
	void btC_Click(Win::Event& e);
	void btD_Click(Win::Event& e);
	void btE_Click(Win::Event& e);
	void btF_Click(Win::Event& e);
	void btG_Click(Win::Event& e);
	void btH_Click(Win::Event& e);
	void btI_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (btA.IsEvent(e, BN_CLICKED)) {btA_Click(e); return true;}
		if (btB.IsEvent(e, BN_CLICKED)) {btB_Click(e); return true;}
		if (btC.IsEvent(e, BN_CLICKED)) {btC_Click(e); return true;}
		if (btD.IsEvent(e, BN_CLICKED)) {btD_Click(e); return true;}
		if (btE.IsEvent(e, BN_CLICKED)) {btE_Click(e); return true;}
		if (btF.IsEvent(e, BN_CLICKED)) {btF_Click(e); return true;}
		if (btG.IsEvent(e, BN_CLICKED)) {btG_Click(e); return true;}
		if (btH.IsEvent(e, BN_CLICKED)) {btH_Click(e); return true;}
		if (btI.IsEvent(e, BN_CLICKED)) {btI_Click(e); return true;}
		return false;
	}
};
