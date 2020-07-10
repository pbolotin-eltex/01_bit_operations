#include <stdio.h>

int a = 0x11223344;
unsigned char c = 0xEE;

int main() {
    printf("%#x, %#x, %#x, %#x\n\n",
           (unsigned char)(a >> 24),
           (unsigned char)(a >> 16),
           (unsigned char)(a >> 8),
           (unsigned char)a);
    printf("%#x\n\n",
           (a & 0xFF00FFFF) | (c << 16));
    printf("%#x\n\n",
           (a & 0xFFFF00FF) | (c << 8));
    return 0;
}
