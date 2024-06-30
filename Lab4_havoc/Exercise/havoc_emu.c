
#include <windows.h>
#include <stdio.h>
#include <stdint.h>

ULONG64 XorAlgorithm(char *a1, int buflen, char *a3, ULONG64 a4);

void dump_bytes(const unsigned char *data, size_t length) {
    if (data == NULL) {
        return;
    }

    for (size_t i = 0; i < length; ++i) {
        printf("\\x%02x", data[i]);
    }
    printf("\n");
}

// emulate the sample: ffde53857435dbea42dbfb9494518c656ba9da4193b8e3ece47e553535280cf1 (Havoc.MTB detection)

int main(int argc, char *argv[])
{
    char buf1[] = "\x03\x0d\x05\x1f\x69\x37\x3b\x06\x00\x65\x45\x2f\x03\x4e\x1d\x0a\x07\x77\x1c\x17\x0e\x48\x1b\x3c\x01\x1a\x53\x24\x16\x27\x1b\x04\x23\x00\x46\x11\x06\x05\x0b\x52\x23\x07\x17\x4b\x1b\x1b\x26\x01\x07\x14\x69\x1b\x35\x1b\x45\x26\x00\x03\x0b\x4e\x00\x00\x11\x25\x16\x02\x1f\x0d\x0b\x5e\0";
    size_t cbBuf1 = strlen(buf1);

    char *key = "ThisIsTheDefenderWorkhop\0";
    size_t cbKey = strlen(key);

    ULONG64 xored = XorAlgorithm(buf1, cbBuf1, key, cbKey);
    printf("dec:%s\n", buf1);

}
