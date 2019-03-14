
#include "types.h"
#include "lux1310.h"

/* 80-clock wave table */
const UInt8 sram80clk[] = {
	0x81, 0xFF, 0x27, 0xFA, 0x21, 0xA0, 0x7F, 0xCB, 0xFE, 0x8C, 0x78, 0x1F, 0xF2, 0xFF, 0xA3, 0x1E,
	0x07, 0xFC, 0xBF, 0xE8, 0xC7, 0x81, 0xFF, 0x2F, 0xFA, 0x31, 0xE0, 0x7F, 0xCB, 0xFE, 0x8C, 0x78,
	0x1F, 0xF2, 0xFF, 0xA3, 0x1E, 0x07, 0xFC, 0xBF, 0xE8, 0xC7, 0x81, 0xFF, 0x2F, 0xFA, 0x31, 0xE0,
	0x7F, 0xCB, 0xFE, 0x8C, 0x78, 0x1F, 0xF2, 0xFF, 0xA3, 0x1E, 0x07, 0xFC, 0xBF, 0xE8, 0xC7, 0x81,
	0xFF, 0x2F, 0xFA, 0x31, 0xE0, 0x7F, 0xCB, 0xFE, 0x8C, 0x78, 0x1F, 0xF2, 0xFF, 0xA3, 0x1E, 0x07,
	0xFC, 0xBF, 0xE8, 0xC7, 0x81, 0xFF, 0x2F, 0xFA, 0x31, 0xE0, 0x7F, 0xCB, 0xFE, 0x8C, 0x78, 0x1F,
	0xF2, 0xFF, 0xA3, 0x1E, 0x07, 0xFC, 0xBF, 0xE8, 0xC7, 0x81, 0xFF, 0x2F, 0xFA, 0x31, 0xE0, 0x7F,
	0xCB, 0xFE, 0x8C, 0x78, 0x1F, 0xF2, 0xFF, 0xA3, 0x1E, 0x07, 0xFC, 0xBF, 0xE8, 0xC7, 0x81, 0xFF,
	0x2F, 0xFA, 0x31, 0xE0, 0x7F, 0xCB, 0xFE, 0x84, 0x78, 0x1F, 0xF2, 0xFF, 0xA1, 0x1E, 0x07, 0xFC,
	0xBF, 0xE8, 0x47, 0x81, 0xFF, 0x2F, 0xFA, 0x11, 0xE0, 0x7F, 0xCB, 0xFE, 0x84, 0x78, 0x1F, 0xF2,
	0xFF, 0xA1, 0x1E, 0x07, 0xFC, 0xBF, 0xE8, 0x47, 0x81, 0xFF, 0x2F, 0xFA, 0x11, 0xE0, 0x7F, 0xCB,
	0xFE, 0x84, 0x78, 0x1F, 0xF2, 0xFF, 0xA1, 0x1E, 0x07, 0xFC, 0xBF, 0xE8, 0x47, 0x81, 0xFF, 0x2F,
	0xFA, 0x11, 0xE0, 0x7F, 0xCB, 0xFE, 0x84, 0x78, 0x1F, 0xF2, 0xFF, 0xA1, 0x1E, 0x07, 0xFC, 0xBF,
	0xE8, 0x47, 0x80, 0xFF, 0x2F, 0xFA, 0x11, 0xE0, 0x3F, 0xC3, 0xFE, 0x94, 0x78, 0x0F, 0xF0, 0xFF,
	0xA5, 0x1E, 0x03, 0xFC, 0x3F, 0xE9, 0x47, 0x80, 0xFF, 0x0F, 0xFA, 0x51, 0xE0, 0x3F, 0xC3, 0xFE,
	0x94, 0x78, 0x0F, 0xF0, 0xFF, 0xB5, 0x1E, 0x03, 0xFC, 0x3F, 0xED, 0x47, 0x80, 0xFF, 0x0F, 0xFB,
	0x51, 0xE0, 0x3F, 0xC3, 0xFE, 0xD4, 0x78, 0x0F, 0xF0, 0xFF, 0xB5, 0x1E, 0x03, 0xFC, 0x3F, 0xED,
	0x47, 0x80, 0xFF, 0x0F, 0xFB, 0x51, 0xE0, 0x3F, 0xC3, 0xFE, 0xD4, 0x78, 0x0F, 0xF0, 0xFF, 0xB5,
	0x1E, 0x03, 0xFC, 0x3F, 0xED, 0x47, 0x80, 0xFF, 0x0F, 0xFA, 0x51, 0xE0, 0x3F, 0xC3, 0xFE, 0x94,
	0x78, 0x0F, 0xF0, 0xFF, 0xA5, 0x1E, 0x03, 0xFC, 0x3F, 0xE9, 0x47, 0x80, 0xFF, 0x0F, 0xFA, 0x51,
	0xE0, 0x3F, 0xC3, 0xFE, 0x94, 0x78, 0x0F, 0xF0, 0xFF, 0xA5, 0x1E, 0x03, 0xFC, 0x3F, 0xE8, 0x47,
	0x80, 0xFF, 0x0F, 0xFA, 0x11, 0xE0, 0x3F, 0xC3, 0xFE, 0x84, 0x78, 0x0F, 0xF0, 0xFF, 0xA1, 0x1E,
	0x03, 0xFC, 0x3F, 0xE8, 0x47, 0x80, 0xFF, 0x0F, 0xFA, 0x11, 0xE0, 0x3F, 0xC3, 0xFE, 0x84, 0x78,
	0x0F, 0xF0, 0xFF, 0xA1, 0x1E, 0x03, 0xFC, 0x3F, 0xE8, 0x47, 0x80, 0xFF, 0x0F, 0xFA, 0x11, 0xE0,
	0x3F, 0xC3, 0xFE, 0x84, 0x78, 0x0F, 0xF0, 0xFF, 0xA1, 0x1E, 0x03, 0xFC, 0x3F, 0xE8, 0x47, 0x80,
	0xFF, 0x0F, 0xFA, 0x11, 0xE0, 0x3F, 0xC3, 0xFE, 0x84, 0x78, 0x0F, 0xF0, 0xFF, 0xA1, 0x1E, 0x03,
	0xFC, 0x1F, 0xE8, 0x47, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
const UInt8 gain80clk[] = {
	0x82, 0xFF, 0x17, 0xF8, 0x23, 0xA0, 0xBF, 0xC5, 0xFE, 0x08, 0xE8, 0x3F, 0xF1, 0xFF, 0x83, 0x1E,
	0x0F, 0xFC, 0x7F, 0xE0, 0xC7, 0x83, 0xFF, 0x1F, 0xF8, 0x31, 0xE0, 0xFF, 0xC7, 0xFE, 0x0C, 0x78,
	0x3F, 0xF1, 0xFF, 0x83, 0x1E, 0x0F, 0xFC, 0x7F, 0xE0, 0xC7, 0x83, 0xFF, 0x1F, 0xF8, 0x31, 0xE0,
	0xFF, 0xC7, 0xFE, 0x0C, 0x78, 0x3F, 0xF1, 0xFF, 0x83, 0x1E, 0x0F, 0xFC, 0x7F, 0xE0, 0xC7, 0x83,
	0xFF, 0x1F, 0xF8, 0x31, 0xE0, 0xFF, 0xC7, 0xFE, 0x0C, 0x78, 0x3F, 0xF1, 0xFF, 0x83, 0x1E, 0x0F,
	0xFC, 0x7F, 0xE0, 0xC7, 0x83, 0xFF, 0x1F, 0xF8, 0x31, 0xE0, 0xFF, 0xC7, 0xFE, 0x0C, 0x78, 0x3F,
	0xF1, 0xFF, 0x83, 0x1E, 0x0F, 0xFC, 0x7F, 0xE0, 0xC7, 0x83, 0xFF, 0x1F, 0xF8, 0x31, 0xE0, 0xFF,
	0xC7, 0xFE, 0x0C, 0x78, 0x3F, 0xF1, 0xFF, 0x83, 0x1E, 0x0F, 0xFC, 0x7F, 0xE0, 0xC7, 0x83, 0xFF,
	0x1F, 0xF8, 0x31, 0xE0, 0xFF, 0xC7, 0xFE, 0x0C, 0x78, 0x3F, 0xF1, 0xFF, 0x83, 0x1E, 0x0F, 0xFC,
	0x7F, 0xE0, 0xC7, 0x83, 0xFF, 0x1F, 0xF8, 0x31, 0xE0, 0xFF, 0xC7, 0xFE, 0x0C, 0x78, 0x3F, 0xF1,
	0xFF, 0x81, 0x1E, 0x0F, 0xFC, 0x7F, 0xE0, 0x47, 0x83, 0xFF, 0x1F, 0xF8, 0x11, 0xE0, 0xFF, 0xC7,
	0xFE, 0x04, 0x78, 0x3F, 0xF1, 0xFF, 0x81, 0x1E, 0x0F, 0xFC, 0x7F, 0xE0, 0x47, 0x83, 0xFF, 0x1F,
	0xF8, 0x11, 0xE0, 0xFF, 0xC7, 0xFE, 0x04, 0x78, 0x3F, 0xF1, 0xFF, 0x81, 0x1E, 0x0F, 0xFC, 0x7F,
	0xE0, 0x47, 0x83, 0xFF, 0x1F, 0xF8, 0x11, 0xE0, 0xFF, 0xC7, 0xFE, 0x14, 0x78, 0x3F, 0xF1, 0xFF,
	0x85, 0x1E, 0x0F, 0xFC, 0x7F, 0xE1, 0x47, 0x83, 0xFF, 0x1F, 0xF8, 0x51, 0xE0, 0xFF, 0xC7, 0xFE,
	0x14, 0x78, 0x3F, 0xF1, 0xFF, 0x85, 0x1E, 0x0F, 0xFC, 0x7F, 0xE1, 0x47, 0x83, 0xFF, 0x1F, 0xF8,
	0x51, 0xE0, 0xFF, 0xC7, 0xFE, 0x14, 0x78, 0x3F, 0xF1, 0xFF, 0x85, 0x1E, 0x0F, 0xFC, 0x7F, 0xE1,
	0x47, 0x83, 0xFF, 0x1F, 0xF8, 0x51, 0xE0, 0xFF, 0xC7, 0xFE, 0x14, 0x78, 0x3F, 0xF1, 0xFF, 0x85,
	0x1E, 0x0F, 0xFC, 0x7F, 0xE1, 0x47, 0x83, 0xFF, 0x1F, 0xF8, 0x51, 0xE0, 0xFF, 0xC7, 0xFE, 0x14,
	0x78, 0x3F, 0xF1, 0xFF, 0x85, 0x1E, 0x0F, 0xFC, 0x7F, 0xE1, 0x47, 0x83, 0xFF, 0x1F, 0xF8, 0x51,
	0xE0, 0xFF, 0xC7, 0xFE, 0x14, 0x78, 0x3F, 0xF1, 0xFF, 0x85, 0x1E, 0x0F, 0xFC, 0x7F, 0xE1, 0x47,
	0x83, 0xFF, 0x1F, 0xF8, 0x51, 0xE0, 0xFF, 0xC7, 0xFE, 0x14, 0x78, 0x3F, 0xF1, 0xFF, 0x85, 0x1E,
	0x0F, 0xFC, 0x7F, 0xE1, 0x47, 0x83, 0xFF, 0x1F, 0xF8, 0x51, 0xE0, 0xFF, 0xC7, 0xFE, 0x14, 0x78,
	0x3F, 0xF1, 0xFF, 0x81, 0x1E, 0x0F, 0xFC, 0x7F, 0xE0, 0x47, 0x83, 0xFF, 0x1F, 0xF8, 0x11, 0xE0,
	0xFF, 0xC7, 0xFE, 0x04, 0x78, 0x3F, 0xF1, 0xFF, 0x81, 0x1E, 0x0F, 0xFC, 0x7F, 0xE0, 0x47, 0x83,
	0xFF, 0x1F, 0xF8, 0x11, 0xE0, 0xFF, 0xC7, 0xFE, 0x04, 0x78, 0x3F, 0xF1, 0xFF, 0x81, 0x1E, 0x0B,
	0xFC, 0x5F, 0xE0, 0x47, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
const lux1310wavetab_t wavetab80clk = {
	.clocks = 80,
	.length = sizeof(sram80clk),
	.abnDelay = 25,
	.wavetab = sram80clk,
	.gaincal = gain80clk,
};

/* 79-clock wave table */
const UInt8 sram79clk[] = {
	0x81, 0xFF, 0x27, 0xFA, 0x21, 0xA0, 0x7F, 0xCB, 0xFE, 0x8C, 0x78, 0x1F, 0xF2, 0xFF, 0xA3, 0x1E,
	0x07, 0xFC, 0xBF, 0xE8, 0xC7, 0x81, 0xFF, 0x2F, 0xFA, 0x31, 0xE0, 0x7F, 0xCB, 0xFE, 0x8C, 0x78,
	0x1F, 0xF2, 0xFF, 0xA3, 0x1E, 0x07, 0xFC, 0xBF, 0xE8, 0xC7, 0x81, 0xFF, 0x2F, 0xFA, 0x31, 0xE0,
	0x7F, 0xCB, 0xFE, 0x8C, 0x78, 0x1F, 0xF2, 0xFF, 0xA3, 0x1E, 0x07, 0xFC, 0xBF, 0xE8, 0xC7, 0x81,
	0xFF, 0x2F, 0xFA, 0x31, 0xE0, 0x7F, 0xCB, 0xFE, 0x8C, 0x78, 0x1F, 0xF2, 0xFF, 0xA3, 0x1E, 0x07,
	0xFC, 0xBF, 0xE8, 0xC7, 0x81, 0xFF, 0x2F, 0xFA, 0x31, 0xE0, 0x7F, 0xCB, 0xFE, 0x8C, 0x78, 0x1F,
	0xF2, 0xFF, 0xA3, 0x1E, 0x07, 0xFC, 0xBF, 0xE8, 0xC7, 0x81, 0xFF, 0x2F, 0xFA, 0x31, 0xE0, 0x7F,
	0xCB, 0xFE, 0x8C, 0x78, 0x1F, 0xF2, 0xFF, 0xA3, 0x1E, 0x07, 0xFC, 0xBF, 0xE8, 0xC7, 0x81, 0xFF,
	0x2F, 0xFA, 0x31, 0xE0, 0x7F, 0xCB, 0xFE, 0x84, 0x78, 0x1F, 0xF2, 0xFF, 0xA1, 0x1E, 0x07, 0xFC,
	0xBF, 0xE8, 0x47, 0x81, 0xFF, 0x2F, 0xFA, 0x11, 0xE0, 0x7F, 0xCB, 0xFE, 0x84, 0x78, 0x1F, 0xF2,
	0xFF, 0xA1, 0x1E, 0x07, 0xFC, 0xBF, 0xE8, 0x47, 0x81, 0xFF, 0x2F, 0xFA, 0x11, 0xE0, 0x7F, 0xCB,
	0xFE, 0x84, 0x78, 0x1F, 0xF2, 0xFF, 0xA1, 0x1E, 0x07, 0xFC, 0xBF, 0xE8, 0x47, 0x81, 0xFF, 0x2F,
	0xFA, 0x11, 0xE0, 0x7F, 0xCB, 0xFE, 0x84, 0x78, 0x1F, 0xF2, 0xFF, 0xA1, 0x1E, 0x07, 0xFC, 0xBF,
	0xE8, 0x47, 0x80, 0xFF, 0x2F, 0xFA, 0x11, 0xE0, 0x3F, 0xC3, 0xFE, 0x94, 0x78, 0x0F, 0xF0, 0xFF,
	0xA5, 0x1E, 0x03, 0xFC, 0x3F, 0xE9, 0x47, 0x80, 0xFF, 0x0F, 0xFA, 0x51, 0xE0, 0x3F, 0xC3, 0xFE,
	0x94, 0x78, 0x0F, 0xF0, 0xFF, 0xB5, 0x1E, 0x03, 0xFC, 0x3F, 0xED, 0x47, 0x80, 0xFF, 0x0F, 0xFB,
	0x51, 0xE0, 0x3F, 0xC3, 0xFE, 0xD4, 0x78, 0x0F, 0xF0, 0xFF, 0xB5, 0x1E, 0x03, 0xFC, 0x3F, 0xED,
	0x47, 0x80, 0xFF, 0x0F, 0xFB, 0x51, 0xE0, 0x3F, 0xC3, 0xFE, 0xD4, 0x78, 0x0F, 0xF0, 0xFF, 0xB5,
	0x1E, 0x03, 0xFC, 0x3F, 0xED, 0x47, 0x80, 0xFF, 0x0F, 0xFA, 0x51, 0xE0, 0x3F, 0xC3, 0xFE, 0x94,
	0x78, 0x0F, 0xF0, 0xFF, 0xA5, 0x1E, 0x03, 0xFC, 0x3F, 0xE9, 0x47, 0x80, 0xFF, 0x0F, 0xFA, 0x51,
	0xE0, 0x3F, 0xC3, 0xFE, 0x94, 0x78, 0x0F, 0xF0, 0xFF, 0xA5, 0x1E, 0x03, 0xFC, 0x3F, 0xE8, 0x47,
	0x80, 0xFF, 0x0F, 0xFA, 0x11, 0xE0, 0x3F, 0xC3, 0xFE, 0x84, 0x78, 0x0F, 0xF0, 0xFF, 0xA1, 0x1E,
	0x03, 0xFC, 0x3F, 0xE8, 0x47, 0x80, 0xFF, 0x0F, 0xFA, 0x11, 0xE0, 0x3F, 0xC3, 0xFE, 0x84, 0x78,
	0x0F, 0xF0, 0xFF, 0xA1, 0x1E, 0x03, 0xFC, 0x3F, 0xE8, 0x47, 0x80, 0xFF, 0x0F, 0xFA, 0x11, 0xE0,
	0x3F, 0xC3, 0xFE, 0x84, 0x78, 0x0F, 0xF0, 0xFF, 0xA1, 0x1E, 0x03, 0xFC, 0x3F, 0xE8, 0x47, 0x80,
	0xFF, 0x0F, 0xFA, 0x11, 0xE0, 0x3F, 0xC3, 0xFE, 0x84, 0x78, 0x0F, 0xF0, 0x7F, 0xA1, 0x1C, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00,
};
const UInt8 gain79clk[] = {
	0x82, 0xFF, 0x17, 0xF8, 0x23, 0xA0, 0xBF, 0xC5, 0xFE, 0x08, 0xE8, 0x3F, 0xF1, 0xFF, 0x83, 0x1E,
	0x0F, 0xFC, 0x7F, 0xE0, 0xC7, 0x83, 0xFF, 0x1F, 0xF8, 0x31, 0xE0, 0xFF, 0xC7, 0xFE, 0x0C, 0x78,
	0x3F, 0xF1, 0xFF, 0x83, 0x1E, 0x0F, 0xFC, 0x7F, 0xE0, 0xC7, 0x83, 0xFF, 0x1F, 0xF8, 0x31, 0xE0,
	0xFF, 0xC7, 0xFE, 0x0C, 0x78, 0x3F, 0xF1, 0xFF, 0x83, 0x1E, 0x0F, 0xFC, 0x7F, 0xE0, 0xC7, 0x83,
	0xFF, 0x1F, 0xF8, 0x31, 0xE0, 0xFF, 0xC7, 0xFE, 0x0C, 0x78, 0x3F, 0xF1, 0xFF, 0x83, 0x1E, 0x0F,
	0xFC, 0x7F, 0xE0, 0xC7, 0x83, 0xFF, 0x1F, 0xF8, 0x31, 0xE0, 0xFF, 0xC7, 0xFE, 0x0C, 0x78, 0x3F,
	0xF1, 0xFF, 0x83, 0x1E, 0x0F, 0xFC, 0x7F, 0xE0, 0xC7, 0x83, 0xFF, 0x1F, 0xF8, 0x31, 0xE0, 0xFF,
	0xC7, 0xFE, 0x0C, 0x78, 0x3F, 0xF1, 0xFF, 0x83, 0x1E, 0x0F, 0xFC, 0x7F, 0xE0, 0xC7, 0x83, 0xFF,
	0x1F, 0xF8, 0x31, 0xE0, 0xFF, 0xC7, 0xFE, 0x0C, 0x78, 0x3F, 0xF1, 0xFF, 0x83, 0x1E, 0x0F, 0xFC,
	0x7F, 0xE0, 0xC7, 0x83, 0xFF, 0x1F, 0xF8, 0x31, 0xE0, 0xFF, 0xC7, 0xFE, 0x0C, 0x78, 0x3F, 0xF1,
	0xFF, 0x81, 0x1E, 0x0F, 0xFC, 0x7F, 0xE0, 0x47, 0x83, 0xFF, 0x1F, 0xF8, 0x11, 0xE0, 0xFF, 0xC7,
	0xFE, 0x04, 0x78, 0x3F, 0xF1, 0xFF, 0x81, 0x1E, 0x0F, 0xFC, 0x7F, 0xE0, 0x47, 0x83, 0xFF, 0x1F,
	0xF8, 0x11, 0xE0, 0xFF, 0xC7, 0xFE, 0x04, 0x78, 0x3F, 0xF1, 0xFF, 0x81, 0x1E, 0x0F, 0xFC, 0x7F,
	0xE0, 0x47, 0x83, 0xFF, 0x1F, 0xF8, 0x11, 0xE0, 0xFF, 0xC7, 0xFE, 0x14, 0x78, 0x3F, 0xF1, 0xFF,
	0x85, 0x1E, 0x0F, 0xFC, 0x7F, 0xE1, 0x47, 0x83, 0xFF, 0x1F, 0xF8, 0x51, 0xE0, 0xFF, 0xC7, 0xFE,
	0x14, 0x78, 0x3F, 0xF1, 0xFF, 0x85, 0x1E, 0x0F, 0xFC, 0x7F, 0xE1, 0x47, 0x83, 0xFF, 0x1F, 0xF8,
	0x51, 0xE0, 0xFF, 0xC7, 0xFE, 0x14, 0x78, 0x3F, 0xF1, 0xFF, 0x85, 0x1E, 0x0F, 0xFC, 0x7F, 0xE1,
	0x47, 0x83, 0xFF, 0x1F, 0xF8, 0x51, 0xE0, 0xFF, 0xC7, 0xFE, 0x14, 0x78, 0x3F, 0xF1, 0xFF, 0x85,
	0x1E, 0x0F, 0xFC, 0x7F, 0xE1, 0x47, 0x83, 0xFF, 0x1F, 0xF8, 0x51, 0xE0, 0xFF, 0xC7, 0xFE, 0x14,
	0x78, 0x3F, 0xF1, 0xFF, 0x85, 0x1E, 0x0F, 0xFC, 0x7F, 0xE1, 0x47, 0x83, 0xFF, 0x1F, 0xF8, 0x51,
	0xE0, 0xFF, 0xC7, 0xFE, 0x14, 0x78, 0x3F, 0xF1, 0xFF, 0x85, 0x1E, 0x0F, 0xFC, 0x7F, 0xE1, 0x47,
	0x83, 0xFF, 0x1F, 0xF8, 0x51, 0xE0, 0xFF, 0xC7, 0xFE, 0x14, 0x78, 0x3F, 0xF1, 0xFF, 0x85, 0x1E,
	0x0F, 0xFC, 0x7F, 0xE1, 0x47, 0x83, 0xFF, 0x1F, 0xF8, 0x51, 0xE0, 0xFF, 0xC7, 0xFE, 0x04, 0x78,
	0x3F, 0xF1, 0xFF, 0x81, 0x1E, 0x0F, 0xFC, 0x7F, 0xE0, 0x47, 0x83, 0xFF, 0x1F, 0xF8, 0x11, 0xE0,
	0xFF, 0xC7, 0xFE, 0x04, 0x78, 0x3F, 0xF1, 0xFF, 0x81, 0x1E, 0x0F, 0xFC, 0x7F, 0xE0, 0x47, 0x83,
	0xFF, 0x1F, 0xF8, 0x11, 0xE0, 0xFF, 0xC7, 0xFE, 0x04, 0x78, 0x2F, 0xF1, 0x7F, 0x81, 0x1C, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00,
};
const lux1310wavetab_t wavetab79clk = {
	.clocks = 79,
	.length = sizeof(sram79clk),
	.abnDelay = 25,
	.wavetab = sram79clk,
	.gaincal = gain79clk,
};

/* 62-clock wave table */
const UInt8 sram62clk[] = {
	0x81, 0xFF, 0x2F, 0xFA, 0x31, 0xE0, 0x7F, 0xCB, 0xFE, 0x8C, 0x78, 0x1F, 0xF2, 0xFF, 0xA3, 0x1E,
	0x07, 0xFC, 0xBF, 0xE8, 0xC7, 0x81, 0xFF, 0x2F, 0xFA, 0x31, 0xE0, 0x7F, 0xCB, 0xFE, 0x8C, 0x78,
	0x1F, 0xF2, 0xFF, 0xA3, 0x1E, 0x07, 0xFC, 0xBF, 0xE8, 0xC7, 0x81, 0xFF, 0x2F, 0xFA, 0x31, 0xE0,
	0x7F, 0xCB, 0xFE, 0x8C, 0x78, 0x1F, 0xF2, 0xFF, 0xA3, 0x1E, 0x07, 0xFC, 0xBF, 0xE8, 0xC7, 0x81,
	0xFF, 0x2F, 0xFA, 0x31, 0xE0, 0x7F, 0xCB, 0xFE, 0x8C, 0x78, 0x1F, 0xF2, 0xFF, 0xA3, 0x1E, 0x07,
	0xFC, 0xBF, 0xE8, 0xC7, 0x81, 0xFF, 0x2F, 0xFA, 0x31, 0xE0, 0x7F, 0xCB, 0xFE, 0x8C, 0x78, 0x1F,
	0xF2, 0xFF, 0xA3, 0x1E, 0x07, 0xFC, 0xBF, 0xE8, 0xC7, 0x81, 0xFF, 0x2F, 0xFA, 0x11, 0xE0, 0x7F,
	0xCB, 0xFE, 0x84, 0x78, 0x1F, 0xF2, 0xFF, 0xA1, 0x1E, 0x07, 0xFC, 0xBF, 0xE8, 0x47, 0x81, 0xFF,
	0x2F, 0xFA, 0x11, 0xE0, 0x7F, 0xCB, 0xFE, 0x84, 0x78, 0x1F, 0xF2, 0xFF, 0xA1, 0x1E, 0x07, 0xFC,
	0xBF, 0xE8, 0x47, 0x80, 0xFF, 0x2F, 0xFA, 0x11, 0xE0, 0x3F, 0xC3, 0xFE, 0x94, 0x78, 0x0F, 0xF0,
	0xFF, 0xA5, 0x1E, 0x03, 0xFC, 0x3F, 0xED, 0x47, 0x80, 0xFF, 0x0F, 0xFB, 0x51, 0xE0, 0x3F, 0xC3,
	0xFE, 0xD4, 0x78, 0x0F, 0xF0, 0xFF, 0xB5, 0x1E, 0x03, 0xFC, 0x3F, 0xED, 0x47, 0x80, 0xFF, 0x0F,
	0xFB, 0x51, 0xE0, 0x3F, 0xC3, 0xFE, 0xD4, 0x78, 0x0F, 0xF0, 0xFF, 0xB5, 0x1E, 0x03, 0xFC, 0x3F,
	0xE9, 0x47, 0x80, 0xFF, 0x0F, 0xFA, 0x51, 0xE0, 0x3F, 0xC3, 0xFE, 0x94, 0x78, 0x0F, 0xF0, 0xFF,
	0xA5, 0x1E, 0x03, 0xFC, 0x3F, 0xE9, 0x47, 0x80, 0xFF, 0x0F, 0xFA, 0x51, 0xE0, 0x3F, 0xC3, 0xFE,
	0x94, 0x78, 0x0F, 0xF0, 0xFF, 0xA1, 0x1E, 0x03, 0xFC, 0x3F, 0xE8, 0x47, 0x80, 0xFF, 0x0F, 0xFA,
	0x11, 0xE0, 0x3F, 0xC3, 0xFE, 0x84, 0x78, 0x0F, 0xF0, 0xFF, 0xA1, 0x1E, 0x03, 0xFC, 0x3F, 0xE8,
	0x47, 0x80, 0xFF, 0x0F, 0xFA, 0x11, 0xE0, 0x3F, 0xC3, 0xFE, 0x84, 0x78, 0x0F, 0xF0, 0xFF, 0xA1,
	0x1E, 0x03, 0xFC, 0x3F, 0xE8, 0x47, 0x80, 0xFF, 0x0F, 0xFA, 0x11, 0xE0, 0x3F, 0xC3, 0xFE, 0x84,
	0x78, 0x0F, 0xF0, 0xFF, 0xA1, 0x1E, 0x03, 0xFC, 0x3F, 0xE8, 0x47, 0x80, 0xFF, 0x0F, 0xFA, 0x11,
	0xE0, 0x3F, 0xC1, 0xFE, 0x84, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
const UInt8 gain62clk[] = {
	0x83, 0xFF, 0x1F, 0xF8, 0x11, 0xE0, 0xFF, 0xC7, 0xFE, 0x04, 0x78, 0x3F, 0xF1, 0xFF, 0x81, 0x1E,
	0x0F, 0xFC, 0x7F, 0xE0, 0x47, 0x83, 0xFF, 0x1F, 0xF8, 0x11, 0xE0, 0xFF, 0xC7, 0xFE, 0x04, 0x78,
	0x3F, 0xF1, 0xFF, 0x81, 0x1E, 0x0F, 0xFC, 0x7F, 0xE0, 0x47, 0x83, 0xFF, 0x1F, 0xF8, 0x11, 0xE0,
	0xFF, 0xC7, 0xFE, 0x04, 0x78, 0x3F, 0xF1, 0xFF, 0x81, 0x1E, 0x0F, 0xFC, 0x7F, 0xE0, 0x47, 0x83,
	0xFF, 0x1F, 0xF8, 0x11, 0xE0, 0xFF, 0xC7, 0xFE, 0x04, 0x78, 0x3F, 0xF1, 0xFF, 0x81, 0x1E, 0x0F,
	0xFC, 0x7F, 0xE0, 0x47, 0x83, 0xFF, 0x1F, 0xF8, 0x11, 0xE0, 0xFF, 0xC7, 0xFE, 0x04, 0x78, 0x3F,
	0xF1, 0xFF, 0x81, 0x1E, 0x0F, 0xFC, 0x7F, 0xE0, 0x47, 0x83, 0xFF, 0x1F, 0xF8, 0x11, 0xE0, 0xFF,
	0xC7, 0xFE, 0x04, 0x78, 0x3F, 0xF1, 0xFF, 0x81, 0x1E, 0x0F, 0xFC, 0x7F, 0xE0, 0x47, 0x83, 0xFF,
	0x1F, 0xF8, 0x11, 0xE0, 0xFF, 0xC7, 0xFE, 0x04, 0x78, 0x3F, 0xF1, 0xFF, 0x81, 0x1E, 0x0F, 0xFC,
	0x7F, 0xE0, 0x47, 0x83, 0xFF, 0x1F, 0xF8, 0x11, 0xE0, 0xFF, 0xC7, 0xFE, 0x04, 0x78, 0x3F, 0xF1,
	0xFF, 0x81, 0x1E, 0x0F, 0xFC, 0x7F, 0xE0, 0x47, 0x83, 0xFF, 0x1F, 0xF8, 0x11, 0xE0, 0xFF, 0xC7,
	0xFE, 0x04, 0x78, 0x3F, 0xF1, 0xFF, 0x81, 0x1E, 0x0F, 0xFC, 0x7F, 0xE0, 0x47, 0x83, 0xFF, 0x1F,
	0xF8, 0x11, 0xE0, 0xFF, 0xC7, 0xFE, 0x04, 0x78, 0x3F, 0xF1, 0xFF, 0x81, 0x1E, 0x0F, 0xFC, 0x7F,
	0xE0, 0x47, 0x83, 0xFF, 0x1F, 0xF8, 0x11, 0xE0, 0xFF, 0xC7, 0xFE, 0x04, 0x78, 0x3F, 0xF1, 0xFF,
	0x81, 0x1E, 0x0F, 0xFC, 0x7F, 0xE0, 0x47, 0x83, 0xFF, 0x1F, 0xF8, 0x11, 0xE0, 0xFF, 0xC7, 0xFE,
	0x04, 0x78, 0x3F, 0xF1, 0xFF, 0x81, 0x1E, 0x0F, 0xFC, 0x7F, 0xE0, 0x47, 0x83, 0xFF, 0x1F, 0xF8,
	0x11, 0xE0, 0xFF, 0xC7, 0xFE, 0x04, 0x78, 0x3F, 0xF1, 0xFF, 0x81, 0x1E, 0x0F, 0xFC, 0x7F, 0xE0,
	0x47, 0x83, 0xFF, 0x1F, 0xF8, 0x11, 0xE0, 0xFF, 0xC7, 0xFE, 0x04, 0x78, 0x3F, 0xF1, 0xFF, 0x81,
	0x1E, 0x0F, 0xFC, 0x7F, 0xE0, 0x47, 0x83, 0xFF, 0x1F, 0xF8, 0x11, 0xE0, 0xFF, 0xC7, 0xFE, 0x04,
	0x78, 0x3F, 0xF1, 0xFF, 0x81, 0x1E, 0x0F, 0xFC, 0x7F, 0xE0, 0x47, 0x83, 0xFF, 0x1F, 0xF8, 0x11,
	0xE0, 0xBF, 0xC5, 0xFE, 0x04, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
const lux1310wavetab_t wavetab62clk = {
	.clocks = 62,
	.length = sizeof(sram62clk),
	.abnDelay = 45,
	.wavetab = sram62clk,
	.gaincal = gain62clk,
};

/* 42-clock wavetable */
const UInt8 sram42clk[] = {
	0x81, 0xFF, 0x2F, 0xFA, 0x31, 0xE0, 0x7F, 0xCB, 0xFE, 0x8C, 0x78, 0x1F, 0xF2, 0xFF, 0xA3, 0x1E,
	0x07, 0xFC, 0xBF, 0xE8, 0xC7, 0x81, 0xFF, 0x2F, 0xFA, 0x31, 0xE0, 0x7F, 0xCB, 0xFE, 0x8C, 0x78,
	0x1F, 0xF2, 0xFF, 0xA3, 0x1E, 0x07, 0xFC, 0xBF, 0xE8, 0x47, 0x81, 0xFF, 0x2F, 0xFA, 0x11, 0xE0,
	0x7F, 0xCB, 0xFE, 0x84, 0x78, 0x1F, 0xF2, 0xFF, 0xA1, 0x1E, 0x07, 0xFC, 0xBF, 0xE8, 0x47, 0x81,
	0xFF, 0x2F, 0xFA, 0x11, 0xE0, 0x3F, 0xCB, 0xFE, 0x84, 0x78, 0x0F, 0xF0, 0xFF, 0xB5, 0x1E, 0x03,
	0xFC, 0x3F, 0xED, 0x47, 0x80, 0xFF, 0x0F, 0xFB, 0x51, 0xE0, 0x3F, 0xC3, 0xFE, 0xD4, 0x78, 0x0F,
	0xF0, 0xFF, 0xB5, 0x1E, 0x03, 0xFC, 0x3F, 0xED, 0x47, 0x80, 0xFF, 0x0F, 0xFB, 0x51, 0xE0, 0x3F,
	0xC3, 0xFE, 0xD4, 0x78, 0x0F, 0xF0, 0xFF, 0xB5, 0x1E, 0x03, 0xFC, 0x3F, 0xE9, 0x47, 0x80, 0xFF,
	0x0F, 0xFA, 0x51, 0xE0, 0x3F, 0xC3, 0xFE, 0x94, 0x78, 0x0F, 0xF0, 0xFF, 0xA5, 0x1E, 0x03, 0xFC,
	0x3F, 0xE8, 0x47, 0x80, 0xFF, 0x0F, 0xFA, 0x11, 0xE0, 0x3F, 0xC3, 0xFE, 0x84, 0x78, 0x0F, 0xF0,
	0xFF, 0xA1, 0x1E, 0x03, 0xFC, 0x3F, 0xE8, 0x47, 0x80, 0xFF, 0x0F, 0xFA, 0x11, 0xE0, 0x3F, 0xC3,
	0xFE, 0x84, 0x78, 0x0F, 0xF0, 0xFF, 0xA1, 0x1E, 0x03, 0xFC, 0x3F, 0xE8, 0x47, 0x80, 0xFF, 0x0F,
	0xFA, 0x11, 0xE0, 0x3F, 0xC3, 0xFE, 0x84, 0x78, 0x0F, 0xF0, 0xFF, 0xA1, 0x1E, 0x03, 0xFC, 0x3F,
	0xE8, 0x47, 0x80, 0xFF, 0x0F, 0xFA, 0x11, 0xE0, 0x3F, 0xC1, 0xFE, 0x84, 0x70, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00,
};
const UInt8 gain42clk[] = {
	0x83, 0xFF, 0x1F, 0xF8, 0x11, 0xE0, 0xFF, 0xC7, 0xFE, 0x04, 0x78, 0x3F, 0xF1, 0xFF, 0x81, 0x1E,
	0x0F, 0xFC, 0x7F, 0xE0, 0x47, 0x83, 0xFF, 0x1F, 0xF8, 0x11, 0xE0, 0xFF, 0xC7, 0xFE, 0x04, 0x78,
	0x3F, 0xF1, 0xFF, 0x81, 0x1E, 0x0F, 0xFC, 0x7F, 0xE0, 0x47, 0x83, 0xFF, 0x1F, 0xF8, 0x11, 0xE0,
	0xFF, 0xC7, 0xFE, 0x04, 0x78, 0x3F, 0xF1, 0xFF, 0x81, 0x1E, 0x0F, 0xFC, 0x7F, 0xE0, 0x47, 0x83,
	0xFF, 0x1F, 0xF8, 0x11, 0xE0, 0xFF, 0xC7, 0xFE, 0x04, 0x78, 0x3F, 0xF1, 0xFF, 0x81, 0x1E, 0x0F,
	0xFC, 0x7F, 0xE0, 0x47, 0x83, 0xFF, 0x1F, 0xF8, 0x11, 0xE0, 0xFF, 0xC7, 0xFE, 0x04, 0x78, 0x3F,
	0xF1, 0xFF, 0x81, 0x1E, 0x0F, 0xFC, 0x7F, 0xE0, 0x47, 0x83, 0xFF, 0x1F, 0xF8, 0x11, 0xE0, 0xFF,
	0xC7, 0xFE, 0x04, 0x78, 0x3F, 0xF1, 0xFF, 0x81, 0x1E, 0x0F, 0xFC, 0x7F, 0xE0, 0x47, 0x83, 0xFF,
	0x1F, 0xF8, 0x11, 0xE0, 0xFF, 0xC7, 0xFE, 0x04, 0x78, 0x3F, 0xF1, 0xFF, 0x81, 0x1E, 0x0F, 0xFC,
	0x7F, 0xE0, 0x47, 0x83, 0xFF, 0x1F, 0xF8, 0x11, 0xE0, 0xFF, 0xC7, 0xFE, 0x04, 0x78, 0x3F, 0xF1,
	0xFF, 0x81, 0x1E, 0x0F, 0xFC, 0x7F, 0xE0, 0x47, 0x83, 0xFF, 0x1F, 0xF8, 0x11, 0xE0, 0xFF, 0xC7,
	0xFE, 0x04, 0x78, 0x3F, 0xF1, 0xFF, 0x81, 0x1E, 0x0F, 0xFC, 0x7F, 0xE0, 0x47, 0x83, 0xFF, 0x1F,
	0xF8, 0x11, 0xE0, 0xFF, 0xC7, 0xFE, 0x04, 0x78, 0x3F, 0xF1, 0xFF, 0x81, 0x1E, 0x0F, 0xFC, 0x7F,
	0xE0, 0x47, 0x83, 0xFF, 0x1F, 0xF8, 0x11, 0xE0, 0xBF, 0xC5, 0xFE, 0x04, 0x70, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00,
};
const lux1310wavetab_t wavetab42clk = {
	.clocks = 42,
	.length = sizeof(sram42clk),
	.abnDelay = 30,
	.wavetab = sram42clk,
	.gaincal = gain42clk,
};

/* 39-clock wavetable */
const UInt8 sram39clk[] = {
	0x81, 0xFF, 0x2F, 0xFA, 0x31, 0xE0, 0x7F, 0xCB, 0xFE, 0x8C, 0x78, 0x1F, 0xF2, 0xFF, 0xA3, 0x1E,
	0x07, 0xFC, 0xBF, 0xE8, 0xC7, 0x81, 0xFF, 0x2F, 0xFA, 0x31, 0xE0, 0x7F, 0xCB, 0xFE, 0x8C, 0x78,
	0x1F, 0xF2, 0xFF, 0xA3, 0x1E, 0x07, 0xFC, 0xBF, 0xE8, 0x47, 0x81, 0xFF, 0x2F, 0xFA, 0x11, 0xE0,
	0x7F, 0xCB, 0xFE, 0x84, 0x78, 0x1F, 0xF2, 0xFF, 0xA1, 0x1E, 0x07, 0xFC, 0xBF, 0xE8, 0x47, 0x81,
	0xFF, 0x2F, 0xFA, 0x11, 0xE0, 0x3F, 0xCB, 0xFE, 0x84, 0x78, 0x0F, 0xF0, 0xFF, 0xB5, 0x1E, 0x03,
	0xFC, 0x3F, 0xED, 0x47, 0x80, 0xFF, 0x0F, 0xFB, 0x51, 0xE0, 0x3F, 0xC3, 0xFE, 0xD4, 0x78, 0x0F,
	0xF0, 0xFF, 0xB5, 0x1E, 0x03, 0xFC, 0x3F, 0xED, 0x47, 0x80, 0xFF, 0x0F, 0xFB, 0x51, 0xE0, 0x3F,
	0xC3, 0xFE, 0xD4, 0x78, 0x0F, 0xF0, 0xFF, 0xB5, 0x1E, 0x03, 0xFC, 0x3F, 0xE9, 0x47, 0x80, 0xFF,
	0x0F, 0xFA, 0x51, 0xE0, 0x3F, 0xC3, 0xFE, 0x94, 0x78, 0x0F, 0xF0, 0xFF, 0xA5, 0x1E, 0x03, 0xFC,
	0x3F, 0xE8, 0x47, 0x80, 0xFF, 0x0F, 0xFA, 0x11, 0xE0, 0x3F, 0xC3, 0xFE, 0x84, 0x78, 0x0F, 0xF0,
	0xFF, 0xA1, 0x1E, 0x03, 0xFC, 0x3F, 0xE8, 0x47, 0x80, 0xFF, 0x0F, 0xFA, 0x11, 0xE0, 0x3F, 0xC3,
	0xFE, 0x84, 0x78, 0x0F, 0xF0, 0xFF, 0xA1, 0x1E, 0x03, 0xFC, 0x3F, 0xE8, 0x47, 0x80, 0xFF, 0x0F,
	0xFA, 0x11, 0xE0, 0x3F, 0xC3, 0xFE, 0x84, 0x78, 0x0F, 0xF0, 0x7F, 0xA1, 0x1C, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00,
};
const UInt8 gain39clk[] = {
	0x83, 0xFF, 0x1F, 0xF8, 0x11, 0xE0, 0xFF, 0xC7, 0xFE, 0x04, 0x78, 0x3F, 0xF1, 0xFF, 0x81, 0x1E,
	0x0F, 0xFC, 0x7F, 0xE0, 0x47, 0x83, 0xFF, 0x1F, 0xF8, 0x11, 0xE0, 0xFF, 0xC7, 0xFE, 0x04, 0x78,
	0x3F, 0xF1, 0xFF, 0x81, 0x1E, 0x0F, 0xFC, 0x7F, 0xE0, 0x47, 0x83, 0xFF, 0x1F, 0xF8, 0x11, 0xE0,
	0xFF, 0xC7, 0xFE, 0x04, 0x78, 0x3F, 0xF1, 0xFF, 0x81, 0x1E, 0x0F, 0xFC, 0x7F, 0xE0, 0x47, 0x83,
	0xFF, 0x1F, 0xF8, 0x11, 0xE0, 0xFF, 0xC7, 0xFE, 0x04, 0x78, 0x3F, 0xF1, 0xFF, 0x81, 0x1E, 0x0F,
	0xFC, 0x7F, 0xE0, 0x47, 0x83, 0xFF, 0x1F, 0xF8, 0x11, 0xE0, 0xFF, 0xC7, 0xFE, 0x04, 0x78, 0x3F,
	0xF1, 0xFF, 0x81, 0x1E, 0x0F, 0xFC, 0x7F, 0xE0, 0x47, 0x83, 0xFF, 0x1F, 0xF8, 0x11, 0xE0, 0xFF,
	0xC7, 0xFE, 0x04, 0x78, 0x3F, 0xF1, 0xFF, 0x81, 0x1E, 0x0F, 0xFC, 0x7F, 0xE0, 0x47, 0x83, 0xFF,
	0x1F, 0xF8, 0x11, 0xE0, 0xFF, 0xC7, 0xFE, 0x04, 0x78, 0x3F, 0xF1, 0xFF, 0x81, 0x1E, 0x0F, 0xFC,
	0x7F, 0xE0, 0x47, 0x83, 0xFF, 0x1F, 0xF8, 0x11, 0xE0, 0xFF, 0xC7, 0xFE, 0x04, 0x78, 0x3F, 0xF1,
	0xFF, 0x81, 0x1E, 0x0F, 0xFC, 0x7F, 0xE0, 0x47, 0x83, 0xFF, 0x1F, 0xF8, 0x11, 0xE0, 0xFF, 0xC7,
	0xFE, 0x04, 0x78, 0x3F, 0xF1, 0xFF, 0x81, 0x1E, 0x0F, 0xFC, 0x7F, 0xE0, 0x47, 0x83, 0xFF, 0x1F,
	0xF8, 0x11, 0xE0, 0xFF, 0xC7, 0xFE, 0x04, 0x78, 0x2F, 0xF1, 0x7F, 0x81, 0x1C, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00,
};
const lux1310wavetab_t wavetab39clk = {
	.clocks = 39,
	.length = sizeof(sram39clk),
	.abnDelay = 30,
	.wavetab = sram39clk,
	.gaincal = gain39clk,
};

/* 30-clock wavetable */
const UInt8 sram30clk[] = {
	0x81, 0xFF, 0x2F, 0xFA, 0x31, 0xE0, 0x7F, 0xCB, 0xFE, 0x8C, 0x78, 0x1F, 0xF2, 0xFF, 0xA3, 0x1E,
	0x07, 0xFC, 0xBF, 0xE8, 0xC7, 0x81, 0xFF, 0x2F, 0xFA, 0x31, 0xE0, 0x7F, 0xCB, 0xFE, 0x8C, 0x78,
	0x1F, 0xF2, 0xFF, 0xA3, 0x1E, 0x07, 0xFC, 0xBF, 0xE8, 0x47, 0x81, 0xFF, 0x2F, 0xFA, 0x11, 0xE0,
	0x7F, 0xCB, 0xFE, 0x84, 0x78, 0x1F, 0xF2, 0xFF, 0xA1, 0x1E, 0x07, 0xFC, 0xBF, 0xE8, 0x47, 0x81,
	0xFF, 0x2F, 0xFA, 0x11, 0xE0, 0x3F, 0xCB, 0xFE, 0x84, 0x78, 0x0F, 0xF0, 0xFF, 0xB5, 0x1E, 0x03,
	0xFC, 0x3F, 0xED, 0x47, 0x80, 0xFF, 0x0F, 0xFB, 0x51, 0xE0, 0x3F, 0xC3, 0xFE, 0xD4, 0x78, 0x0F,
	0xF0, 0xFF, 0xB5, 0x1E, 0x03, 0xFC, 0x3F, 0xED, 0x47, 0x80, 0xFF, 0x0F, 0xFA, 0x51, 0xE0, 0x3F,
	0xC3, 0xFE, 0x94, 0x78, 0x0F, 0xF0, 0xFF, 0xA1, 0x1E, 0x03, 0xFC, 0x3F, 0xE8, 0x47, 0x80, 0xFF,
	0x0F, 0xFA, 0x11, 0xE0, 0x3F, 0xC3, 0xFE, 0x84, 0x78, 0x0F, 0xF0, 0xFF, 0xA1, 0x1E, 0x03, 0xFC,
	0x3F, 0xE8, 0x47, 0x80, 0xFF, 0x0F, 0xFA, 0x11, 0xE0, 0x3F, 0xC1, 0xFE, 0x84, 0x70, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00,
};
const UInt8 gain30clk[] = {
	0x83, 0xFF, 0x1F, 0xF8, 0x11, 0xE0, 0xFF, 0xC7, 0xFE, 0x04, 0x78, 0x3F, 0xF1, 0xFF, 0x81, 0x1E,
	0x0F, 0xFC, 0x7F, 0xE0, 0x47, 0x83, 0xFF, 0x1F, 0xF8, 0x11, 0xE0, 0xFF, 0xC7, 0xFE, 0x04, 0x78,
	0x3F, 0xF1, 0xFF, 0x81, 0x1E, 0x0F, 0xFC, 0x7F, 0xE0, 0x47, 0x83, 0xFF, 0x1F, 0xF8, 0x11, 0xE0,
	0xFF, 0xC7, 0xFE, 0x04, 0x78, 0x3F, 0xF1, 0xFF, 0x81, 0x1E, 0x0F, 0xFC, 0x7F, 0xE0, 0x47, 0x83,
	0xFF, 0x1F, 0xF8, 0x11, 0xE0, 0xFF, 0xC7, 0xFE, 0x04, 0x78, 0x3F, 0xF1, 0xFF, 0x81, 0x1E, 0x0F,
	0xFC, 0x7F, 0xE0, 0x47, 0x83, 0xFF, 0x1F, 0xF8, 0x11, 0xE0, 0xFF, 0xC7, 0xFE, 0x04, 0x78, 0x3F,
	0xF1, 0xFF, 0x81, 0x1E, 0x0F, 0xFC, 0x7F, 0xE0, 0x47, 0x83, 0xFF, 0x1F, 0xF8, 0x11, 0xE0, 0xFF,
	0xC7, 0xFE, 0x04, 0x78, 0x3F, 0xF1, 0xFF, 0x81, 0x1E, 0x0F, 0xFC, 0x7F, 0xE0, 0x47, 0x83, 0xFF,
	0x1F, 0xF8, 0x11, 0xE0, 0xFF, 0xC7, 0xFE, 0x04, 0x78, 0x3F, 0xF1, 0xFF, 0x81, 0x1E, 0x0F, 0xFC,
	0x7F, 0xE0, 0x47, 0x83, 0xFF, 0x1F, 0xF8, 0x11, 0xE0, 0xBF, 0xC5, 0xFE, 0x04, 0x70, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00,

};
const lux1310wavetab_t wavetab30clk = {
	.clocks = 30,
	.length = sizeof(sram30clk),
	.abnDelay = 29,
	.wavetab = sram30clk,
	.gaincal = gain30clk,
};

/* 25-clock wavetable */
const UInt8 sram25clk[] = {
	0x81, 0xFF, 0x2F, 0xFA, 0x31, 0xE0, 0x7F, 0xCB, 0xFE, 0x8C, 0x78, 0x1F, 0xF2, 0xFF, 0xA3, 0x1E,
	0x07, 0xFC, 0xBF, 0xE8, 0xC7, 0x81, 0xFF, 0x2F, 0xFA, 0x31, 0xE0, 0x7F, 0xCB, 0xFE, 0x8C, 0x78,
	0x1F, 0xF2, 0xFF, 0xA1, 0x1E, 0x07, 0xFC, 0xBF, 0xE8, 0x47, 0x81, 0xFF, 0x2F, 0xFA, 0x11, 0xE0,
	0x7F, 0xCB, 0xFE, 0x84, 0x78, 0x1F, 0xF2, 0xFF, 0xA1, 0x1E, 0x03, 0xFC, 0xBF, 0xE8, 0x47, 0x80,
	0xFF, 0x0F, 0xFB, 0x51, 0xE0, 0x3F, 0xC3, 0xFE, 0xD4, 0x78, 0x0F, 0xF0, 0xFF, 0xB5, 0x1E, 0x03,
	0xFC, 0x3F, 0xED, 0x47, 0x80, 0xFF, 0x0F, 0xFB, 0x51, 0xE0, 0x3F, 0xC3, 0xFE, 0xD4, 0x78, 0x0F,
	0xF0, 0xFF, 0xA5, 0x1E, 0x03, 0xFC, 0x3F, 0xE9, 0x47, 0x80, 0xFF, 0x0F, 0xFA, 0x11, 0xE0, 0x3F,
	0xC3, 0xFE, 0x84, 0x78, 0x0F, 0xF0, 0xFF, 0xA1, 0x1E, 0x03, 0xFC, 0x3F, 0xE8, 0x47, 0x80, 0xFF,
	0x07, 0xFA, 0x11, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
const UInt8 gain25clk[] = {
	0x83, 0xFF, 0x1F, 0xF8, 0x11, 0xE0, 0xFF, 0xC7, 0xFE, 0x04, 0x78, 0x3F, 0xF1, 0xFF, 0x81, 0x1E,
	0x0F, 0xFC, 0x7F, 0xE0, 0x47, 0x83, 0xFF, 0x1F, 0xF8, 0x11, 0xE0, 0xFF, 0xC7, 0xFE, 0x04, 0x78,
	0x3F, 0xF1, 0xFF, 0x81, 0x1E, 0x0F, 0xFC, 0x7F, 0xE0, 0x47, 0x83, 0xFF, 0x1F, 0xF8, 0x11, 0xE0,
	0xFF, 0xC7, 0xFE, 0x04, 0x78, 0x3F, 0xF1, 0xFF, 0x81, 0x1E, 0x0F, 0xFC, 0x7F, 0xE0, 0x47, 0x83,
	0xFF, 0x1F, 0xF8, 0x11, 0xE0, 0xFF, 0xC7, 0xFE, 0x04, 0x78, 0x3F, 0xF1, 0xFF, 0x81, 0x1E, 0x0F,
	0xFC, 0x7F, 0xE0, 0x47, 0x83, 0xFF, 0x1F, 0xF8, 0x11, 0xE0, 0xFF, 0xC7, 0xFE, 0x04, 0x78, 0x3F,
	0xF1, 0xFF, 0x81, 0x1E, 0x0F, 0xFC, 0x7F, 0xE0, 0x47, 0x83, 0xFF, 0x1F, 0xF8, 0x11, 0xE0, 0xFF,
	0xC7, 0xFE, 0x04, 0x78, 0x3F, 0xF1, 0xFF, 0x81, 0x1E, 0x0F, 0xFC, 0x7F, 0xE0, 0x47, 0x82, 0xFF,
	0x17, 0xF8, 0x11, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
const lux1310wavetab_t wavetab25clk = {
	.clocks = 25,
	.length = sizeof(sram25clk),
	.abnDelay = 27,
	.wavetab = sram25clk,
	.gaincal = gain25clk,
};

/* 20-clock wavetable */
const UInt8 sram20clk[] = {
	0x81, 0xFF, 0x2F, 0xFA, 0x31, 0xE0, 0x7F, 0xCB, 0xFE, 0x8C, 0x78, 0x1F, 0xF2, 0xFF, 0xA3, 0x1E,
	0x07, 0xFC, 0xBF, 0xE8, 0xC7, 0x81, 0xFF, 0x2F, 0xFA, 0x31, 0xE0, 0x7F, 0xCB, 0xFE, 0x84, 0x78,
	0x1F, 0xF2, 0xFF, 0xA1, 0x1E, 0x07, 0xFC, 0xBF, 0xE8, 0x47, 0x81, 0xFF, 0x2F, 0xFA, 0x11, 0xE0,
	0x3F, 0xCB, 0xFE, 0x84, 0x78, 0x0F, 0xF0, 0xFF, 0xB5, 0x1E, 0x03, 0xFC, 0x3F, 0xED, 0x47, 0x80,
	0xFF, 0x0F, 0xFB, 0x51, 0xE0, 0x3F, 0xC3, 0xFE, 0xD4, 0x78, 0x0F, 0xF0, 0xFF, 0xB5, 0x1E, 0x03,
	0xFC, 0x3F, 0xE9, 0x47, 0x80, 0xFF, 0x0F, 0xFA, 0x51, 0xE0, 0x3F, 0xC3, 0xFE, 0x84, 0x78, 0x0F,
	0xF0, 0xFF, 0xA1, 0x1E, 0x03, 0xFC, 0x1F, 0xE8, 0x47, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
const UInt8 gain20clk[] = {
	0x83, 0xFF, 0x1F, 0xF8, 0x11, 0xE0, 0xFF, 0xC7, 0xFE, 0x04, 0x78, 0x3F, 0xF1, 0xFF, 0x81, 0x1E,
	0x0F, 0xFC, 0x7F, 0xE0, 0x47, 0x83, 0xFF, 0x1F, 0xF8, 0x11, 0xE0, 0xFF, 0xC7, 0xFE, 0x04, 0x78,
	0x3F, 0xF1, 0xFF, 0x81, 0x1E, 0x0F, 0xFC, 0x7F, 0xE0, 0x47, 0x83, 0xFF, 0x1F, 0xF8, 0x11, 0xE0,
	0xFF, 0xC7, 0xFE, 0x04, 0x78, 0x3F, 0xF1, 0xFF, 0x81, 0x1E, 0x0F, 0xFC, 0x7F, 0xE0, 0x47, 0x83,
	0xFF, 0x1F, 0xF8, 0x11, 0xE0, 0xFF, 0xC7, 0xFE, 0x04, 0x78, 0x3F, 0xF1, 0xFF, 0x81, 0x1E, 0x0F,
	0xFC, 0x7F, 0xE0, 0x47, 0x83, 0xFF, 0x1F, 0xF8, 0x11, 0xE0, 0xFF, 0xC7, 0xFE, 0x04, 0x78, 0x3F,
	0xF1, 0xFF, 0x81, 0x1E, 0x0B, 0xFC, 0x5F, 0xE0, 0x47, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
const lux1310wavetab_t wavetab20clk = {
	.clocks = 20,
	.length = sizeof(sram20clk),
	.abnDelay = 25,
	.wavetab = sram20clk,
	.gaincal = gain20clk,
};

/* 19-clock wavetable */
const UInt8 sram19clk[] = {
	0x81, 0xFF, 0x2F, 0xFA, 0x31, 0xE0, 0x7F, 0xCB, 0xFE, 0x8C, 0x78, 0x1F, 0xF2, 0xFF, 0xA3, 0x1E,
	0x07, 0xFC, 0xBF, 0xE8, 0xC7, 0x81, 0xFF, 0x2F, 0xFA, 0x31, 0xE0, 0x7F, 0xCB, 0xFE, 0x84, 0x78,
	0x1F, 0xF2, 0xFF, 0xA1, 0x1E, 0x07, 0xFC, 0xBF, 0xE8, 0x47, 0x81, 0xFF, 0x2F, 0xFA, 0x11, 0xE0,
	0x3F, 0xCB, 0xFE, 0x84, 0x78, 0x0F, 0xF0, 0xFF, 0xB5, 0x1E, 0x03, 0xFC, 0x3F, 0xED, 0x47, 0x80,
	0xFF, 0x0F, 0xFB, 0x51, 0xE0, 0x3F, 0xC3, 0xFE, 0xD4, 0x78, 0x0F, 0xF0, 0xFF, 0xB5, 0x1E, 0x03,
	0xFC, 0x3F, 0xE9, 0x47, 0x80, 0xFF, 0x0F, 0xFA, 0x51, 0xE0, 0x3F, 0xC3, 0xFE, 0x84, 0x78, 0x0F,
	0xF0, 0x7F, 0xA1, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
const UInt8 gain19clk[] = {
	0x83, 0xFF, 0x1F, 0xF8, 0x11, 0xE0, 0xFF, 0xC7, 0xFE, 0x04, 0x78, 0x3F, 0xF1, 0xFF, 0x81, 0x1E,
	0x0F, 0xFC, 0x7F, 0xE0, 0x47, 0x83, 0xFF, 0x1F, 0xF8, 0x11, 0xE0, 0xFF, 0xC7, 0xFE, 0x04, 0x78,
	0x3F, 0xF1, 0xFF, 0x81, 0x1E, 0x0F, 0xFC, 0x7F, 0xE0, 0x47, 0x83, 0xFF, 0x1F, 0xF8, 0x11, 0xE0,
	0xFF, 0xC7, 0xFE, 0x04, 0x78, 0x3F, 0xF1, 0xFF, 0x81, 0x1E, 0x0F, 0xFC, 0x7F, 0xE0, 0x47, 0x83,
	0xFF, 0x1F, 0xF8, 0x11, 0xE0, 0xFF, 0xC7, 0xFE, 0x04, 0x78, 0x3F, 0xF1, 0xFF, 0x81, 0x1E, 0x0F,
	0xFC, 0x7F, 0xE0, 0x47, 0x83, 0xFF, 0x1F, 0xF8, 0x11, 0xE0, 0xFF, 0xC7, 0xFE, 0x04, 0x78, 0x2F,
	0xF1, 0x7F, 0x81, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
const lux1310wavetab_t wavetab19clk = {
	.clocks = 19,
	.length = sizeof(sram19clk),
	.abnDelay = 25,
	.wavetab = sram19clk,
	.gaincal = gain19clk,
};

const lux1310wavetab_t *lux1310wt[] {
	&wavetab80clk,
	&wavetab79clk,
	&wavetab62clk,
	&wavetab42clk,
	&wavetab39clk,
	&wavetab30clk,
	&wavetab25clk,
	&wavetab20clk,
	&wavetab19clk,
	NULL
};
