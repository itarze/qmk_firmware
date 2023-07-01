// Copyright 2023 JoyLee (@itarze)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* Encoder */
#define ENCODER_DIRECTION_FLIP

/* RGB Matrix */
#define WS2812_DI_PIN A8
#define RGB_MATRIX_LED_COUNT 68
#define RGB_MATRIX_DEFAULT_VAL 100
#define RGB_DISABLE_WHEN_USB_SUSPENDED

/* SPI Config for spi flash*/
#define SPI_DRIVER SPIDQ
#define SPI_SCK_PIN B3
#define SPI_MOSI_PIN B5
#define SPI_MISO_PIN B4

#define EXTERNAL_FLASH_SPI_SLAVE_SELECT_PIN C12
#define WEAR_LEVELING_BACKING_SIZE (4 * 1024)

#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#define RGB_MATRIX_KEYPRESSES
#define RGB_MATRIX_KEYRELEASES
