#pragma once

#include "MainWindow.g.h"
#include "winrt/Microsoft.UI.Xaml.Controls.h"


namespace winrt::MyApp::implementation
{
	struct MainWindow : MainWindowT<MainWindow>
	{
		MainWindow();

		int32_t MyProperty();
		void MyProperty(int32_t value);

		void showPage(Microsoft::UI::Xaml::Controls::Frame& rootFrame);

		Microsoft::UI::Xaml::Controls::Frame getPageOneFrame();
		Microsoft::UI::Xaml::Controls::Frame getPageTwoFrame();


		void pageOneButton_Click(IInspectable const& sender, Microsoft::UI::Xaml::RoutedEventArgs const& args);
		void pageTwoButton_Click(IInspectable const& sender, Microsoft::UI::Xaml::RoutedEventArgs const& args);


	};
}

namespace winrt::MyApp::factory_implementation
{
	struct MainWindow : MainWindowT<MainWindow, implementation::MainWindow>
	{
	};
}
