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
	if ((btA.Text == btB.Text) && (btA.Text == btC.Text))
	{
		lb1.Text = L"Ganador " + btA.Text;
	}
	else
	{
		if ((btA.Text == btD.Text) && (btA.Text == btG.Text))
		{
			lb1.Text = L"Ganador " + btA.Text;
		}
		else
		{
			if ((btA.Text == btE.Text) && (btA.Text == btI.Text))
			{
				lb1.Text = L"Ganador " + btA.Text;
			}
		}
	}
}

void Gato::btB_Click(Win::Event& e)
{
	btB.Text = salida(btB.Text);
	btB.Enabled = false;
	if ((btA.Text == btB.Text) && (btA.Text == btC.Text))
	{
		lb1.Text = L"Ganador " + btA.Text;
	}
	else
	{
		if ((btB.Text == btE.Text) && (btB.Text == btH.Text))
		{
			lb1.Text = L"Ganador " + btB.Text;
		}
	}
}

void Gato::btC_Click(Win::Event& e)
{
	btC.Text = salida(btC.Text);
	btC.Enabled = false;
	if ((btA.Text == btB.Text) && (btA.Text == btC.Text))
	{
		lb1.Text = L"Ganador " + btA.Text;
	}
	else
	{
		if ((btC.Text == btF.Text) && (btC.Text == btI.Text))
		{
			lb1.Text = L"Ganador " + btC.Text;
		}
		else
		{
			if ((btC.Text == btE.Text) && (btC.Text == btG.Text))
			{
				lb1.Text = L"Ganador " + btC.Text;
			}
		}
	}
}

void Gato::btD_Click(Win::Event& e)
{
	btD.Text = salida(btD.Text);
	btD.Enabled = false;
	if ((btD.Text == btE.Text) && (btD.Text == btF.Text))
	{
		lb1.Text = L"Ganador " + btD.Text;
	}
	else
	{
		if ((btA.Text == btD.Text) && (btA.Text == btG.Text))
		{
			lb1.Text = L"Ganador " + btA.Text;
		}
	}
}

void Gato::btE_Click(Win::Event& e)
{
	btE.Text = salida(btE.Text);
	btE.Enabled = false;
	if ((btD.Text == btE.Text) && (btD.Text == btF.Text))
	{
		lb1.Text = L"Ganador " + btD.Text;
	}
	else
	{
		if ((btB.Text == btE.Text) && (btB.Text == btH.Text))
		{
			lb1.Text = L"Ganador " + btB.Text;
		}
		else
		{
			if ((btA.Text == btE.Text) && (btA.Text == btI.Text))
			{
				lb1.Text = L"Ganador " + btA.Text;
			}
			else
			{
				if ((btC.Text == btE.Text) && (btC.Text == btG.Text))
				{
					lb1.Text = L"Ganador " + btC.Text;
				}
			}
		}
	}
}

void Gato::btF_Click(Win::Event& e)
{
	btF.Text = salida(btF.Text);
	btF.Enabled = false;
	if ((btD.Text == btE.Text) && (btD.Text == btF.Text))
	{
		lb1.Text = L"Ganador " + btD.Text;
	}
	else
	{
		if ((btC.Text == btF.Text) && (btC.Text == btI.Text))
		{
			lb1.Text = L"Ganador " + btC.Text;
		}
	}
}

void Gato::btG_Click(Win::Event& e)
{
	btG.Text = salida(btG.Text);
	btG.Enabled = false;
	if ((btG.Text == btH.Text) && (btG.Text == btI.Text))
	{
		lb1.Text = L"Ganador " + btG.Text;
	}
	else
	{
		if ((btA.Text == btD.Text) && (btA.Text == btG.Text))
		{
			lb1.Text = L"Ganador " + btA.Text;
		}
		else
		{
			if ((btC.Text == btE.Text) && (btC.Text == btG.Text))
			{
				lb1.Text = L"Ganador " + btC.Text;
			}
			else
			{
				if ((btC.Text == btE.Text) && (btC.Text == btG.Text))
				{
					lb1.Text = L"Ganador " + btC.Text;
				}
			}
		}
	}
}

void Gato::btH_Click(Win::Event& e)
{
	btH.Text = salida(btH.Text);
	btH.Enabled = false;
	if ((btG.Text == btH.Text) && (btG.Text == btI.Text))
	{
		lb1.Text = L"Ganador " + btG.Text;
	}
	else
	{
		if ((btB.Text == btE.Text) && (btB.Text == btH.Text))
		{
			lb1.Text = L"Ganador " + btB.Text;
		}
	}
}

void Gato::btI_Click(Win::Event& e)
{
	btI.Text = salida(btI.Text);
	btI.Enabled = false;
	if ((btG.Text == btH.Text) && (btG.Text == btI.Text))
	{
		lb1.Text = L"Ganador " + btG.Text;
	}
	else
	{
		if ((btC.Text == btF.Text) && (btC.Text == btI.Text))
		{
			lb1.Text = L"Ganador " + btC.Text;
		}
		else
		{
			if ((btA.Text == btE.Text) && (btA.Text == btI.Text))
			{
				lb1.Text = L"Ganador " + btA.Text;
			}
		}
	}
}

void Gato::btReinicio_Click(Win::Event& e)
{
	contador = 0;
	btA.Text = L"";
	btB.Text = L"";
	btC.Text = L"";
	btD.Text = L"";
	btE.Text = L"";
	btF.Text = L"";
	btG.Text = L"";
	btH.Text = L"";
	btI.Text = L"";
	lb1.Text = L"Juego de Gato";
	btA.Enabled = true;
	btB.Enabled = true;
	btC.Enabled = true;
	btD.Enabled = true;
	btE.Enabled = true;
	btF.Enabled = true;
	btG.Enabled = true;
	btH.Enabled = true;
	btI.Enabled = true;
}

