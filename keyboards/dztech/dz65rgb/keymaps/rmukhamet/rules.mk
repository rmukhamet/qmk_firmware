# Userspace defines
MCU = atmega32u4
#BOOTLOADER = qmk-dfu
BOOTLOADER = atmel-dfu
#BOOTLOADER_SIZE = 4080
#QMK_BOOTLOADER_TYPE = MassStorage
RGB_MATRIX_ENABLE = no # Disable the ugly RGB light
BACKLIGHT_ENABLE = no
KEY_LOCK_ENABLE = no
RGBLIGHT_ENABLE = no # additional backlight
BOOTMAGIC_ENABLE = yes     # Enable Bootmagic Lite
GRAVE_ESC_ENABLE = no
SPLIT_KEYBOARD    = no
VIA_ENABLE = yes
# LTO_ENABLE = yes

# EXTRAKEY_ENABLE = yes       # Audio control and System control