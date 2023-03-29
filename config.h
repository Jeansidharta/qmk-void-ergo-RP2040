// Copyright 2023 Jean Sidharta (@Jean Sidharta)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
#define DEBOUNCE 5

#define ENCODERS_PAD_A { GP28 }
#define ENCODERS_PAD_B { GP27 }

#define ENCODERS_PAD_A_RIGHT { GP28 }
#define ENCODERS_PAD_B_RIGHT { GP27 }

#define SPLIT_HAND_MATRIX_GRID GP9, GP13

#define SERIAL_USART_TX_PIN GP16
