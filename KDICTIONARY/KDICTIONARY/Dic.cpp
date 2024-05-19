#include "Dic.h"
#include<Windows.h>
using namespace KDICTIONARY;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    Application::Run(gcnew Dic());

    return 0;
}