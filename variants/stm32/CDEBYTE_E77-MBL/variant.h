/*
EByte E77-MBL series
https://www.cdebyte.com/products/E77-900MBL-01
https://www.cdebyte.com/products/E77-400MBL-01
https://github.com/olliw42/mLRS-docu/blob/master/docs/EBYTE_E77_MBL.md
*/

/*
This variant is a work in progress.
Do not expect a working Meshtastic device with this target.
*/

#ifndef _VARIANT_EBYTE_E77_
#define _VARIANT_EBYTE_E77_

#define USE_STM32WLx

#define LED_POWER PB4 // LED1
// #define LED_POWER PB3 // LED2
#define LED_STATE_ON 1

#define SERIAL_PRINT_PORT 1

#define PIN_SERIAL1_RX PB7
#define PIN_SERIAL1_TX PB6
#define HAS_GPS 1
#define PIN_GPS_STANDBY PA15
#define GPS_RX_PIN PB7
#define GPS_TX_PIN PB6

#define EBYTE_E77_MBL
#endif
