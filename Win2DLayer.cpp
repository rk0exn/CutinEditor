#include "Win2DLayer.h"
#include <winrt/Windows.UI.h>

void Win2DLayer::Attach(winrt::Microsoft::Graphics::Canvas::UI::Xaml::CanvasControl canvas) {
    // Canvasイベントフック(例:画像インポート・テキスト挿入など)
}
void Win2DLayer::Draw(Microsoft::Graphics::Canvas::CanvasDrawingSession ds) {
    ds.Clear(winrt::Windows::UI::Colors::Black());
    ds.DrawText(L"Win2D Layer sample", 50, 50, winrt::Windows::UI::Colors::White());
}