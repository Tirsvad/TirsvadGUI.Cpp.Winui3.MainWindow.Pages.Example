#include "pch.h"
#include "PageOne.xaml.h"
#if __has_include("PageOne.g.cpp")
#include "PageOne.g.cpp"
#endif

using namespace winrt;
using namespace Microsoft::UI::Xaml;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::MyApp::implementation
{
    int32_t PageOne::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void PageOne::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

    void PageOne::myButton_Click(IInspectable const&, RoutedEventArgs const&)
    {
        myButton().Content(box_value(L"Clicked"));
    }
}
