#pragma once
#include <winrt/Microsoft.Graphics.Canvas.UI.Xaml.h>

class Win2DLayer {
public:
    void Attach(winrt::Microsoft::Graphics::Canvas::UI::Xaml::CanvasControl canvas);
    void Draw(Microsoft::Graphics::Canvas::CanvasDrawingSession ds);
};