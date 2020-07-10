#include <stdio.h>

//question about the order of a byte counting in the int number

int a = 0x11223344;
unsigned char c = 0xEE;

int main() {
    if(4 == sizeof(int)) {
        printf("int:   %#x\nuchar: %#04x\n\n", a, c);
        printf("int by bytes:\n\n%#04x, %#04x, %#04x, %#04x\n\n",
           (unsigned char)(a >> 24),
           (unsigned char)(a >> 16),
           (unsigned char)(a >> 8),
           (unsigned char)a);
        printf("3'th byte from the int end was replaced by uchar byte:\n\n%#x\n\n",
            (a & 0xFF00FFFF) | (c << 16));
        printf("3'th byte from the int begin was replaced by uchar byte:\n\n%#x\n\n",
            (a & 0xFFFF00FF) | (c << 8));
    }
    return 0;
}
