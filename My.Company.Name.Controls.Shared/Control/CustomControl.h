#pragma once

#include "CustomControl.g.h"


namespace winrt::My::Company::Name::Controls::implementation
{
  struct CustomControl : CustomControlT<CustomControl>
  {
  public:
    CustomControl();
    float ZoomFactor();
    void ZoomFactor(float value);

  private:
    float _zoomFactor;
  };
}


namespace winrt::My::Company::Name::Controls::factory_implementation
{
  struct CustomControl : CustomControlT<CustomControl, implementation::CustomControl>
  {
  };
}
