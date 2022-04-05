#include "sa_cache.h"

SACache *createSACache(MainMem *mem,
                     uint32_t set_index_bitcount,
                     uint32_t word_index_bitcount,
                     uint32_t cache_lines_per_set) {

    return NULL;
}

void freeSACache(SACache *cache) {
}

SACacheResult readByte(SACache *cache, uint32_t address, uint8_t *value) {
    return SA_UNIT_FAIL;
}

SACacheResult writeByte(SACache *cache, uint32_t address, uint8_t value) {
    return SA_UNIT_FAIL;
}

void flushCache(SACache *cache) {
}
