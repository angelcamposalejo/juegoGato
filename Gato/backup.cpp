#include "stdafx.h"  //________________________________________ Gato.cpp
#include "Gato.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE, LPTSTR cmdLine, int cmdShow) {
	Gato app;
	return app.BeginDialog(IDI_Gato, hInstance);
}
int contador;
wstring texto = L"";
void Gato::Window_Open(Win::Event& e)
{
	contador = 0;
}

wstring Gato::salida(wstring entrada)
{
	if (entrada == L"")
	{
		contador++;
		if (contador % 2 == 0)
		{
			return L"O";
		}
		else
		{
			return L"X";
		}
	}
}
void Gato::btA_Click(Win::Event& e)
{
	btA.Text = salida(btA.Text);
	btA.Enabled = false;
	if (btA.Text == btB.Text&&btA.Text == btC.Text)
	{
		lb1.Text = L"Ganador " + btA.Text;
	}
}

void Gato::btB_Click(Win::Event& e)
{
	btB.Text = salida(btB.Text);
	btB.Enabled = false;
}

void Gato::btC_Click(Win::Event& e)
{
	btC.Text = salida(btC.Text);
	btC.Enabled = false;
}

void Gato::btD_Click(Win::Event& e)
{
	btD.Text = salida(btD.Text);
	btD.Enabled = false;
}

void Gato::btE_Click(Win::Event& e)
{
	btE.Text = salida(btE.Text);
	btE.Enabled = false;
}

void Gato::btF_Click(Win::Event& e)
{
	btF.Text = salida(btF.Text);
	btF.Enabled = false;
}

void Gato::btG_Click(Win::Event& e)
{
	btG.Text = salida(btG.Text);
	btG.Enabled = false;
}

void Gato::btH_Click(Win::Event& e)
{
	btH.Text = salida(btH.Text);
	btH.Enabled = false;
}

void Gato::btI_Click(Win::Event& e)
{
	btI.Text = salida(btI.Text);
	btI.Enabled = false;
}

