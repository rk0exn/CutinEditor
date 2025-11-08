#pragma once
#include <vector>
#include "Win2DLayer.h"

struct CutinLayer {
    std::wstring assetPath;
    Win2DLayer* layerPtr;
};

class CutinScene {
public:
    std::vector<CutinLayer> layers;
    void AddLayer(const CutinLayer& layer);
    void DrawAll();
};