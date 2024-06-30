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

int main(int argc, char *argv[])
{
    char buf1[] = "Well Done! If you see this message than the string has been decrypted\n\0";
    size_t cbBuf1 = strlen(buf1);
    char *key = "ThisIsTheDefenderWorkhop\0";
    size_t cbKey = strlen(key);

    ULONG64 xored = XorAlgorithm(buf1, cbBuf1, key, cbKey);
    printf("enc:");
    dump_bytes((const unsigned char *)buf1, cbBuf1);

    xored = XorAlgorithm(buf1, cbBuf1, key, cbKey);
    printf("dec:%s\n", buf1);

}