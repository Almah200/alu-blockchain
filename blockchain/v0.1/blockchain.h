#ifndef BLOCKCHAIN_H
#define BLOCKCHAIN_H

#include <stdint.h>
#include <llist.h>  // Ensure llist.h is properly included

typedef struct block {
    // Block structure members
    uint32_t index;
    int8_t *data;
    size_t data_len;
    // Other members
} block_t;

typedef struct blockchain {
    llist_t *chain;  // Assuming llist_t is a list type defined in llist.h
} blockchain_t;

blockchain_t *blockchain_create(void);
block_t *block_create(block_t *prev, int8_t *data, uint32_t data_len);

#endif /* BLOCKCHAIN_H */
