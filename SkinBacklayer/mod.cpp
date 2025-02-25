#include "helpers.h"
#include <cstdint>

extern "C" {
    void __declspec(dllexport) Init() {
        WRITE_MEMORY(0x14027808A, uint8_t, 0x03);
        WRITE_MEMORY(0x1402781DB, uint8_t, 0xF2);
        WRITE_MEMORY(0x151300C71, uint8_t, 0xF3);
        WRITE_MEMORY(0x151300CC2, uint8_t, 0xF2);
    }
}
