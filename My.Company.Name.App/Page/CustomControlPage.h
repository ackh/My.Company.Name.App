#pragma once

#include "CustomControlPage.g.h"


namespace winrt::My::Company::Name::App::implementation
{
  struct CustomControlPage : CustomControlPageT<CustomControlPage>
  {
    CustomControlPage();
  };
}


namespace winrt::My::Company::Name::App::factory_implementation
{
  struct CustomControlPage : CustomControlPageT<CustomControlPage, implementation::CustomControlPage>
  {
  };
}
