#ifndef HBLK_CRYPTO_H
#define HBLK_CRYPTO_H

#include <stdint.h>
#include <stddef.h>

#define SHA256_DIGEST_LENGTH 32

/**
 * sha256 - Computes the hash of a sequence of bytes
 * @s: The sequence of bytes to be hashed
 * @len: The number of bytes to hash in s
 * @digest: The resulting hash stored in digest
 *
 * Return: Pointer to digest if digest is not NULL, otherwise NULL
 */
uint8_t *sha256(int8_t const *s, size_t len,
uint8_t digest[SHA256_DIGEST_LENGTH]);

#endif /* HBLK_CRYPTO_H */
