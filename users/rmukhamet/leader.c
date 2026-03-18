/*
  Copyright 2022 Rafael Moukhametdzhanov @rmukhamet

  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 2 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#include "leader.h"
#include "quantum.h"

bool leader_succeed = false;

void leader_start_user(void) {
#ifdef RGB_MATRIX_ENABLE
    rgb_matrix_set_color_all(255, 255, 0);
#endif
}

void leader_end_user(void) {
#ifdef RGB_MATRIX_ENABLE
    if (leader_succeed) {
        rgb_matrix_set_color_all(0, 255, 0);
    } else {
        rgb_matrix_set_color_all(255, 0, 0);
    }
    rgb_matrix_set_color_all(0, 0, 0);
#endif
    leader_succeed = false;
}

bool leader_add_user(uint16_t keycode) {
    if (leader_sequence_one_key(KC_E)) {
        SEND_STRING("leader E test success");
        leader_succeed = true;
        return true;
    }
    
    if (leader_sequence_two_keys(KC_E, KC_D)) {
        SEND_STRING("leader E D test success");
        leader_succeed = true;
        return true;
    }
    
    return false;
}
