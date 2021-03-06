#ifndef __MEMZERO_H__
#define __MEMZERO_H__

#include "bip3x/bip39_core.h"

#include <cstddef>

BIP39_CORE_API void memzero(void *s, size_t n);

#endif
