#SRC += sigma.c

ifeq ($(strip $(TAP_DANCE_ENABLE)), yes)
	SRC += tap_dance.c
endif

ifeq ($(strip $(MOUSEKEY_ENABLE)), yes)
	SRC += mouse.c
endif

ifeq ($(strip $(COMBO_ENABLE)), yes)
	SRC += combo.c
endif

ifeq ($(strip $(RGB_MATRIX_ENABLE)), yes)
	SRC += rgb.c
endif

ifeq ($(strip $(LEADER_ENABLE)), yes)
	SRC += leader.c
endif
