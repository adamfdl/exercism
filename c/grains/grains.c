#include "grains.h"

uint64_t power_uint64(uint64_t base, uint64_t exponent) {
  uint64_t result = 1;
  for (uint64_t i=0; i<exponent; i++) {
    // Repeat multiplying result by base for as many
    // exponent times
    result = result * base;
  }
  return result;
}

uint64_t square(uint8_t index) {
  if (index == 0 || index > 64) {
    return 0;
  }

  /**
   * Formula is:
   *    a_n = 2^(n-1)
   * Pattern:
   *    1,2,4,8,16,32
   */
  return power_uint64(2, index-1);
}

uint64_t total(void) {
  uint64_t result = 0;
  for (int i=1; i<=64; i++) {
    result = result + square(i);
  }
  return result;
}
