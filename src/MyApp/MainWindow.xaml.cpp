#include "pch.h"

#include "MainWindow.xaml.h"
#if __has_include("MainWindow.g.cpp")
#include "MainWindow.g.cpp"
#endif
#include "pages/PageOne.xaml.h"
//#include "pages/PageTwo.xaml.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Microsoft.UI.Xaml.Interop.h" // Add this include
#include "winrt/impl/MyApp.2.h"
#include <winrt/Windows.UI.Xaml.Interop.h>
#include <winrt/Windows.UI.Xaml.Controls.h>

using namespace winrt;
using namespace Microsoft::UI::Xaml;
using namespace Microsoft::UI::Xaml::Controls;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::MyApp::implementation
{

	MainWindow::MainWindow()
	{
		InitializeComponent();

		showPage(getPageOneFrame());
	}
	int32_t MainWindow::MyProperty()
	{
		throw hresult_not_implemented();
	}

	void MainWindow::MyProperty(int32_t /* value */)
	{
		throw hresult_not_implemented();
	}

	void MainWindow::showPage(Microsoft::UI::Xaml::Controls::Frame& rootFrame)
	{
		content().Children().Clear();
		content().Children().Append(rootFrame);
	}

	Microsoft::UI::Xaml::Controls::Frame MainWindow::getPageOneFrame()
	{
		Microsoft::UI::Xaml::Controls::Frame rootFrame = Frame();
		rootFrame.Navigate(xaml_typename<MyApp::PageOne>());
		return rootFrame;
	}

	Microsoft::UI::Xaml::Controls::Frame MainWindow::getPageTwoFrame()
	{
		Microsoft::UI::Xaml::Controls::Frame rootFrame = Frame();
		rootFrame.Navigate(xaml_typename<MyApp::PageTwo>());
		return rootFrame;
	}

	void MainWindow::pageOneButton_Click(IInspectable const& /*sender*/, Microsoft::UI::Xaml::RoutedEventArgs const& /*args*/)
	{
		showPage(getPageOneFrame());
	}

	void MainWindow::pageTwoButton_Click(IInspectable const& /*sender*/, Microsoft::UI::Xaml::RoutedEventArgs const& /*args*/)
	{
		showPage(getPageTwoFrame());
	}

}
