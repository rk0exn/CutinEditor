#pragma once
#include <winrt/Microsoft.Graphics.Canvas.UI.Xaml.h>

class Dx12Renderer {
public:
    void Initialize(winrt::Microsoft::Graphics::Canvas::UI::Xaml::CanvasControl canvas);
    void Render();
};