#include <stdint.h>
#include <stdio.h>

typedef uint8_t byte;

int main(int argc, char* argv[]){
    if (argc < 3) {
            fprintf(stderr, "Usage: %s <source file> <destination file>\n", argv[0]);
            return 1;
    }
    // define the files to work with
    FILE* src = fopen(argv[1], "rb");
    FILE* dst = fopen(argv[2], "wb");
    if (src == NULL || dst == NULL) {
        return 1;
    }

    byte b;

    while ((fread(&b, sizeof(b), 1, src) != 0)) {
       fwrite(&b, sizeof(b), 1, dst);
    }
    return 0;
    fclose(src);
    fclose(dst);
}
