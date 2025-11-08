#include "ShaderManager.h"
#include <d3dcompiler.h>
#include <vector>

bool ShaderManager::LoadAndCompile(const std::wstring& hlslPath, std::string entryPoint, std::string target) {
    Microsoft::WRL::ComPtr<ID3DBlob> errors;
    HRESULT hr = D3DCompileFromFile(
        hlslPath.c_str(), nullptr, D3D_COMPILE_STANDARD_FILE_INCLUDE,
        entryPoint.c_str(), target.c_str(), 0, 0, &compiledBlob, errors.GetAddressOf());
    return SUCCEEDED(hr);
}
Microsoft::WRL::ComPtr<ID3DBlob> ShaderManager::GetCompiledBlob() {
    return compiledBlob;
}