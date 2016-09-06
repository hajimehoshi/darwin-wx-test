#include "main.h"

#include "wx/wx.h"
#include "myframe.h"

class MyApp: public wxApp
{
public:
  virtual bool OnInit();
};

bool MyApp::OnInit()
{
  MyFrame *frame = new MyFrame( "Hello World", wxPoint(50, 50), wxSize(450, 340) );
  frame->Show(true);
  return true;
}

wxIMPLEMENT_APP_NO_MAIN(MyApp);

int Main()
{
  int argc = 0;
  char* argv = nullptr;
  return wxEntry(argc, &argv);
}
