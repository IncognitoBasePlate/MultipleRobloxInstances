#include <Windows.h>

int main(int argc, char* argv[])
{
    HANDLE mutex = CreateMutexA(NULL, FALSE, "ROBLOX_singletonMutex");

    system("pause");

    bool ReleaseMutex(mutex);
    bool CloseHandle(mutex);
}
