#include "fa_cache.h"

FACache *createFACache(MainMem *mem,
                     uint32_t set_index_bitcount,
                     uint32_t word_index_bitcount) {

    return NULL;
}

void freeFACache(FACache *cache) {
}

FACacheResult readByte(FACache *cache, uint32_t address, uint8_t *value) {
    return FA_UNIT_FAIL;
}

FACacheResult writeByte(FACache *cache, uint32_t address, uint8_t value) {
    return FA_UNIT_FAIL;
}


