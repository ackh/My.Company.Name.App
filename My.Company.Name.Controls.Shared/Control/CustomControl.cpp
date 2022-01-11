#include "pch.h"
#include "CustomControl.h"
#include "CustomControl.g.cpp"


namespace winrt::My::Company::Name::Controls::implementation
{
  CustomControl::CustomControl()
  {
    _zoomFactor = 1.0;
  }


  float CustomControl::ZoomFactor()
  {
    return _zoomFactor;
  }


  void CustomControl::ZoomFactor(float value)
  {
    _zoomFactor = value;
  }
}
