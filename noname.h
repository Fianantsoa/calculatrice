///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.1.0-0-g733bf3d)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/sizer.h>
#include <wx/button.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/frame.h>
#include <wx/event.h>
#include <wx/stattext.h>
#include <wx/button.h>
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <regex>
#include <cmath>

///////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
/// Class MyFrame1
///////////////////////////////////////////////////////////////////////////////
class MyFrame1 : public wxFrame
{
private:
protected:
	wxStaticText *m_staticText3;
	wxStaticText *m_staticText4;
	wxButton *m_button5;
	wxButton *m_button4;
	wxButton *m_button3;
	wxButton *m_button2;
	wxButton *m_button1;
	wxButton *m_button6;
	wxButton *m_button7;
	wxButton *m_button8;
	wxButton *m_button9;
	wxButton *m_button10;
	wxButton *m_button11;
	wxButton *m_button12;
	wxButton *m_button13;
	wxButton *m_button14;
	wxButton *m_button15;
	wxButton *m_button16;
	wxButton *m_button17;
	wxButton *m_button18;
	wxButton *m_button19;

	// Virtual event handlers, override them in your derived class
	virtual void cClicked(wxCommandEvent &event)
	{
		// Mettre à jour le texte de m_staticText3
		m_staticText3->SetLabel("");
		m_staticText4->SetLabel("");

		// Rafraîchir l'affichage pour refléter les modifications
		Refresh();
		event.Skip();
	}
	virtual void sevenClicked(wxCommandEvent &event)
	{
		// Récupérer la valeur actuelle du texte de m_staticText3
		wxString currentText = m_staticText3->GetLabel();

		// Ajouter le caractère "-" à la valeur actuelle
		currentText += "7";

		// Mettre à jour le texte de m_staticText3 avec la nouvelle valeur
		m_staticText3->SetLabel(currentText);

		// Rafraîchir l'affichage pour refléter les modifications
		Refresh();
		event.Skip();
	}
	virtual void fourClicked(wxCommandEvent &event)
	{
		wxString currentText = m_staticText3->GetLabel();
		currentText += "4";
		m_staticText3->SetLabel(currentText);
		Refresh();
		event.Skip();
	}
	virtual void oneClicked(wxCommandEvent &event)
	{
		wxString currentText = m_staticText3->GetLabel();
		currentText += "1";
		m_staticText3->SetLabel(currentText);
		Refresh();
		event.Skip();
	}
	virtual void zeroClicked(wxCommandEvent &event)
	{
		wxString currentText = m_staticText3->GetLabel();
		currentText += "0";
		m_staticText3->SetLabel(currentText);
		Refresh();
		event.Skip();
	}
	virtual void splitClicked(wxCommandEvent &event)
	{
		wxString currentText = m_staticText3->GetLabel();
		std::regex operatorRegex("[+-]?\\d+(\\.\\d+)?[\\+\\-\\*\\/\\%][+-]?\\d+(\\.\\d+)?");
		if (std::regex_match(currentText.ToStdString(), operatorRegex))
		{
			// Si le texte contient un opérateur numérique ou deux, évaluer l'expression
			equalClicked(event);
			// Mettre à jour le texte actuel avec le résultat
			currentText = m_staticText3->GetLabel();
		}

		// Supprimer les opérateurs en double à la fin du texte
		while (!currentText.empty())
		{
			char lastChar = currentText.Last();
			if (lastChar == '%' || lastChar == '.' || lastChar == '-' || lastChar == '*' || lastChar == '+' || lastChar == '/')
			{
				// Supprimer le dernier caractère
				currentText.RemoveLast();
			}
			else
			{
				break;
			}
		}

		// Ajouter le nouveau "+"
		currentText += "/";
		m_staticText3->SetLabel(currentText);
		Refresh();
		event.Skip();
	}
	virtual void eigthClicked(wxCommandEvent &event)
	{
		wxString currentText = m_staticText3->GetLabel();
		currentText += "8";
		m_staticText3->SetLabel(currentText);
		Refresh();
		event.Skip();
	}
	virtual void fiveClicked(wxCommandEvent &event)
	{
		wxString currentText = m_staticText3->GetLabel();
		currentText += "5";
		m_staticText3->SetLabel(currentText);
		Refresh();
		event.Skip();
	}
	virtual void twoClicked(wxCommandEvent &event)
	{
		wxString currentText = m_staticText3->GetLabel();
		currentText += "2";
		m_staticText3->SetLabel(currentText);
		Refresh();
		event.Skip();
	}
	virtual void pointClicked(wxCommandEvent &event)
	{
		wxString currentText = m_staticText3->GetLabel();
		if (!currentText.empty())
		{
			char lastChar = currentText.Last();
			if (lastChar == '%' || lastChar == '.' || lastChar == '-' || lastChar == '*' || lastChar == '+' || lastChar == '/')
			{
				// Supprimer le dernier caractère
				currentText.RemoveLast();
			}
		}
		currentText += ".";
		m_staticText3->SetLabel(currentText);
		Refresh();
		event.Skip();
	}
	virtual void moduloClicked(wxCommandEvent &event)
	{
		wxString currentText = m_staticText3->GetLabel();
		// Vérifier si le texte contient un opérateur numérique ou deux
		std::regex operatorRegex("[+-]?\\d+(\\.\\d+)?[\\+\\-\\*\\/\\%][+-]?\\d+(\\.\\d+)?");
		if (std::regex_match(currentText.ToStdString(), operatorRegex))
		{
			// Si le texte contient un opérateur numérique ou deux, évaluer l'expression
			equalClicked(event);
			// Mettre à jour le texte actuel avec le résultat
			currentText = m_staticText3->GetLabel();
		}

		// Supprimer les opérateurs en double à la fin du texte
		while (!currentText.empty())
		{
			char lastChar = currentText.Last();
			if (lastChar == '%' || lastChar == '.' || lastChar == '-' || lastChar == '*' || lastChar == '+' || lastChar == '/')
			{
				// Supprimer le dernier caractère
				currentText.RemoveLast();
			}
			else
			{
				break;
			}
		}

		// Ajouter le nouveau "+"
		currentText += "%";
		m_staticText3->SetLabel(currentText);
		Refresh();
		event.Skip();
	}
	virtual void nineClicked(wxCommandEvent &event)
	{
		wxString currentText = m_staticText3->GetLabel();
		currentText += "9";
		m_staticText3->SetLabel(currentText);
		Refresh();
		event.Skip();
	}
	virtual void sixClicked(wxCommandEvent &event)
	{
		wxString currentText = m_staticText3->GetLabel();
		currentText += "6";
		m_staticText3->SetLabel(currentText);
		Refresh();
		event.Skip();
	}
	virtual void threeClicked(wxCommandEvent &event)
	{
		wxString currentText = m_staticText3->GetLabel();
		currentText += "3";
		m_staticText3->SetLabel(currentText);
		Refresh();
		event.Skip();
	}
	virtual void delClicked(wxCommandEvent &event)
	{
		wxString currentText = m_staticText3->GetLabel();
		// Supprimer le dernier caractère
		currentText = currentText.RemoveLast();
		m_staticText3->SetLabel(currentText);
		event.Skip();
	}
	virtual void multipleClicked(wxCommandEvent &event)
	{
		wxString currentText = m_staticText3->GetLabel();
		if (currentText == "error")
		{
			m_staticText3->SetLabel("");
			Refresh();
			event.Skip();
		}
		// Vérifier si le texte contient un opérateur numérique ou deux
		std::regex operatorRegex("[+-]?\\d+(\\.\\d+)?[\\+\\-\\*\\/\\%][+-]?\\d+(\\.\\d+)?");
		if (std::regex_match(currentText.ToStdString(), operatorRegex))
		{
			// Si le texte contient un opérateur numérique ou deux, évaluer l'expression
			equalClicked(event);
			// Mettre à jour le texte actuel avec le résultat
			currentText = m_staticText3->GetLabel();
		}

		// Supprimer les opérateurs en double à la fin du texte
		while (!currentText.empty())
		{
			char lastChar = currentText.Last();
			if (lastChar == '%' || lastChar == '.' || lastChar == '-' || lastChar == '*' || lastChar == '+' || lastChar == '/')
			{
				// Supprimer le dernier caractère
				currentText.RemoveLast();
			}
			else
			{
				break;
			}
		}

		// Ajouter le nouveau "+"
		currentText += "*";
		m_staticText3->SetLabel(currentText);
		Refresh();
		event.Skip();
	}
	virtual void lessClicked(wxCommandEvent &event)
	{
		wxString currentText = m_staticText3->GetLabel();

		// Vérifier si le texte contient un opérateur numérique ou deux
		std::regex operatorRegex("[+-]?\\d+(\\.\\d+)?[\\+\\-\\*\\/\\%][+-]?\\d+(\\.\\d+)?");
		if (std::regex_match(currentText.ToStdString(), operatorRegex))
		{
			// Si le texte contient un opérateur numérique ou deux, évaluer l'expression
			equalClicked(event);
			// Mettre à jour le texte actuel avec le résultat
			currentText = m_staticText3->GetLabel();
		}

		// Supprimer les opérateurs en double à la fin du texte
		while (!currentText.empty())
		{
			char lastChar = currentText.Last();
			if (lastChar == '%' || lastChar == '.' || lastChar == '-' || lastChar == '*' || lastChar == '+' || lastChar == '/')
			{
				// Supprimer le dernier caractère
				currentText.RemoveLast();
			}
			else
			{
				break;
			}
		}

		// Ajouter le nouveau "+"
		currentText += "-";
		m_staticText3->SetLabel(currentText);
		Refresh();
		event.Skip();
	}
	virtual void plusClicked(wxCommandEvent &event)
	{
		wxString currentText = m_staticText3->GetLabel();
		if (currentText != "")
		{
			wxString currentText = m_staticText3->GetLabel();

			// Vérifier si le texte contient un opérateur numérique ou deux
			std::regex operatorRegex("[+-]?\\d+(\\.\\d+)?[\\+\\-\\*\\/\\%][+-]?\\d+(\\.\\d+)?");
			if (std::regex_match(currentText.ToStdString(), operatorRegex))
			{
				// Si le texte contient un opérateur numérique ou deux, évaluer l'expression
				equalClicked(event);
				// Mettre à jour le texte actuel avec le résultat
				currentText = m_staticText3->GetLabel();
			}

			// Supprimer les opérateurs en double à la fin du texte
			while (!currentText.empty())
			{
				char lastChar = currentText.Last();
				if (lastChar == '%' || lastChar == '.' || lastChar == '-' || lastChar == '*' || lastChar == '+' || lastChar == '/')
				{
					// Supprimer le dernier caractère
					currentText.RemoveLast();
				}
				else
				{
					break;
				}
			}

			// Ajouter le nouveau "+"
			currentText += "+";
			m_staticText3->SetLabel(currentText);
			Refresh();
			event.Skip();
		}
	}

	virtual void equalClicked(wxCommandEvent &event)
	{
		wxString currentText = m_staticText3->GetLabel();
		float erreur = false;
		int operateur = currentText.find_first_of("+-*/%", 1);
		int lenCurrentText = currentText.length() - (operateur + 1);

		float number1 = std::stof(std::string(currentText.substr(0, operateur)));
		float number2 = std::stof(std::string(currentText.substr(operateur + 1, lenCurrentText)));

		wxString signeOperator = currentText[operateur];
		float result;
		if (signeOperator == "+")
		{
			result = number1 + number2;
		}
		else if (signeOperator == "-")
		{
			result = number1 - number2;
		}
		else if (signeOperator == "*")
		{
			result = number1 * number2;
		}
		else if (signeOperator == "/")
		{
			if (number2 != 0)
			{
				result = number1 / number2;
			}
			else
			{
				erreur = true;
			}
		}
		else if (signeOperator == "%")
		{
			result = fmod(number1, number2);
		}

		std::ostringstream oss;
		oss << std::fixed << std::setprecision(2) << result; // Formater avec deux chiffres après la virgule
		std::string formattedResult = oss.str();

		if (erreur != false)
		{
			m_staticText3->SetLabel("error");
			erreur = false;
		}
		else
		{
			m_staticText3->SetLabel(formattedResult);
		}
		m_staticText4->SetLabel(currentText);
		event.Skip();
	}

public:
	MyFrame1(wxWindow *parent, wxWindowID id = wxID_ANY, const wxString &title = wxEmptyString, const wxPoint &pos = wxDefaultPosition, const wxSize &size = wxSize(271, 421), long style = wxDEFAULT_FRAME_STYLE | wxTAB_TRAVERSAL);

	~MyFrame1();
};
