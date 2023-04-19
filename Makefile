PROG_SRC = wateracc.ino

ARDUINO_VERSION = 1611
ARDUINO_LIBS = TinyWireM LiquidCrystal_I2C PinChangeInterrupt

BOARD_TAG    = attinyx5
BOARD_SUB    = 85
F_CPU        = 1000000L
CPPFLAGS    += -DCLOCK_SOURCE=6
CPPFLAGS    += -Wall

ALTERNATE_CORE = ATTinyCore
ALTERNATE_CORE_PATH ?= ${ARDUINO_DIR}/hardware/${ALTERNATE_CORE}/avr
ARDUINO_CORE_PATH ?= ${ALTERNATE_CORE_PATH}/cores/tiny
ARDUINO_VAR_PATH ?= ${ALTERNATE_CORE_PATH}/variants

USER_LIB_PATH = ./libraries

ARDUINO_MAKEFILE_DIR ?= /usr/local/share/arduino-makefile

export
include ${ARDUINO_MAKEFILE_DIR}/Common.mk
unexport PROG_SRC

.PHONY: overlay
overlay: ${PROG_SRC}
	${MAKE} -f /usr/local/share/arduino-makefile/Arduino.mk

${PROG_SRC}: ${PROG_SRC}.utf8
	iconv -c -f UTF-8 -t CP1251 <$@.utf8 >$@ || { e=$$?; rm -f $@; exit $$e; }
