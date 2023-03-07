# MCU name
MCU = SN32F248BF

# Bootloader selection
#BOOTLOADER = sn32-dfu


# Build Options
#   change yes to no to disable
#

LTO_ENABLE = no
BOOTMAGIC_ENABLE = yes      # Enable Bootmagic Lite (Virtual DIP switch configuration)
MOUSEKEY_ENABLE = no       # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = no         # Console for debug
COMMAND_ENABLE = no         # Commands for debug and configuration
NKRO_ENABLE = yes           # Enable N-Key Rollover
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = no        # Enable keyboard RGB underglow
AUDIO_ENABLE = no           # Audio output
WAIT_FOR_USB = no