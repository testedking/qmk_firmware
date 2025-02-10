/* Copyright 2021 Glorious, LLC <salman@pcgamingrace.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "config_common.h"

#define RGB_DISABLE_WHEN_USB_SUSPENDED
#define EXTERNAL_FLASH_SPI_SLAVE_SELECT_PIN B14

#define PRODUCT GMMK 2 96

/* key matrix size */
#define MATRIX_ROWS 14
#define MATRIX_COLS 8

#define MATRIX_ROW_PINS \
    { B0, B1, B2, B3, B4, B5, B6, B7, B8, B9, B10, B11, B12, B13 }
#define MATRIX_COL_PINS \
    { A0, A1, A2, A3, A4, A8, A9, A10 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Hold ESC on start up to clear EEPROM and boot into bootloader mode */
#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 0

#define TAP_CODE_DELAY 10

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* SPI Config for LED Driver */
#define SPI_DRIVER SPIDQ
#define SPI_SCK_PIN A5
#define SPI_MOSI_PIN A7
#define SPI_MISO_PIN A6

#define DRIVER_1_CS A15
#define DRIVER_2_CS B15
#define DRIVER_1_EN C13
#define DRIVER_2_EN C13

#define DRIVER_COUNT 2

#define DRIVER_1_LED_TOTAL 66
#define DRIVER_2_LED_TOTAL 54
#define DRIVER_LED_TOTAL (DRIVER_1_LED_TOTAL + DRIVER_2_LED_TOTAL)

/* RGB Matrix Configuration */
#define RGB_MATRIX_KEYPRESSES // Enable keypress effects
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE   // Pulses keys hit to hue & value then fades value out
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE      // Static single hue, pulses keys hit to shifted hue then fades to current hue
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE       // Hue & value pulse near a single key hit then fades value out
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE  // Hue & value pulse near multiple key hits then fades value out
#define RGB_DI_PIN D7 // The pin connected to the data pin of the LEDs
