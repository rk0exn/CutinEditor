#include "TimelineEditor.h"

void TimelineEditor::AddKey(TimelineKey k) {
    keys.push_back(k);
}
float TimelineEditor::GetValue(const std::wstring& property, float time) {
    // キーフレーム補間実装例
    return 0.0f;
}