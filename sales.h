///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Jun 17 2015)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __NONAME_H__
#define __NONAME_H__

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/menu.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/textctrl.h>
#include <wx/sizer.h>
#include <wx/statbox.h>
#include <wx/grid.h>
#include <wx/combobox.h>
#include <wx/stattext.h>
#include <wx/frame.h>

///////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
/// Class ReceiptFrame
///////////////////////////////////////////////////////////////////////////////
class ReceiptFrame : public wxFrame 
{
	private:
	
	protected:
		enum
		{
			wxID_menu_newReceipt = 1000,
			wxID_menu_clearReceipt,
			wxID_menu_printReceipt,
			wx_Category_combo,
			wxImportCombobox
		};
		
		wxMenuBar* Receipt_Menu;
		wxMenu* m_menu1;
		wxMenu* Task_m_menu;
		wxTextCtrl* Item_textCtrl;
		wxTextCtrl* QTY_textCtrl;
		wxTextCtrl* CATEGORY_m_textCtrl;
		wxTextCtrl* IMPORT_m_textCtrl;
		wxTextCtrl* PRICEUNIT_m__textCtrl8;
		wxTextCtrl* TAX_m_textCtrl;
		wxTextCtrl* Total_m_textCtrl;
		wxGrid* Data;
		//wxComboBox* Category_m_comboBox;
		//wxComboBox* IMPORT_m_comboBox;
		wxStaticText* TOTAL_TAX;
		wxTextCtrl* TotalTax_textCtrl;
		wxStaticText* TOTAL;
		wxTextCtrl* SumTotal_m_textCtrl;
		
		// Virtual event handlers, overide them in your derived class
		virtual void createNewReceipt( wxCommandEvent& event ); // { event.Skip(); }
		virtual void clearReceipt( wxCommandEvent& event ); // { event.Skip(); }
		virtual void printReceipt( wxCommandEvent& event ); // { event.Skip(); }
		virtual void OnChar( wxKeyEvent& event ) { event.Skip(); }
		virtual void GridCellChange( wxGridEvent& event ); // { event.Skip(); }
		virtual void GridSelectCell( wxGridEvent& event ) { event.Skip(); }
		virtual void OnKeyDown( wxKeyEvent& event ) { event.Skip(); }
		virtual void OnKeyUp( wxKeyEvent& event ) { event.Skip(); }
		virtual void OnText( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnTextEnter( wxCommandEvent& event ) { event.Skip(); }
		void refreshPage();
		
	
	public:
		
		ReceiptFrame( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 909,729 ), long style = wxFRAME_SHAPED|wxMAXIMIZE_BOX|wxRESIZE_BORDER|wxSYSTEM_MENU|wxTAB_TRAVERSAL|wxVSCROLL );
		
		~ReceiptFrame();
	
};

#endif //__NONAME_H__
