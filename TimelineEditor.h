#pragma once
#include <vector>

struct TimelineKey {
    float time;
    std::wstring property;
    float value;
};

class TimelineEditor {
public:
    std::vector<TimelineKey> keys;
    void AddKey(TimelineKey k);
    float GetValue(const std::wstring& property, float time);
};