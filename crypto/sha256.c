#include <stdint.h>
#include <stddef.h>
#include <openssl/sha.h>

/*
 * Computes the SHA-256 hash of a given input string.
 *
 * Parameters:
 *   s: Input string to compute hash for.
 *   len: Length of the input string.
 *   digest: Array to store the resulting hash digest.
 *
 * Returns:
 *   Pointer to the resulting hash digest.
 */
uint8_t *sha256(int8_t const *s, size_t len,
uint8_t digest[SHA256_DIGEST_LENGTH])
{
SHA256_CTX ctx;

    /* Check if digest is NULL */
if (digest == NULL)
{
return (NULL);
}

    /* Compute SHA-256 hash */
if (!SHA256_Init(&ctx))
{
return (NULL);
}
if (!SHA256_Update(&ctx, s, len))
{
return (NULL);
}
if (!SHA256_Final(digest, &ctx))
{
return (NULL);
}

    /* Return pointer to digest */
return (digest);
}
