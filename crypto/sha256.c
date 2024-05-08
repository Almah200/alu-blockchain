#include <stdint.h>
#include <stddef.h>
#include <openssl/sha.h>

uint8_t *sha256(int8_t const *s, size_t len, uint8_t digest[SHA256_DIGEST_LENGTH]) {
    // Check if digest is NULL
    if (digest == NULL) {
        return NULL;
    }

    // Compute SHA-256 hash
    SHA256_CTX ctx;
    if (!SHA256_Init(&ctx)) {
        return NULL;
    }
    if (!SHA256_Update(&ctx, s, len)) {
        return NULL;
    }
    if (!SHA256_Final(digest, &ctx)) {
        return NULL;
    }
    
    // Return pointer to digest
    return digest;
}
