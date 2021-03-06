/*
 * This file is part of Cleanflight and Betaflight.
 *
 * Cleanflight and Betaflight are free software. You can redistribute
 * this software and/or modify this software under the terms of the
 * GNU General Public License as published by the Free Software
 * Foundation, either version 3 of the License, or (at your option)
 * any later version.
 *
 * Cleanflight and Betaflight are distributed in the hope that they
 * will be useful, but WITHOUT ANY WARRANTY; without even the implied
 * warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this software.
 *
 * If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "pg/pg.h"

#define MAX7456_CLOCK_CONFIG_HALF 0
#define MAX7456_CLOCK_CONFIG_OC   1
#define MAX7456_CLOCK_CONFIG_FULL 2

typedef struct max7456Config_s {
    uint8_t clockConfig; // 0 = force half clock, 1 = half if OC, 2 = force full
} max7456Config_t;

PG_DECLARE(max7456Config_t, max7456Config);
