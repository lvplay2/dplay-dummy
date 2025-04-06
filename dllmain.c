#include <windows.h>

// Public functions (dummies)
__declspec(dllexport) HRESULT WINAPI DirectPlayCreate(GUID* lpGUID, void** lplpDP, IUnknown* pUnk) {
    return S_OK;
}

__declspec(dllexport) HRESULT WINAPI DirectPlayEnumerate(LPVOID lpCallback, LPVOID lpContext) {
    return S_OK;
}

__declspec(dllexport) HRESULT WINAPI DirectPlayEnumerateA(LPVOID lpCallback, LPVOID lpContext) {
    return S_OK;
}

__declspec(dllexport) HRESULT WINAPI DirectPlayEnumerateW(LPVOID lpCallback, LPVOID lpContext) {
    return S_OK;
}

__declspec(dllexport) HRESULT WINAPI DirectPlayLobbyCreateA(GUID* lpGUID, void** lplpDPLobby, IUnknown* pUnk) {
    return S_OK;
}

__declspec(dllexport) HRESULT WINAPI DirectPlayLobbyCreateW(GUID* lpGUID, void** lplpDPLobby, IUnknown* pUnk) {
    return S_OK;
}

// Internal/private functions (dummies)
HRESULT WINAPI DllCanUnloadNow(void) {
    return S_FALSE;
}

HRESULT WINAPI DllGetClassObject(REFCLSID rclsid, REFIID riid, LPVOID* ppv) {
    return CLASS_E_CLASSNOTAVAILABLE;
}

// Standard entry point
BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved) {
    return TRUE;
}
