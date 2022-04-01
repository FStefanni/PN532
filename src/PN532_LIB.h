#ifndef PN532_LIB_FULL_H
#define PN532_LIB_FULL_H

#include "../PN532/PN532.h"
#if (defined PN532_USE_HSU) && PN532_USE_HSU
#include "../PN532_HSU/PN532_HSU.h"
#elif (defined PN532_USE_I2C) && PN532_USE_I2C
#include "../PN532_I2C/PN532_I2C.h"
#elif (defined PN532_USE_SPI) && PN532_USE_SPI
#include "../PN532_SPI/PN532_SPI.h"
#elif (defined PN532_USE_SWHSU) && PN532_USE_SWHSU
#include "../PN532_SWHSU/PN532_SWHSU.h"
#else
#error "Please, before includeing this header, define to 1 one of: PN532_USE_HSU, PN532_USE_I2C, PN532_USE_SPI, PN532_USE_SWHSU, and in a single .cpp/.ino also define to 1 PN532_INCLUDE_IMPLEMENTATION"
#endif


// This macro must be defined just in a single cpp/.ino:
// #define PN532_INCLUDE_IMPLEMENTATION 1
#if (defined PN532_INCLUDE_IMPLEMENTATION) && PN532_INCLUDE_IMPLEMENTATION
#include "../PN532/emulatetag.cpp"
#include "../PN532/llcp.cpp"
#include "../PN532/mac_link.cpp"
#include "../PN532/PN532.cpp"
#include "../PN532/snep.cpp"

#if (defined PN532_USE_HSU) && PN532_USE_HSU
#include "../PN532_HSU/PN532_HSU.cpp"
#elif (defined PN532_USE_I2C) && PN532_USE_I2C
#include "../PN532_I2C/PN532_I2C.cpp"
#elif (defined PN532_USE_SPI) && PN532_USE_SPI
#include "PN532_SPI/PN532_SPI.cpp"
#elif (defined PN532_USE_SWHSU) && PN532_USE_SWHSU
#include "PN532_SWHSU/PN532_SWHSU.cpp"
#else
#error "Please, before includeing this header, define to 1 one of: PN532_USE_HSU, PN532_USE_I2C, PN532_USE_SPI, PN532_USE_SWHSU"
#endif

#endif

#endif
