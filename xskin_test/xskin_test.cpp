#include "stdafx.h"
#include "App.h"


int WINAPI _tWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPTSTR lpCmdLine, int nCmdShow)
{
	MyApp app;
	app.SetResZip(TEXT("skin.zip"));

	MainWindow mainWnd;
	mainWnd.Create();
	UIRect rc(0, 0, 800, 600);
	mainWnd.SetBounds(rc);
	mainWnd.CenterWindow();
	mainWnd.SetFrameVisible(TRUE);
	mainWnd.Show();
	return app.Run();
}

