#include "blockchain.h"
#include <stdlib.h>

blockchain_t *blockchain_create(void) {
    blockchain_t *blockchain = malloc(sizeof(blockchain_t));
    if (!blockchain) {
        return NULL;
    }
    blockchain->chain = llist_create(MT_SUPPORT_FALSE);
    if (!blockchain->chain) {
        free(blockchain);
        return NULL;
    }
    // Add the genesis block or other initialization code if needed
    return blockchain;
}
