#include "rgb.h"
#include <stdbool.h>



void matrix_scan_rgb(void) {
# ifdef INDICATOR_LIGHTS
  matrix_scan_indicator();
# endif
}





