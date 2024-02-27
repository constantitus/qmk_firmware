# Build Options
#   change yes to no to disable
#
MCU = STM32F103

BOOTMAGIC_ENABLE = no
MOUSEKEY_ENABLE = no
EXTRAKEY_ENABLE = no
CONSOLE_ENABLE = no
COMMAND_ENABLE = no
NKRO_ENABLE = yes
BACKLIGHT_ENABLE = no
RGBLIGHT_ENABLE = no
AUDIO_ENABLE = no
SPLIT_KEYBOARD = yes
SERIAL_DRIVER = usart

# EEPROM emulation not supported yet (need to implement a proper firmware size
# check first, otherwise the chance of the EEPROM backing store overwriting
# some part of the firmware code is really high).
EEPROM_DRIVER = transient
