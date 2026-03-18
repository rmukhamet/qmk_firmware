/*
  Copyright 2022 Rafael Moukhametdzhanov   @rmukhamet

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
#pragma once

#include QMK_KEYBOARD_H

// Common key combinations
#define CTRL_SPACE LCTL(KC_SPACE)

// Note: Define layer enums in your keymap.c, not here
// Example:
// enum layers { _BL = 0, _FL, _ML };

// Include feature headers
#include "tap_dance.h"
#include "leader.h"
#include "mouse.h"
#include "rgb.h"
