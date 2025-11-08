#include "pch.h"
#include "MainWindow.xaml.h"
#include "Dx12Renderer.h"
#include "Win2DLayer.h"
#include <winrt/Microsoft.Graphics.Canvas.UI.Xaml.h>

Dx12Renderer dx12Renderer;
Win2DLayer   win2dLayer;

MainWindow::MainWindow() {
    InitializeComponent();
    dx12Renderer.Initialize(CanvasView);
    win2dLayer.Attach(CanvasView);
}

void MainWindow::CanvasView_Draw(Microsoft::Graphics::Canvas::UI::Xaml::CanvasControl const&, 
    Microsoft::Graphics::Canvas::UI::Xaml::CanvasDrawEventArgs const& args) {
    win2dLayer.Draw(args.DrawingSession);
    dx12Renderer.Render();
}