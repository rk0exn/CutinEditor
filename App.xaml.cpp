#include "pch.h"
#include "App.xaml.h"
#include "MainWindow.xaml.h"

void App::OnLaunched(Microsoft::UI::Xaml::LaunchActivatedEventArgs const&) {
    auto window = winrt::make<MainWindow>();
    window.Activate();
}
