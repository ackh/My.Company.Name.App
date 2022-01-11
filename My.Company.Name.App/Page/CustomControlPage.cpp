#include "pch.h"
#include "CustomControlPage.h"
#if __has_include("CustomControlPage.g.cpp")
#include "CustomControlPage.g.cpp"
#endif

using namespace winrt;
using namespace Windows::UI::Xaml;


namespace winrt::My::Company::Name::App::implementation
{
  CustomControlPage::CustomControlPage()
  {
    InitializeComponent();
  }
}
