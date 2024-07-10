#include <stdint.h>
#include <stdio.h>

/* 
 * Used unions here because unions make use of the same memory location to 
 * interpret it differently. For example, a union with parts of float and int,
 * will use the same bits to inerpret their values.
*/

typedef union {
    float f;
    uint32_t i;
} floatInt;

typedef union {
    char c;
    uint32_t i;
} charInt;

void binaryRepresentation(uint32_t num, uint16_t bits){
// >> operator shifts extra bits to the right, i.e. moves bits to the right
// & 1 results in the least significant bit i.e. right-most bit.

    for (int i=bits-1; i>=0; i--) { printf("%d", (num >> i) & 1);
	if (i % 4 == 0 && i!=0) {
	    printf(" ");
	}
    }
    printf("\n");
}

int main(){
    floatInt num;
    num.f = 10.25;
    binaryRepresentation(num.f, 32);
    charInt character;
    character.c = 'a';
    binaryRepresentation(character.c, 8);
}
