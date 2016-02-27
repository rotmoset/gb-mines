#include <gb/gb.h>
#include "about.h"
#include "graphics.h"

TILESET (
	about_tileset,
	0xD7, 
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x01,0x00,0x02,0x00,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x60,0x00,0x38,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x82,0x04,0x25,0xC2,
	0x00,0x00,0x00,0x00,0x00,0x00,0x30,0x00,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x01,0x0C,0x00,0x18,0x00,0x03,0x00,
	0x00,0x00,0x03,0x00,0x1D,0x00,0x63,0x00,0x05,0xE3,0xE1,0x1F,0x18,0x07,0xA0,0x1F,
	0x3B,0x04,0x80,0x7F,0x80,0x7F,0x00,0xFF,0xDC,0xFF,0x7E,0xFF,0x20,0xFF,0x00,0xFF,
	0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x04,0xFF,
	0x00,0xFF,0x0E,0xFF,0x12,0xFF,0x00,0xFF,0x00,0xFF,0x16,0xFF,0x80,0xFF,0x00,0xFF,
	0x00,0x00,0x69,0x16,0x40,0x3F,0x20,0x1F,0x20,0x1F,0x18,0x07,0x04,0x03,0x01,0x00,
	0xC0,0x3F,0xF0,0x0F,0xDF,0x00,0x3F,0xC0,0x24,0xDB,0x01,0xFE,0x0F,0xF0,0xEE,0x10,
	0x3E,0xC1,0x00,0xFF,0xE0,0x1F,0xE7,0x18,0xCF,0x30,0xFF,0x00,0x80,0x00,0x00,0x00,
	0x07,0xF8,0x05,0xFA,0x07,0xF8,0x03,0xFC,0xF0,0x0F,0x10,0x0F,0x08,0x07,0x04,0x03,
	0xC0,0x00,0xC0,0x00,0xE0,0x00,0x30,0xC0,0x78,0x80,0x08,0xF0,0x04,0xF8,0x40,0xBC,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x0D,0x00,
	0x0C,0x00,0x20,0x1F,0x80,0x7F,0x03,0xFF,0x03,0xFF,0x80,0x7F,0xC4,0x3F,0x18,0xE7,
	0x88,0x7F,0x18,0xFF,0x27,0xFF,0x07,0xFF,0x0B,0xFF,0x00,0xFF,0x08,0xFF,0x0C,0xFF,
	0x00,0xFF,0x02,0xFF,0xE0,0xFF,0x60,0xFF,0x80,0xFF,0x00,0xFF,0x02,0xFF,0x41,0xFF,
	0x00,0xFF,0x00,0xFF,0x02,0xFF,0x40,0xFF,0x10,0xFF,0x10,0xFF,0x00,0xFF,0xE6,0xFF,
	0x06,0xFF,0x16,0xFF,0x1F,0xFF,0x00,0xFF,0x00,0xFF,0x18,0xFF,0x3F,0xFF,0xFF,0xFF,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x46,0x00,
	0x00,0x00,0x00,0x00,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x14,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x04,0x03,0x07,0x00,0x05,0x00,0x07,0x00,0x07,0x00,0x07,0x00,0x03,0x00,0x03,0x00,
	0x02,0xFC,0x82,0x7C,0xE1,0x1E,0x81,0x7E,0x81,0x7E,0xC1,0x3E,0xC1,0x3E,0xFC,0x03,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x80,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x01,0x03,0x01,
	0x00,0x00,0x02,0x01,0x0B,0x07,0x10,0x0F,0x12,0x0D,0x38,0x1F,0x3F,0xFF,0x36,0xFF,
	0xE0,0x1F,0x00,0xFF,0x42,0xFD,0x60,0xFF,0xE0,0xFF,0x40,0xFF,0x81,0xFF,0x00,0xFF,
	0x8C,0x73,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x01,0xFF,0x00,0xFF,0x08,0xFF,0x00,0xFF,
	0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x80,0xFF,0x40,0xFF,0x08,0xFF,0x04,0xFF,
	0x00,0xFF,0x00,0xFF,0x08,0xF7,0xB0,0xFF,0x10,0xFF,0x00,0xFF,0x18,0xFF,0x06,0xFF,
	0xFF,0xFF,0x1F,0xFF,0x07,0xFF,0x07,0xFF,0x0F,0xFF,0x03,0xFF,0x00,0xFF,0x80,0x7F,
	0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x3F,0xFF,0x0E,0xFF,
	0x0C,0x00,0x0C,0x00,0x16,0x00,0x12,0x00,0x20,0x00,0x02,0x00,0x20,0x00,0x02,0x0C,
	0x40,0x00,0xC0,0x00,0xD8,0x00,0x3C,0x00,0x04,0x00,0x18,0x00,0x48,0x00,0x04,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x00,0xB3,0x00,0xFF,0x00,0x81,0x7E,
	0x00,0x00,0x00,0x00,0x08,0x00,0x04,0x00,0x20,0x00,0xC0,0x00,0xB8,0x00,0xCF,0x00,
	0x03,0x00,0x07,0x00,0x07,0x00,0x07,0x00,0x07,0x00,0x03,0x00,0x03,0x00,0x01,0x00,
	0xF8,0x07,0x99,0x66,0xBD,0x42,0xFD,0x02,0x19,0xE6,0x19,0xE6,0xB9,0x46,0xDF,0x20,
	0x80,0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x0C,0x03,0x16,0x0F,0x30,0x0F,0x20,0x1F,0x33,0x0C,0x0B,0x04,0x1F,0x00,0x23,0x1C,
	0x1F,0xE0,0xA0,0xC0,0x40,0x80,0x02,0x01,0xCB,0x07,0x9F,0x0F,0x29,0x1F,0xA3,0x7F,
	0xF1,0x0E,0x30,0x0F,0x01,0xFF,0x40,0xFF,0xBE,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
	0xC0,0x3F,0x08,0xF7,0x80,0xFF,0x7F,0xFF,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xF3,0xFF,
	0x00,0xFF,0x48,0xFF,0x3E,0xFF,0x97,0xFF,0xE1,0xFF,0xFF,0xFF,0xDE,0xFF,0xF4,0xFF,
	0x11,0xEF,0x80,0xFF,0x00,0xFF,0xC0,0xFF,0xFC,0xFF,0xFF,0xFF,0xC6,0xFF,0x08,0xFF,
	0x20,0xDF,0x98,0xE7,0x00,0xFF,0x00,0xFF,0x00,0xFF,0xA0,0xFF,0x60,0xFF,0x00,0xFF,
	0x08,0xFF,0x00,0xFF,0x70,0xFF,0x68,0xFF,0x64,0xFF,0x7C,0xFF,0x18,0xFF,0x00,0xFF,
	0x00,0x1F,0x18,0x07,0x3A,0x05,0x32,0x0D,0x21,0x1E,0x20,0x1F,0x26,0x59,0x3E,0x01,
	0x87,0x00,0xE3,0x00,0x30,0xC0,0x10,0xE0,0x10,0x20,0x38,0x00,0xF0,0x00,0x24,0xC0,
	0xE3,0x1C,0xE6,0x19,0xE1,0x1E,0xE1,0x1E,0x11,0x0E,0x13,0x0C,0x32,0x0D,0x3F,0x00,
	0xCF,0x00,0x72,0x80,0x9C,0x60,0x2C,0x10,0x38,0x00,0xE0,0x00,0xF0,0x00,0x80,0x00,
	0x01,0x00,0x81,0x00,0x02,0x00,0x02,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0xFE,0x00,0xF3,0x00,0xE1,0x00,0x60,0x00,0xC0,0x00,0x60,0x00,0x2C,0x00,0x0E,0x00,
	0x00,0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x3C,0x03,0x60,0x07,0x20,0x1F,0x40,0x3F,0x40,0x3F,0x40,0x3F,0x41,0x3E,0x21,0x1E,
	0x67,0xFF,0x1F,0xFF,0x17,0xFF,0x23,0xFF,0x07,0xFF,0x04,0xFF,0xEC,0x1F,0x34,0x0F,
	0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xE7,0xFF,0x79,0xFF,0x2B,0xFF,0x06,0xFF,
	0xF9,0xFF,0xFE,0xFF,0xE4,0xFF,0xC0,0xFF,0x80,0xFF,0xC0,0xFF,0x00,0xFF,0x00,0xFF,
	0xF0,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x03,0xFC,0x3F,0xC0,0x7C,0x80,0xE4,0x00,
	0x10,0xFF,0x00,0xFF,0x03,0xFC,0x0F,0xF0,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0xA0,0xDF,0x00,0xFF,0x7F,0x00,0xB1,0x00,0x3E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x01,0xFE,0x07,0xF8,0xFD,0x00,0xAF,0x40,0xE3,0x00,0x01,0x00,0x01,0x00,0x01,0x00,
	0x2F,0x00,0x07,0x00,0x03,0x00,0x07,0x00,0x04,0x00,0x04,0x00,0x0C,0x00,0x0D,0x00,
	0xF4,0x00,0xE4,0x00,0xC0,0x00,0x19,0x00,0xC9,0x00,0x02,0x00,0x00,0x00,0xE1,0x00,
	0x0E,0x00,0x06,0x00,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0x00,0x20,0x00,
	0x00,0x00,0x00,0x00,0x06,0x00,0x00,0x00,0x04,0x00,0x10,0x00,0x3B,0x00,0x68,0x00,
	0x81,0x00,0x41,0x00,0x01,0x00,0x40,0x00,0xC0,0x00,0x80,0x00,0x60,0x00,0x20,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0x00,0x00,0x00,
	0x03,0x1C,0x13,0x0C,0x19,0x06,0x11,0x02,0x13,0x00,0xFF,0x00,0x0C,0x00,0x07,0x00,
	0x14,0x0F,0x04,0x0F,0x30,0x0F,0x98,0x07,0x80,0x07,0xE4,0x03,0x2E,0x01,0x65,0x00,
	0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x05,0xFA,0x01,0xFE,
	0x00,0xFF,0x01,0xFE,0x07,0xF8,0x1B,0xE0,0x39,0xC0,0xFD,0x00,0xEF,0x00,0xEC,0x00,
	0x80,0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x0F,0x00,0x0C,0x03,0x0E,0x01,0x0D,0x00,0x07,0x00,0x07,0x00,0x07,0x00,0x07,0x00,
	0xFC,0x03,0x3F,0xC0,0x3B,0xC0,0xCC,0x33,0x80,0x7F,0x80,0x7F,0x3F,0xC0,0x3F,0xC0,
	0x20,0x00,0x00,0x00,0x80,0x00,0xC0,0x00,0x30,0xC0,0xF0,0x00,0xF8,0x00,0xA8,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x02,0x00,0x03,0x00,0x0D,0x00,
	0x2D,0x00,0x1B,0x00,0x12,0x00,0xB6,0x00,0x9F,0x00,0xFF,0x00,0xFF,0x00,0xFD,0x02,
	0x06,0x00,0xE4,0x03,0x7D,0x03,0xFD,0x03,0x7E,0x01,0xFE,0x01,0xFC,0x03,0xFC,0x03,
	0x00,0x00,0x00,0x00,0x00,0x80,0xC0,0x80,0x80,0xC0,0xE0,0xC0,0x90,0xE0,0xD0,0xE0,
	0x03,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0xC2,0x01,0xC2,0x01,0x55,0x22,0x77,0x38,0x52,0x3D,0x1D,0x32,0x0A,0x31,0x0C,0x33,
	0x07,0xF8,0x7F,0x80,0xBF,0x40,0x3D,0xC2,0x7F,0x80,0xB6,0x49,0xFD,0x02,0xFF,0x00,
	0xEC,0x00,0x90,0x00,0xB0,0x00,0xF0,0x00,0xFC,0x00,0xFE,0x00,0xFE,0x00,0xFC,0x00,
	0x01,0x02,0x03,0x00,0x03,0x00,0x00,0x01,0x00,0x01,0x01,0x00,0x00,0x00,0x00,0x00,
	0x82,0x7D,0x87,0x78,0xDF,0x20,0xDF,0x20,0x7C,0x83,0x64,0x9B,0xBF,0x40,0x1F,0x60,
	0x5C,0xA0,0xF6,0x08,0xEF,0x00,0xE3,0x00,0xE7,0x00,0x6F,0x80,0x9F,0x00,0x93,0x00,
	0x09,0x00,0x0B,0x00,0xBF,0x00,0x9F,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFE,0x01,
	0xFC,0x03,0xF7,0x08,0xE4,0x1B,0xE0,0x1F,0xE0,0x1F,0xC0,0x3F,0x80,0x7F,0x00,0xFF,
	0xD8,0x27,0xD8,0x27,0x23,0xDF,0x23,0xDF,0x03,0xFF,0x07,0xFF,0x07,0xFF,0x07,0xFF,
	0x50,0xE0,0x40,0xF0,0xE8,0xF0,0xF4,0xF8,0xF0,0xFF,0xF8,0xFF,0xF8,0xFF,0xFC,0xFF,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x00,0xC0,0x10,0xE0,
	0x3D,0x02,0x0F,0x00,0x1F,0x00,0x1F,0x00,0x17,0x08,0x57,0x08,0x37,0x78,0x31,0x7E,
	0xFD,0x02,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xC0,0x3F,
	0xFC,0x00,0xFE,0x00,0xF9,0x00,0xFF,0x00,0xC0,0x3F,0x07,0xFF,0x00,0xFF,0x02,0xFD,
	0x00,0x00,0x00,0x00,0x0E,0x00,0x3C,0xC3,0xC0,0xFF,0xBE,0xFF,0x02,0xFD,0x39,0xC0,
	0x00,0x00,0x00,0x00,0x08,0x00,0x7C,0x80,0x39,0xC6,0x00,0xFF,0x00,0xFF,0xE5,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x70,0x80,0x18,0xE0,0x16,0xE8,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x01,0x03,0x03,0x03,0x07,
	0x5B,0x24,0x2F,0x10,0x2C,0x13,0x01,0x7E,0x40,0xFF,0xA0,0xFF,0x0C,0xFF,0xFF,0xFF,
	0xD1,0x00,0xF7,0x00,0x7F,0x80,0x7F,0x80,0x0E,0xF1,0x00,0xFF,0x00,0xFF,0xE0,0xFF,
	0xFC,0x03,0xF8,0x07,0xE0,0x1F,0x80,0x7F,0x80,0x7F,0x00,0xFF,0x00,0xFF,0x00,0xFF,
	0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x06,0xFF,
	0x0F,0xFF,0x0F,0xFF,0x1F,0xFF,0x3F,0xFF,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
	0xFC,0xFF,0xFC,0xFF,0xFE,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
	0x18,0xF8,0x0C,0xFE,0x07,0xFF,0x01,0xFF,0xC0,0xFF,0xF0,0xFF,0xF8,0xFF,0xF0,0xFF,
	0x00,0x00,0x00,0x00,0x80,0x00,0x80,0xC0,0x70,0xE0,0x30,0xF8,0x1E,0xFC,0x06,0xFF,
	0x39,0x1E,0x08,0x1F,0x08,0x1F,0x20,0x1F,0x22,0x1F,0x3B,0x1F,0x0F,0x1F,0x08,0x1F,
	0xE4,0x1B,0x64,0x9B,0x06,0xF9,0x06,0xF9,0x00,0xFF,0xCF,0xF0,0xE7,0xF8,0xE7,0xF8,
	0x12,0xED,0x1F,0xE0,0x7F,0x80,0xFE,0x01,0xFF,0x00,0xBF,0x00,0x1F,0x00,0x17,0x00,
	0xFF,0x00,0xFF,0x00,0x63,0x9C,0x00,0xFF,0xC3,0x3F,0xC7,0x3F,0xE7,0x1F,0xA7,0x5F,
	0x80,0x00,0xF0,0x00,0x70,0x80,0x06,0xF8,0x8A,0xFF,0x00,0xFF,0xE1,0xFE,0xE0,0xFF,
	0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x00,0xB4,0xC0,0x84,0x78,0x67,0x98,
	0x0F,0x07,0x07,0x0F,0x1F,0x0F,0x0F,0x1F,0x1F,0x1F,0x3F,0x1F,0x3F,0x1F,0x1F,0x3F,
	0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
	0xE0,0xFF,0xF0,0xFF,0xF8,0xFF,0xF8,0xFF,0xFC,0xFF,0xFE,0xFF,0xFE,0xFF,0xFC,0xFF,
	0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
	0x07,0xFF,0x03,0xFF,0x0F,0xFF,0x1F,0xFF,0x1F,0xFF,0x5F,0xFF,0x1F,0xFF,0x7F,0xFF,
	0x84,0xFF,0xFF,0xFF,0xFF,0xFF,0xE1,0xFF,0xEC,0xF3,0xF3,0xFC,0xFE,0xFC,0xFE,0xFF,
	0x01,0xFF,0x80,0xFF,0xE0,0xFF,0x0C,0xFF,0x00,0xFF,0xA2,0x7F,0xE3,0x7F,0x27,0xFF,
	0xC3,0x9C,0xC7,0xF8,0x7F,0xF8,0x1B,0xFC,0x8E,0xFC,0x4C,0xFE,0x76,0xFF,0x3E,0xFF,
	0x74,0xF8,0xB4,0x78,0xB4,0x78,0xA4,0x78,0xA0,0x78,0x00,0x38,0x08,0x10,0x88,0x10,
	0x03,0x00,0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x8F,0x7F,0xDF,0x3F,0x31,0x0F,0x08,0x07,0x30,0x0F,0x00,0x1F,0x00,0x1F,0x3C,0x03,
	0xE9,0xF0,0xE8,0xF0,0xE8,0xF0,0x0C,0xF0,0x7C,0x80,0x2A,0xC0,0x3E,0xC0,0x2C,0xD0,
	0x1B,0xE4,0x1E,0x60,0x6F,0x00,0x04,0x00,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x80,0x00,0x00,0x00,0x40,0x00,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x1F,0x3F,0x3F,0x3F,0x7F,0x3F,0x3F,0x7F,0x3F,0x7F,0x7F,0x7F,0x7F,0x7F,0xFF,0x7F,
	0xF9,0xFF,0xF6,0xFF,0xF6,0xFF,0xFE,0xFF,0xFB,0xFF,0xF5,0xFB,0xF9,0xFC,0xFE,0xFC,
	0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x01,0xFF,0xC1,0xFF,0x61,0xFF,
	0x7F,0xFF,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
	0x89,0xFF,0xC3,0xFF,0xEF,0xFF,0xF7,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
	0xFE,0xFF,0xEE,0xFF,0xFE,0xFF,0x7D,0xFE,0xFC,0xFE,0xFD,0xFE,0xFD,0xFE,0xFC,0xFE,
	0x90,0x00,0x10,0x00,0x30,0x00,0x20,0x00,0x20,0x00,0x20,0x00,0x60,0x00,0x40,0x00,
	0x0F,0x00,0x1F,0x00,0x0F,0x00,0x05,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x01,0x00,
	0xF8,0x00,0xF8,0x00,0xF8,0x00,0xF8,0x00,0x70,0x00,0x70,0x00,0xC6,0x00,0xC0,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,
	0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
	0xFB,0xFC,0xF9,0xFE,0xF9,0xFE,0xF9,0xFE,0xFD,0xFE,0xFE,0xFF,0xFF,0xFF,0xFF,0xFF,
	0x3B,0x7F,0xDF,0x3F,0xF3,0x0F,0x73,0x0F,0xC7,0x3F,0xC7,0x3F,0x67,0x9F,0x8F,0xFF,
	0xFD,0xFE,0xFF,0xFE,0xFD,0xFE,0xF8,0xFC,0xF8,0xFC,0xF1,0xF8,0xE1,0xF8,0xEB,0xF0,
	0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x00,0x00,
	0x18,0x00,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x01,0x01,0x01,0x01,0x03,0x01,0x03,0x03,0x03,0x07,0x07,0x07,0x07,0x0F,0x0F,0x0F,
	0xFA,0xF0,0xF6,0xF8,0xFE,0xF8,0xFE,0xFC,0xFE,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
	0x00,0x00,0x00,0x00,0x3E,0x00,0x70,0x0F,0x8F,0x00,0x40,0x80,0x83,0xFC,0xD4,0xEF,
	0x00,0x00,0x00,0x00,0x00,0x00,0x20,0xC0,0x88,0x70,0x0C,0x00,0x00,0x00,0x80,0x00,
	0x1C,0x00,0x3C,0x00,0x28,0x00,0x17,0x00,0x3E,0x00,0x1D,0x00,0x01,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x03,0x09,0x07,0x0A,0x07,0x3B,0x07,
	0x1F,0x0F,0x0F,0x0F,0x1F,0x4F,0x0F,0xDF,0x9F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
	0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,0xF0,0xF9,0xF9,0xF9,0xF9,0xF8,0xF8,0xF9,0xF9,
	0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x62,0x62,0x33,0x33,0x39,0x39,0x78,0x78,0x3C,0x3C,
	0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x3C,0x3C,0x7E,0x7E,0x7E,0x7E,0xFE,0xFE,0xFE,0xFE,
	0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x30,0x30,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,
	0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xC0,0xC0,0x66,0x66,0x65,0x65,0x61,0x61,0x65,0x65,
	0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x87,0x87,0xCF,0xCF,0xCF,0xCF,0xCF,0xCF,0xCF,0xCF,
	0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF1,0xF1,0xE5,0xE5,0xE5,0xE5,0xE2,0xE2,0xCA,0xCA,
	0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x7F,0x7F,0xFF,0xFF,
	0xA8,0xC7,0xA8,0xC7,0x90,0xCF,0xB4,0xCB,0xD6,0xE9,0xED,0xF2,0xE1,0xFE,0xE0,0xFF,
	0x80,0x00,0x50,0x80,0x7C,0x80,0x7C,0x80,0x6F,0x90,0xBF,0x00,0xC1,0x00,0x78,0x80,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x94,0x00,0xFE,0x00,0xFE,0x00,0x1F,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x00,
	0x00,0x00,0x00,0x00,0x00,0x03,0x06,0x0F,0x1F,0x1F,0x3F,0xFF,0xFF,0xFF,0xFF,0xFF,
	0x00,0x00,0x31,0x00,0x09,0xFF,0x0F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
	0x5F,0x3F,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
	0xF9,0xF9,0xF0,0xF0,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
	0x3C,0x3C,0x78,0x78,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xDC,0xDC,
	0xFA,0xFA,0x78,0x78,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x40,0x40,
	0x66,0x66,0xF0,0xF0,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x30,0x30,
	0x66,0x66,0xC0,0xC0,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x60,0x60,
	0xCD,0xCD,0x81,0x81,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x7B,0x7B,
	0xCD,0xCD,0xE2,0xE2,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xE3,0xE3,
	0xFF,0xFF,0x7F,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
	0xF1,0xFF,0xF9,0xFF,0xF8,0xFF,0xF9,0xFE,0xF1,0xFE,0xF8,0xFF,0xF0,0xFF,0xF0,0xFF,
	0x87,0xF8,0x7F,0xFF,0x3F,0xFF,0x00,0xFF,0x9F,0x60,0x12,0xE0,0x38,0xC0,0x3C,0xC0,
	0x07,0x00,0x00,0xFF,0xFF,0xFF,0x30,0xCF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x80,0x00,0x00,0x80,0xA0,0xC0,0x10,0xE0,0x50,0x20,0x38,0x00,0x30,0x00,0x20,0x00,
	0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0xFE,0xFF,0xFF,0xFF,0xFF,
	0x9E,0x9E,0x8E,0x8E,0x4E,0x4E,0x0E,0x0E,0x66,0x66,0x20,0x20,0xFF,0xFF,0xFF,0xFF,
	0x6C,0x6C,0x2C,0x2C,0xAC,0xAC,0x8C,0x8C,0xCC,0xCC,0x48,0x48,0xFF,0xFF,0xFF,0xFF,
	0x99,0x99,0x99,0x99,0x98,0x98,0x99,0x99,0x99,0x99,0x31,0x31,0xFF,0xFF,0xFF,0xFF,
	0x33,0x33,0x32,0x32,0x70,0x70,0x32,0x32,0x33,0x33,0x00,0x00,0xFF,0xFF,0xFF,0xFF,
	0x73,0x73,0xF1,0xF1,0xE9,0xE9,0xE1,0xE1,0x6C,0x6C,0x44,0x44,0xFF,0xFF,0xFF,0xFF,
	0xCB,0xCB,0xCF,0xCF,0xE7,0xE7,0xF3,0xF3,0xD3,0xD3,0x47,0x47,0xFF,0xFF,0xFF,0xFF,
	0xF8,0xFF,0xF8,0xFF,0xF0,0xFF,0xC0,0xFF,0x80,0xFF,0x00,0xFF,0xF8,0xFF,0xF8,0xFF,
	0x0E,0xF0,0x0C,0xF0,0x87,0xF8,0x07,0xF8,0x05,0xF8,0x1F,0xE0,0x0B,0xF0,0x0F,0xF0,
	0x00,0x00,0x00,0x00,0x80,0x00,0x80,0x00,0x00,0x00,0x60,0x00,0x60,0x00,0xE0,0x00,
	0x0E,0x00,0x0F,0x00,0x1F,0x00,0x37,0x00,0x2F,0x00,0x0F,0x00,0x0F,0x00,0x1F,0x00,
	0x00,0x00,0x01,0x00,0x83,0x00,0xE7,0x00,0xFD,0x00,0xFF,0x00,0xFF,0x00,0xE7,0x00,
	0x0F,0x00,0x8F,0x00,0xDF,0x00,0xFF,0x00,0xBF,0x00,0xF9,0x06,0x5A,0xA5,0x98,0x67,
	0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x1F,0xFF,
	0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF8,0xFF,0xF8,0xFC,0xF0,0xFC,
	0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF2,0xFC,0xE0,0xF0,0x20,0xE0,0x80,0x00,0x00,0x00,
	0xF1,0xF8,0xC9,0xF0,0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,
	0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x7F,0xFF,0xFF,0x7F,0xFF,0xFF,0xFF,0xFF,0x7F,0xFF,
	0xFC,0xFF,0xFC,0xFF,0xFC,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
	0x1F,0xE0,0x0E,0xF0,0x07,0xF8,0x07,0xF8,0x80,0xFF,0xE0,0xFF,0xF0,0xFF,0xF1,0xFF,
	0xF0,0x00,0x48,0x00,0xEF,0x00,0xF9,0x06,0xA1,0x5E,0x00,0xFF,0x00,0xFF,0x24,0xFF,
	0x1F,0x00,0x3F,0x00,0xEE,0x11,0xCF,0x30,0x8B,0x74,0x00,0xFF,0x00,0xFF,0x80,0xFF,
	0xBF,0x40,0x83,0x7C,0xD0,0x2F,0x90,0x6F,0x00,0xFF,0x08,0xFF,0x1C,0xFF,0x77,0xFF,
	0x90,0x6F,0x20,0xDF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x04,0xFF,0x4E,0xFF,0xFF,0xFF,
	0x9F,0x60,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x8F,0x70,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0xBF,0x7F,0xBF,0x7F,0xBF,0x7F,0x7F,0x3F,0x3F,0x7F,0x7F,0x3F,0x3F,0x3F,0x1F,0x3F,
	0x3D,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
	0xFE,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
	0x67,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
	0xFF,0xFF,0xFC,0xFF,0xF8,0xFF,0xF8,0xFF,0xF0,0xFF,0xF8,0xFF,0xF8,0xFF,0x80,0xFF
);

TILEMAP (
	about_map,
	0x14, 0x12,
	0x00, 0x00, 0x00, 0x01, 0x00, 0x02, 0x03, 0x04, 0x05, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07,
	0x08, 0x09, 0x0A, 0x0B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x0D, 0x0E, 0x0F, 0x10, 0x00, 0x00,
	0x00, 0x00, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x00, 0x00, 0x00, 0x00, 0x17, 0x18, 0x19, 0x00,
	0x1A, 0x1B, 0x1C, 0x00, 0x1D, 0x1E, 0x1F, 0x20, 0x21, 0x22, 0x23, 0x24, 0x00, 0x00, 0x00, 0x00,
	0x25, 0x26, 0x27, 0x28, 0x29, 0x2A, 0x2B, 0x00, 0x2C, 0x2D, 0x2E, 0x2F, 0x30, 0x31, 0x32, 0x33,
	0x00, 0x00, 0x00, 0x00, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x3A, 0x00, 0x3B, 0x3C, 0x3D, 0x3E,
	0x3F, 0x40, 0x41, 0x42, 0x00, 0x00, 0x00, 0x00, 0x43, 0x44, 0x45, 0x00, 0x46, 0x47, 0x48, 0x00,
	0x49, 0x4A, 0x4B, 0x4C, 0x4D, 0x00, 0x00, 0x4E, 0x00, 0x00, 0x00, 0x00, 0x4F, 0x50, 0x51, 0x52,
	0x53, 0x54, 0x55, 0x00, 0x56, 0x57, 0x58, 0x59, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x5A, 0x5B, 0x5C, 0x5D, 0x5E, 0x5F, 0x60, 0x61, 0x00, 0x62, 0x63, 0x64, 0x65, 0x66, 0x67, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x68, 0x69, 0x6A, 0x6B, 0x6C, 0x6D, 0x6E, 0x6F, 0x70, 0x71, 0x72, 0x73,
	0x74, 0x75, 0x76, 0x00, 0x00, 0x00, 0x00, 0x00, 0x77, 0x78, 0x79, 0x7A, 0x7B, 0x78, 0x78, 0x7C,
	0x7D, 0x7E, 0x7F, 0x80, 0x81, 0x82, 0x83, 0x84, 0x00, 0x00, 0x00, 0x00, 0x85, 0x78, 0x86, 0x87,
	0x88, 0x78, 0x78, 0x78, 0x89, 0x8A, 0x8B, 0x00, 0x8C, 0x8D, 0x00, 0x00, 0x00, 0x00, 0x00, 0x8E,
	0x8F, 0x78, 0x90, 0x91, 0x78, 0x78, 0x78, 0x78, 0x78, 0x92, 0x93, 0x00, 0x00, 0x94, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x95, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x96, 0x97, 0x98,
	0x99, 0x00, 0x00, 0x00, 0x00, 0x00, 0x9A, 0x9B, 0x78, 0x78, 0x9C, 0x9D, 0x9E, 0x9F, 0xA0, 0xA1,
	0xA2, 0xA3, 0xA4, 0xA5, 0xA6, 0xA7, 0x00, 0x00, 0xA8, 0xA9, 0xAA, 0x78, 0x78, 0x78, 0xAB, 0xAC,
	0xAD, 0xAE, 0xAF, 0xB0, 0xB1, 0xB2, 0xB3, 0xB4, 0xB5, 0xB6, 0x00, 0x00, 0x78, 0x78, 0x78, 0x78,
	0x78, 0x78, 0xB7, 0xB8, 0xB9, 0xBA, 0xBB, 0xBC, 0xBD, 0x78, 0xBE, 0xBF, 0xC0, 0xC1, 0xC2, 0xC3,
	0x78, 0xC4, 0xC5, 0xC6, 0xC7, 0xC8, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0xC9, 0xCA,
	0xCB, 0xCC, 0xCD, 0xCE, 0xCF, 0xD0, 0xD1, 0x00, 0x00, 0xD2, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78,
	0x78, 0x78, 0x78, 0x78, 0xD3, 0xD4, 0xD5, 0xD6
);



void show_about()
{
	
	struct loaded_tileset* loaded_tiles;
	HIDE_BKG;

	loaded_tiles = load_tileset(&about_tileset);
	place_tiles(loaded_tiles, &about_map, 0, 0);

	SHOW_BKG;
	while (!(joypad()&J_START));
	while (joypad()&J_START);
}