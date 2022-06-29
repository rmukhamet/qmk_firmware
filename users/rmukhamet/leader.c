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


bool did_leader_succeed;
#ifdef AUDIO_ENABLE
float leader_start[][2] = SONG(ONE_UP_SOUND );
float leader_succeed[][2] = SONG(ALL_STAR);
float leader_fail[][2] = SONG(RICK_ROLL);
#endif
LEADER_EXTERNS();

void matrix_scan_user(void) {
  LEADER_DICTIONARY() {
    did_leader_succeed = leading = false;

    SEQ_ONE_KEY(KC_E) {
      // Anything you can do in a macro.
      SEND_STRING(SS_LCTL(SS_LSFT("t")));
      did_leader_succeed = true;
    } else 
    SEQ_TWO_KEYS(KC_E, KC_D) {
      SEND_STRING(SS_LGUI("r") "cmd\n" SS_LCTL("c"));
      did_leader_succeed = true;
    }
    leader_end();
  }
}

void leader_start(void) {
#ifdef RGB_MATRIX_ENABLE
   rgb_matrix_set_color_all(4, 100, 100);#endif
}

void leader_end(void) {
  if (did_leader_succeed) {

  #ifdef RGB_MATRIX_ENABLE
  if (leader_succeed) {
   rgb_matrix_set_color_all(4, 100, 100);
  } else {
   rgb_matrix_set_color_all(4, 100, 100);
  }
#endif
}

