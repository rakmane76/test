///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Jun 17 2015)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "sales.h"
#include "wx/print.h"
#include "wx/printdlg.h"

wxString str_category[]={wxT("Others"), wxT("Book"), wxT("Food"), wxT("Medical")};
wxString str_import[]={wxT("NO"), wxT("YES")};

float categoryTax = 0.10, importTax = 0.05;

wxPrintData *g_printData = NULL;
wxPageSetupDialogData* g_pageSetupData = NULL;



///////////////////////////////////////////////////////////////////////////

ReceiptFrame::ReceiptFrame( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), 70, 90, 90, false, wxEmptyString ) );
	
	Receipt_Menu = new wxMenuBar( 0 );
	m_menu1 = new wxMenu();
	Task_m_menu = new wxMenu();
	wxMenuItem* Task_m_menuItem = new wxMenuItem( m_menu1, wxID_ANY, wxT("Task"), wxEmptyString, wxITEM_NORMAL, Task_m_menu );
	wxMenuItem* NewReceipt_m_menuItem;
	NewReceipt_m_menuItem = new wxMenuItem( Task_m_menu, wxID_menu_newReceipt, wxString( wxT("New Receipt") ) , wxEmptyString, wxITEM_NORMAL );
	Task_m_menu->Append( NewReceipt_m_menuItem );
	
	wxMenuItem* ClearReceipt_m_menuItem;
	ClearReceipt_m_menuItem = new wxMenuItem( Task_m_menu, wxID_menu_clearReceipt, wxString( wxT("ClearRecipt") ) , wxEmptyString, wxITEM_NORMAL );
	Task_m_menu->Append( ClearReceipt_m_menuItem );
	
	wxMenuItem* Print_m_menuItem;
	Print_m_menuItem = new wxMenuItem( Task_m_menu, wxID_menu_printReceipt, wxString( wxT("Print") ) , wxEmptyString, wxITEM_NORMAL );
	Task_m_menu->Append( Print_m_menuItem );
	
	m_menu1->Append( Task_m_menuItem );
	
	Receipt_Menu->Append( m_menu1, wxT("Receipt") ); 
	
	this->SetMenuBar( Receipt_Menu );
	
	wxBoxSizer* Main_bSizer;
	Main_bSizer = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* sbSizer_Header;
	sbSizer_Header = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("Header") ), wxHORIZONTAL );
	
	sbSizer_Header->SetMinSize( wxSize( 650,50 ) ); 
	Item_textCtrl = new wxTextCtrl( sbSizer_Header->GetStaticBox(), wxID_ANY, wxT("Item"), wxDefaultPosition, wxSize( 77,-1 ), wxTE_CENTRE|wxTE_READONLY, wxDefaultValidator, wxT("Items") );
	sbSizer_Header->Add( Item_textCtrl, 0, 0, 5 );
	
	QTY_textCtrl = new wxTextCtrl( sbSizer_Header->GetStaticBox(), wxID_ANY, wxT("QTY"), wxDefaultPosition, wxSize( 83,-1 ), wxTE_CENTRE|wxTE_READONLY );
	sbSizer_Header->Add( QTY_textCtrl, 0, wxALIGN_LEFT, 5 );
	
	CATEGORY_m_textCtrl = new wxTextCtrl( sbSizer_Header->GetStaticBox(), wxID_ANY, wxT("Category"), wxDefaultPosition, wxSize( 77,-1 ), wxTE_CENTRE|wxTE_READONLY );
	sbSizer_Header->Add( CATEGORY_m_textCtrl, 0, wxALIGN_LEFT, 5 );
	
	IMPORT_m_textCtrl = new wxTextCtrl( sbSizer_Header->GetStaticBox(), wxID_ANY, wxT("Import"), wxDefaultPosition, wxSize( 80,-1 ), wxTE_CENTRE|wxTE_READONLY );
	sbSizer_Header->Add( IMPORT_m_textCtrl, 0, wxALIGN_LEFT, 5 );
	
	PRICEUNIT_m__textCtrl8 = new wxTextCtrl( sbSizer_Header->GetStaticBox(), wxID_ANY, wxT("Price/Unit"), wxDefaultPosition, wxSize( 80,-1 ), wxTE_CENTRE|wxTE_READONLY );
	sbSizer_Header->Add( PRICEUNIT_m__textCtrl8, 0, wxALIGN_LEFT, 5 );
	
	TAX_m_textCtrl = new wxTextCtrl( sbSizer_Header->GetStaticBox(), wxID_ANY, wxT("Tax"), wxDefaultPosition, wxSize( 80,-1 ), wxTE_CENTRE|wxTE_READONLY );
	sbSizer_Header->Add( TAX_m_textCtrl, 0, wxALIGN_LEFT, 5 );
	
	Total_m_textCtrl = new wxTextCtrl( sbSizer_Header->GetStaticBox(), wxID_ANY, wxT("Total"), wxDefaultPosition, wxSize( 77,-1 ), wxTE_CENTRE|wxTE_READONLY );
	sbSizer_Header->Add( Total_m_textCtrl, 0, wxALIGN_LEFT, 5 );
	
	
	Main_bSizer->Add( sbSizer_Header, 0, wxALIGN_LEFT|wxALIGN_TOP, 1 );
	
	Data = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxVSCROLL );
	
	// Grid
	Data->CreateGrid( 20, 7 );
	Data->EnableEditing( true );
	Data->EnableGridLines( true );
	Data->EnableDragGridSize( true );
	Data->SetMargins( 0, 0 );
	
	// Columns
	Data->EnableDragColMove( false );
	Data->EnableDragColSize( true );
	Data->SetColLabelSize( 0 );
	Data->SetColLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Rows
	Data->SetRowSize( 0, 24 );
	Data->SetRowSize( 1, 24 );
	Data->SetRowSize( 2, 24 );
	Data->SetRowSize( 3, 24 );
	Data->SetRowSize( 4, 24 );
	Data->SetRowSize( 5, 24 );
	Data->SetRowSize( 6, 24 );
	Data->SetRowSize( 7, 24 );
	Data->SetRowSize( 8, 24 );
	Data->SetRowSize( 9, 24 );
	Data->SetRowSize( 10, 24 );
	Data->SetRowSize( 11, 24 );
	Data->SetRowSize( 12, 24 );
	Data->SetRowSize( 13, 24 );
	Data->SetRowSize( 14, 24 );
	Data->SetRowSize( 15, 24 );
	Data->SetRowSize( 16, 24 );
	Data->SetRowSize( 17, 24 );
	Data->SetRowSize( 18, 24 );
	Data->SetRowSize( 19, 15 );
	Data->EnableDragRowSize( true );
	Data->SetRowLabelSize( 0 );
	Data->SetRowLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	Data->SetColFormatNumber(1);
	Data->SetColFormatFloat(4,-1,2);
	
	for ( int x=0; x < 20; x++){
		Data->SetCellEditor(x,2,new wxGridCellChoiceEditor(4,str_category));
		Data->SetCellValue(x,2, str_category[0]);
		Data->SetCellOverflow(x,2, false);

		Data->SetCellEditor(x,3,new wxGridCellChoiceEditor(2,str_import));
		Data->SetCellValue(x,3, str_import[0]);
		Data->SetCellOverflow(x,3, false);

		Data->SetReadOnly(x,5,true);
		Data->SetReadOnly(x,6,true);
		Data->SetCellValue(x,5,"0.00");
		Data->SetCellValue(x,6,"0.00");
	}
	
	g_printData = new wxPrintData;
	g_pageSetupData = new wxPageSetupDialogData;
	(*g_pageSetupData) = *g_printData;

	// Label Appearance
	
	// Cell Defaults
	Data->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	Main_bSizer->Add( Data, 0, 0, 5 );
	
	wxStaticBoxSizer* Total_sbSizer;
	Total_sbSizer = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("Total_Footer") ), wxHORIZONTAL );
	
	/*
	Category_m_comboBox = new wxComboBox( Total_sbSizer->GetStaticBox(), wx_Category_combo, wxT("Category"), wxDefaultPosition, wxSize( 120,-1 ), 0, NULL, 0 );
	Category_m_comboBox->Append( wxT("books") );
	Category_m_comboBox->Append( wxT("food") );
	Category_m_comboBox->Append( wxT("medical") );
	Category_m_comboBox->Append( wxT("others") );
	Total_sbSizer->Add( Category_m_comboBox, 0, wxALL, 5 );
	
	IMPORT_m_comboBox = new wxComboBox( Total_sbSizer->GetStaticBox(), wxImportCombobox, wxT("Import"), wxDefaultPosition, wxSize( 100,-1 ), 0, NULL, 0 );
	IMPORT_m_comboBox->Append( wxT("YES") );
	IMPORT_m_comboBox->Append( wxT("NO") );
	Total_sbSizer->Add( IMPORT_m_comboBox, 0, wxALL, 5 );
	*/

	TOTAL_TAX = new wxStaticText( Total_sbSizer->GetStaticBox(), wxID_ANY, wxT("Total Tax"), wxDefaultPosition, wxDefaultSize, 0 );
	TOTAL_TAX->Wrap( -1 );
	Total_sbSizer->Add( TOTAL_TAX, 0, wxALL, 5 );
	
	TotalTax_textCtrl = new wxTextCtrl( Total_sbSizer->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY );
	TotalTax_textCtrl->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_GRAYTEXT ) );
	
	Total_sbSizer->Add( TotalTax_textCtrl, 0, wxALL, 5 );
	
	TOTAL = new wxStaticText( Total_sbSizer->GetStaticBox(), wxID_ANY, wxT("TOTAL"), wxDefaultPosition, wxDefaultSize, 0 );
	TOTAL->Wrap( -1 );
	Total_sbSizer->Add( TOTAL, 0, wxALL, 5 );
	
	SumTotal_m_textCtrl = new wxTextCtrl( Total_sbSizer->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY );
	SumTotal_m_textCtrl->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_GRAYTEXT ) );
	
	Total_sbSizer->Add( SumTotal_m_textCtrl, 0, wxALL, 5 );
	
	
	Main_bSizer->Add( Total_sbSizer, 1, wxEXPAND, 5 );
	
	
	this->SetSizer( Main_bSizer );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	this->Connect( NewReceipt_m_menuItem->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( ReceiptFrame::createNewReceipt ) );
	this->Connect( ClearReceipt_m_menuItem->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( ReceiptFrame::clearReceipt ) );
	this->Connect( Print_m_menuItem->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( ReceiptFrame::printReceipt ) );
	Data->Connect( wxEVT_CHAR, wxKeyEventHandler( ReceiptFrame::OnChar ), NULL, this );
	Data->Connect( wxEVT_GRID_CELL_CHANGE, wxGridEventHandler( ReceiptFrame::GridCellChange ), NULL, this );
	Data->Connect( wxEVT_GRID_SELECT_CELL, wxGridEventHandler( ReceiptFrame::GridSelectCell ), NULL, this );
	Data->Connect( wxEVT_KEY_DOWN, wxKeyEventHandler( ReceiptFrame::OnKeyDown ), NULL, this );
	Data->Connect( wxEVT_KEY_UP, wxKeyEventHandler( ReceiptFrame::OnKeyUp ), NULL, this );
	TotalTax_textCtrl->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( ReceiptFrame::OnText ), NULL, this );
	TotalTax_textCtrl->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( ReceiptFrame::OnTextEnter ), NULL, this );
}

ReceiptFrame::~ReceiptFrame()
{
	// Disconnect Events
	this->Disconnect( wxID_menu_newReceipt, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( ReceiptFrame::createNewReceipt ) );
	this->Disconnect( wxID_menu_clearReceipt, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( ReceiptFrame::clearReceipt ) );
	this->Disconnect( wxID_menu_printReceipt, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( ReceiptFrame::printReceipt ) );
	Data->Disconnect( wxEVT_CHAR, wxKeyEventHandler( ReceiptFrame::OnChar ), NULL, this );
	Data->Disconnect( wxEVT_GRID_CELL_CHANGE, wxGridEventHandler( ReceiptFrame::GridCellChange ), NULL, this );
	Data->Disconnect( wxEVT_GRID_SELECT_CELL, wxGridEventHandler( ReceiptFrame::GridSelectCell ), NULL, this );
	Data->Disconnect( wxEVT_KEY_DOWN, wxKeyEventHandler( ReceiptFrame::OnKeyDown ), NULL, this );
	Data->Disconnect( wxEVT_KEY_UP, wxKeyEventHandler( ReceiptFrame::OnKeyUp ), NULL, this );
	TotalTax_textCtrl->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( ReceiptFrame::OnText ), NULL, this );
	TotalTax_textCtrl->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( ReceiptFrame::OnTextEnter ), NULL, this );
	delete g_printData;
    delete g_pageSetupData;
	
}

void ReceiptFrame::GridCellChange( wxGridEvent& event ){
	wxGrid *grid = reinterpret_cast<wxObject *>(event.GetEventObject());
	/*
	int x = grid->GetGridCursorRow();
	int y = grid->GetGridCursorCol();
	std::cout << "Grid row:" << x << ", col:" << y << ", new val:" << grid->GetCellValue(x,y) << std::endl;
	*/

	// set  TotalTax_textCtrl and SumTotal_m_textCtrl;
	double totalTax = 0.00f, totalSum=0.00f, tmpDouble=0.00f;
	wxString mystr; 
	double category=0.00f, import=0.00f, priceUnit=0.00f;
	long int qty=0;
			
	for ( int x=0; x < 20; x++) {
		if (!grid->GetCellValue(x,1).IsEmpty() && !grid->GetCellValue(x,4).IsEmpty()){
			category = import = priceUnit = 0.00f;
			qty = 0;
			grid->GetCellValue(x,1).ToLong(&qty);
			grid->GetCellValue(x,4).ToDouble(&priceUnit);
			if (grid->GetCellValue(x,2).Cmp("Others") == 0) category = qty * priceUnit * categoryTax;
			if (grid->GetCellValue(x,3).Cmp("YES") == 0) import = qty * priceUnit * importTax;
			category += import;
			
			mystr.Clear();
			mystr = wxString::Format(wxT("%.2f"), category);
			mystr.ToDouble(&category);
			int len = mystr.Len();
			switch (static_cast<char>(mystr[len -1])){
				case '1' : 
				case '6' : category += 0.04 ; break;
			
				case '2' : 
				case '7' : category += 0.03 ; break;

				case '3' : 
				case '8' : category += 0.02 ; break;
				
				case '4' : 
				case '9' : category += 0.01 ; break;
			}
			mystr.Clear();
			mystr = wxString::Format(wxT("%.2f"), category);	
			grid->SetCellValue(x,5,mystr);
			mystr.Clear();
			import = priceUnit*qty + category;
			mystr = wxString::Format(wxT("%.2f"), import);
			grid->SetCellValue(x,6,mystr);
		}
		grid->GetCellValue(x,5).ToDouble(&tmpDouble);
		totalTax += tmpDouble;

		grid->GetCellValue(x,6).ToDouble(&tmpDouble);
		totalSum += tmpDouble;
	}
	mystr.Clear();
	mystr = wxString::Format(wxT("%.2f"), totalTax);
	TotalTax_textCtrl->ChangeValue(mystr);
	mystr.Clear();
	mystr = wxString::Format(wxT("%.2f"), totalSum);
	SumTotal_m_textCtrl->ChangeValue(mystr);
}

void ReceiptFrame::createNewReceipt(wxCommandEvent& event){
	refreshPage();
}

void ReceiptFrame::clearReceipt(wxCommandEvent& event){
	refreshPage();
}

void ReceiptFrame::printReceipt(wxCommandEvent& event){
	wxPrintDialogData printDialogData(* g_printData);
	wxPrinter printer(&printDialogData);
    if (!printer.Print(this, nullptr, true /*prompt*/))
    {
        if (wxPrinter::GetLastError() == wxPRINTER_ERROR)
        {
            std::cout << "There was a problem printing. Perhaps your current printer is not set correctly?" << std::endl;
        }
        else
        {
            std::cout << "You canceled printing" << std::endl;
        }
    }
    else
    {
        (*g_printData) = printer.GetPrintDialogData().GetPrintData();
    }
}

void ReceiptFrame::refreshPage(){
	Data->ClearGrid();
	for ( int x=0; x < 20; x++){
		Data->SetCellEditor(x,2,new wxGridCellChoiceEditor(4,str_category));
		Data->SetCellValue(x,2, str_category[0]);
		Data->SetCellOverflow(x,2, false);

		Data->SetCellEditor(x,3,new wxGridCellChoiceEditor(2,str_import));
		Data->SetCellValue(x,3, str_import[0]);
		Data->SetCellOverflow(x,3, false);

		Data->SetReadOnly(x,5,true);
		Data->SetReadOnly(x,6,true);
		Data->SetCellValue(x,5,"0.00");
		Data->SetCellValue(x,6,"0.00");
	}
	TotalTax_textCtrl->ChangeValue("0.00");
	SumTotal_m_textCtrl->ChangeValue("0.00");
}