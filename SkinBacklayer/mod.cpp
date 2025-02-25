#include "helpers.h"

extern "C" {
    void __declspec(dllexport) Init() {
        WRITE_MEMORY(0x14027808A, unsigned char, 0x03);
        WRITE_MEMORY(0x1402781DB, unsigned char, 0xF2);
        WRITE_MEMORY(0x151300C71, unsigned char, 0xF3);
        WRITE_MEMORY(0x151300CC2, unsigned char, 0xF2);
    }
}