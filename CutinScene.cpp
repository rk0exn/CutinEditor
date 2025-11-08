#include "CutinScene.h"

void CutinScene::AddLayer(const CutinLayer& layer) {
    layers.push_back(layer);
}
void CutinScene::DrawAll() {
    for (auto& l : layers)
        if (l.layerPtr)
            ; // 各レイヤーの描画呼び出し
}