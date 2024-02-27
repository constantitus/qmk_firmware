#pragma once

// 1000hz Polling Rate
#define USB_POLLING_INTERVAL_MS 1
#define QMK_KEYS_PER_SCAN 12

// Mouse config
#define MOUSEKEY_INTERVAL    20
#define MOUSEKEY_DELAY       0
#define MOUSEKEY_TIME_TO_MAX 60
#define MOUSEKEY_MAX_SPEED   7
#define MOUSEKEY_WHEEL_DELAY 0

// Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap
#define LOCKING_SUPPORT_ENABLE
// Locking resynchronize hack
#define LOCKING_RESYNC_ENABLE

// Enables This makes it easier for fast typists to use dual-function keys
#define PERMISSIVE_HOLD

// #define MASTER_RIGHT
#define SPLIT_USB_DETECT
#define EE_HANDS

/*  For STM32 MCUs several GPIO configuration options, including the ability
    for TX to RX pin swapping, can be changed as well. */
// Swap TX and RX pins if keyboard is master halve. (Only available on some MCUs)
// #define SERIAL_USART_PIN_SWAP
// Remap USART TX and RX pins on STM32F103 MCUs, see table below.
// #define USART1_REMAP
// Pin "alternate function", see the respective datasheet for the appropriate values for your MCU. default: 7
// #define SERIAL_USART_TX_PAL_MODE 7

// Enable full duplex operation mode.
#define SERIAL_USART_FULL_DUPLEX
#define SERIAL_USART_TX_PIN A9
#define SERIAL_USART_RX_PIN A10

#define SERIAL_USART_DRIVER SD1

#define SELECT_SOFT_SERIAL_SPEED 1


/*  This code does not fit into the really small flash of STM32F103x6 together
	with CONSOLE_ENABLE=yes, and the debugging console is probably more
	important for the "okeney" testing firmware.  In a real firmware you may be
	able to use these features if you keep the debugging console disabled. */
// #define NO_ACTION_LAYER
#define NO_ACTION_TAPPING

#define FORCE_KNRO
