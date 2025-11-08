#pragma once
#include <d3d12.h>
#include <string>
#include <wrl/client.h>

class ShaderManager {
public:
    bool LoadAndCompile(const std::wstring& hlslPath, std::string entryPoint = "main", std::string target = "ps_5_0");
    Microsoft::WRL::ComPtr<ID3DBlob> GetCompiledBlob();
private:
    Microsoft::WRL::ComPtr<ID3DBlob> compiledBlob;
};