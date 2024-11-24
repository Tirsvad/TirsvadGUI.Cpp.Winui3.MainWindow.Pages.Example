#pragma once

#include "PageOne.g.h"

namespace winrt::MyApp::implementation
{
    struct PageOne : PageOneT<PageOne>
    {
        PageOne()
        {
            // Xaml objects should not call InitializeComponent during construction.
            // See https://github.com/microsoft/cppwinrt/tree/master/nuget#initializecomponent
        }

        int32_t MyProperty();
        void MyProperty(int32_t value);

        void myButton_Click(IInspectable const& sender, Microsoft::UI::Xaml::RoutedEventArgs const& args);
    };
}

namespace winrt::MyApp::factory_implementation
{
    struct PageOne : PageOneT<PageOne, implementation::PageOne>
    {
    };
}
