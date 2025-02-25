#ifndef HELPER_H
#define HELPER_H

#include <windows.h>

#define WRITE_MEMORY(location, type, ...) \
    { \
        const type data[] = { __VA_ARGS__ }; \
        DWORD oldProtect; \
        VirtualProtect((void*)(location), sizeof(data), PAGE_EXECUTE_READWRITE, &oldProtect); \
        memcpy((void*)(location), data, sizeof(data)); \
        VirtualProtect((void*)(location), sizeof(data), oldProtect, &oldProtect); \
    }

#endif