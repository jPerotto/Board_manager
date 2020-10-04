#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#include <stdint.h>

#define EXTERNAL_NUM_INTERRUPTS 16
#define NUM_DIGITAL_PINS        40
#define NUM_ANALOG_INPUTS       16

#define analogInputToDigitalPin(p)  (((p)<20)?(esp32_adc2gpio[(p)]):-1)
#define digitalPinToInterrupt(p)    (((p)<40)?(p):-1)
#define digitalPinHasPWM(p)         (p < 34)

#if	MANAGER_MANAGER == 'A'
//BOARD REV1
#elif MANAGER_MANAGER == 'B'
//BOARD REV2
#endif

#define MANAGER_LOG_LEVEL_NONE       (0)
#define MANAGER_LOG_LEVEL_ERROR      (1)
#define MANAGER_LOG_LEVEL_WARN       (2)
#define MANAGER_LOG_LEVEL_INFO       (3)
#define MANAGER_LOG_LEVEL_DEBUG      (4)
#define MANAGER_LOG_LEVEL_VERBOSE    (5)

#if MANAGER_BOARD_DEBUG >= MANAGER_LOG_LEVEL_ERROR
#define LOG_ISR(log, ...) ets_printf(CREATE_LOG(SETUP, log), ##__VA_ARGS__)
#define LOGe_SETUP(log, ...) LOG_print(CREATE_PRINT(SETUP, log), ##__VA_ARGS__)
#else
#define LOGe_SETUP(log, ...)
#define LOG_ISR(log, ...)
#endif

#if MANAGER_BOARD_DEBUG >= MANAGER_LOG_LEVEL_WARN
#define LOGw_SETUP(log, ...) LOG_print(CREATE_LOG(SETUP, log), ##__VA_ARGS__)
#else
#define LOGw_SETUP(log, ...)
#endif

#if MANAGER_BOARD_DEBUG >= MANAGER_LOG_LEVEL_INFO
#define LOGi_SETUP(log, ...) LOG_print(CREATE_LOG(SETUP, log), ##__VA_ARGS__)
#else
#define LOGi_SETUP(log, ...)
#endif

#if MANAGER_BOARD_DEBUG >= MANAGER_LOG_LEVEL_DEBUG
#define LOGd_SETUP(log, ...) LOG_print(CREATE_LOG(SETUP, log), ##__VA_ARGS__)
#else
#define LOGd_SETUP(log, ...)
#endif

#if MANAGER_BOARD_DEBUG >= MANAGER_LOG_LEVEL_VERBOSE
#define LOGv_SETUP(log, ...) LOG_print(CREATE_LOG(SETUP, log), ##__VA_ARGS__)
#else
#define LOGv_SETUP(log, ...)
#endif


static const uint8_t TX = 1;
static const uint8_t RX = 3;

static const uint8_t SDA = 21;
static const uint8_t SCL = 22;

static const uint8_t SS    = 5;
static const uint8_t MOSI  = 23;
static const uint8_t MISO  = 19;
static const uint8_t SCK   = 18;

static const uint8_t A0 = 36;
static const uint8_t A3 = 39;
static const uint8_t A4 = 32;
static const uint8_t A5 = 33;
static const uint8_t A6 = 34;
static const uint8_t A7 = 35;
static const uint8_t A10 = 4;
static const uint8_t A11 = 0;
static const uint8_t A12 = 2;
static const uint8_t A13 = 15;
static const uint8_t A14 = 13;
static const uint8_t A15 = 12;
static const uint8_t A16 = 14;
static const uint8_t A17 = 27;
static const uint8_t A18 = 25;
static const uint8_t A19 = 26;

static const uint8_t T0 = 4;
static const uint8_t T1 = 0;
static const uint8_t T2 = 2;
static const uint8_t T3 = 15;
static const uint8_t T4 = 13;
static const uint8_t T5 = 12;
static const uint8_t T6 = 14;
static const uint8_t T7 = 27;
static const uint8_t T8 = 33;
static const uint8_t T9 = 32;

static const uint8_t DAC1 = 25;
static const uint8_t DAC2 = 26;

#endif /* Pins_Arduino_h */
