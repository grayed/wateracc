// To keep symbols in EEPROM or program flash memory,
// use one of the following:
//
//   #define SYMBOL_PLACE EEMEM
//   #define SYMBOL_PLACE PROGMEM

#define SYMBOL_PLACE PROGMEM

#ifndef SYMBOL_PLACE
#define SYMBOL_PLACE
#endif

const uint8_t SYMBOL_PLACE symbol_3up[8] = {
	0b01100,
	0b10010,
	0b00100,
	0b10010,
	0b01100,
	0b00000,
	0b00000,
	0b00000
};

const uint8_t SYMBOL_PLACE symbol_rus_F[8] = {
	0b00100,
	0b01110,
	0b10101,
	0b10101,
	0b10101,
	0b01110,
	0b00100,
	0b00000
};

const uint8_t SYMBOL_PLACE symbol_rus_g[8] = {
	0b00000,
	0b00000,
	0b11110,
	0b10000,
	0b10000,
	0b10000,
	0b10000,
	0b00000
};//г

const uint8_t SYMBOL_PLACE symbol_rus_i[8] = {
	0b00000,
	0b00000,
	0b10001,
	0b10011,
	0b10101,
	0b11001,
	0b10001,
	0b00000
};

const uint8_t SYMBOL_PLACE symbol_rus_l[8] = {
	0b00000,
	0b00000,
	0b00111,
	0b01001,
	0b01001,
	0b01001,
	0b10001,
	0b00000
};

const uint8_t SYMBOL_PLACE symbol_rus_m[8] = {
	0b00000,
	0b00000,
	0b10001,
	0b11011,
	0b10101,
	0b10001,
	0b10001,
	0b00000
};

const uint8_t SYMBOL_PLACE symbol_rus_t[8] = {
	0b00000,
	0b00000,
	0b11111,
	0b00100,
	0b00100,
	0b00100,
	0b00100,
	0b00000
};

const uint8_t SYMBOL_PLACE symbol_rus_soft_sign[8] = {
	0b00000,
	0b00000,
	0b10000,
	0b10000,
	0b11110,
	0b10001,
	0b11110,
	0b00000
};
