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

#define MASTER_LEFT

#define SERIAL_USART_TX_PIN 16

#define MK_3_SPEED

#define MK_C_OFFSET_0 4
#define MK_C_INTERVAL_0 16

#define MK_C_OFFSET_1 16
#define MK_C_INTERVAL_1 16

#define MK_C_OFFSET_2 32
#define MK_C_INTERVAL_2 16

#define MK_W_OFFSET_0 1
#define MK_W_INTERVAL_0 120

#define MK_W_OFFSET_1 1
#define MK_W_INTERVAL_1 120

#define MK_W_OFFSET_2 1
#define MK_W_INTERVAL_2 120
