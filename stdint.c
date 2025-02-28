#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>

typedef struct{
    uint8_t id; //max: 0 to 255
    int16_t id2; //max: -32768 to 32768
    uint32_t id3; //max: 0 to 2147483648
    int64_t id4; //max: -9223372036854775808 to 9223372036854775808
}DataPacket;

int main(){

    DataPacket data = {255, 28392, 1111111111, 8483837574933LL};

    printf("%" PRIu8 "\n", data.id);
    printf("%" PRId16 "\n", data.id2);
    printf("%" PRIu32 "\n", data.id3);
    printf("%" PRId64 "\n", data.id4);
    
    return EXIT_SUCCESS;
}
