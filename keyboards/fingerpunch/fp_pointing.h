/* Copyright 2022 Sadek Baroudi
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
#include QMK_KEYBOARD_H
#include "keyboards/fingerpunch/fp.h"

layer_state_t fp_layer_state_set_pointing(layer_state_t state);
bool fp_process_record_pointing(uint16_t keycode, keyrecord_t *record);
void fp_pointing_device_set_cpi_combined_defaults(void);
void fp_scroll_set(bool scroll_value);
bool fp_scroll_get(void);
void fp_scroll_toggle(void);
void fp_scroll_apply_dpi(void);
void fp_snipe_set(bool snipe_value);
bool fp_snipe_get(void);
void fp_snipe_toggle(void);
void fp_snipe_apply_dpi(void);
