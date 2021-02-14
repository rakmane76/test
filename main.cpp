#include"noname.h"
#include<iostream>
#include<wx/wx.h>

using namespace std;

class CAPP : public wxApp {
    public:
        CAPP();
        ~CAPP();
        
        virtual bool OnInit();
};

IMPLEMENT_APP(CAPP);


CAPP::CAPP(){}

CAPP::~CAPP() {}

bool CAPP::OnInit(){
    wxPoint wxP(100,100);
    wxSize wxSi(600,600);
    wxString s("RockSales");
    ReceiptFrame *rFrame = new ReceiptFrame(NULL, wxID_ANY, s, wxP, wxSi);
    rFrame->Show(true);
    return true;
}