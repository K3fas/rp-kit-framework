#include "include.h"

// format: 1-bit pixel graphics
// image width: 2048 pixels
// image height: 8 lines
// image pitch: 256 bytes
const u8 FontThin8x8[2048] __attribute__ ((aligned(4))) = {
	0x00, 0xAA, 0x00, 0xFF, 0x6C, 0x10, 0x10, 0x10, 0x3C, 0x3C, 0x30, 0x38, 0x10, 0x38, 0x44, 0x44, 
	0x00, 0x00, 0x10, 0x10, 0x00, 0x00, 0x10, 0x10, 0x00, 0x00, 0x10, 0x10, 0x00, 0x00, 0x10, 0x10, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3C, 
	0x00, 0x0F, 0xF0, 0xFF, 0x00, 0x0F, 0xF0, 0xFF, 0x00, 0x0F, 0xF0, 0xFF, 0x00, 0x0F, 0xF0, 0xFF, 
	0xFF, 0xFF, 0xEF, 0xEF, 0xFF, 0xFF, 0xEF, 0xEF, 0xFF, 0xFF, 0xEF, 0xEF, 0xFF, 0xFF, 0xEF, 0xEF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC3, 
	0x00, 0x55, 0x18, 0xE7, 0xFE, 0x38, 0x38, 0x38, 0x42, 0x7E, 0x28, 0x38, 0x54, 0x7C, 0x28, 0x38, 
	0x00, 0x00, 0x10, 0x10, 0x00, 0x00, 0x10, 0x10, 0x00, 0x00, 0x10, 0x10, 0x00, 0x00, 0x10, 0x10, 
	0x00, 0x10, 0x24, 0x24, 0x08, 0x62, 0x10, 0x08, 0x04, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x3C, 0x18, 0x3C, 0x3C, 0x08, 0x7E, 0x3C, 0x7E, 0x3C, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3C, 
	0x3C, 0x3C, 0x7C, 0x3C, 0x78, 0x7E, 0x7E, 0x3C, 0x42, 0x3E, 0x02, 0x44, 0x40, 0x42, 0x42, 0x3C, 
	0x7C, 0x3C, 0x7C, 0x3C, 0xFE, 0x42, 0x42, 0x42, 0x42, 0x82, 0x7E, 0x0E, 0x00, 0x70, 0x10, 0x00, 
	0x1C, 0x00, 0x20, 0x00, 0x04, 0x00, 0x0C, 0x00, 0x40, 0x10, 0x04, 0x20, 0x10, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x08, 0x70, 0x14, 0x42, 
	0x00, 0x0F, 0xF0, 0xFF, 0x00, 0x0F, 0xF0, 0xFF, 0x00, 0x0F, 0xF0, 0xFF, 0x00, 0x0F, 0xF0, 0xFF, 
	0xFF, 0xFF, 0xEF, 0xEF, 0xFF, 0xFF, 0xEF, 0xEF, 0xFF, 0xFF, 0xEF, 0xEF, 0xFF, 0xFF, 0xEF, 0xEF, 
	0xFF, 0xEF, 0xDB, 0xDB, 0xF7, 0x9D, 0xEF, 0xF7, 0xFB, 0xDF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xC3, 0xE7, 0xC3, 0xC3, 0xF7, 0x81, 0xC3, 0x81, 0xC3, 0xC3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC3, 
	0xC3, 0xC3, 0x83, 0xC3, 0x87, 0x81, 0x81, 0xC3, 0xBD, 0xC1, 0xFD, 0xBB, 0xBF, 0xBD, 0xBD, 0xC3, 
	0x83, 0xC3, 0x83, 0xC3, 0x01, 0xBD, 0xBD, 0xBD, 0xBD, 0x7D, 0x81, 0xF1, 0xFF, 0x8F, 0xEF, 0xFF, 
	0xE3, 0xFF, 0xDF, 0xFF, 0xFB, 0xFF, 0xF3, 0xFF, 0xBF, 0xEF, 0xFB, 0xDF, 0xEF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xEF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF1, 0xF7, 0x8F, 0xEB, 0xBD, 
	0x00, 0xAA, 0x24, 0xDB, 0xFE, 0x7C, 0x54, 0x7C, 0xA5, 0xDB, 0x24, 0x10, 0x38, 0xD6, 0x7C, 0xFE, 
	0x00, 0x00, 0x10, 0x10, 0x00, 0x00, 0x10, 0x10, 0x00, 0x00, 0x10, 0x10, 0x00, 0x00, 0x10, 0x10, 
	0x00, 0x10, 0x24, 0x7E, 0x3E, 0x64, 0x28, 0x10, 0x08, 0x10, 0x14, 0x08, 0x00, 0x00, 0x00, 0x02, 
	0x46, 0x28, 0x42, 0x42, 0x18, 0x40, 0x40, 0x02, 0x42, 0x42, 0x00, 0x10, 0x04, 0x00, 0x10, 0x42, 
	0x4A, 0x42, 0x42, 0x42, 0x44, 0x40, 0x40, 0x42, 0x42, 0x08, 0x02, 0x48, 0x40, 0x66, 0x62, 0x42, 
	0x42, 0x42, 0x42, 0x40, 0x10, 0x42, 0x42, 0x42, 0x24, 0x44, 0x04, 0x08, 0x40, 0x10, 0x38, 0x00, 
	0x22, 0x38, 0x20, 0x1C, 0x04, 0x38, 0x10, 0x3C, 0x40, 0x00, 0x00, 0x28, 0x10, 0x68, 0x78, 0x38, 
	0x78, 0x3C, 0x1C, 0x38, 0x38, 0x44, 0x44, 0x44, 0x44, 0x44, 0x7C, 0x08, 0x08, 0x10, 0x28, 0x99, 
	0x00, 0x0F, 0xF0, 0xFF, 0x00, 0x0F, 0xF0, 0xFF, 0x00, 0x0F, 0xF0, 0xFF, 0x00, 0x0F, 0xF0, 0xFF, 
	0xFF, 0xFF, 0xEF, 0xEF, 0xFF, 0xFF, 0xEF, 0xEF, 0xFF, 0xFF, 0xEF, 0xEF, 0xFF, 0xFF, 0xEF, 0xEF, 
	0xFF, 0xEF, 0xDB, 0x81, 0xC1, 0x9B, 0xD7, 0xEF, 0xF7, 0xEF, 0xEB, 0xF7, 0xFF, 0xFF, 0xFF, 0xFD, 
	0xB9, 0xD7, 0xBD, 0xBD, 0xE7, 0xBF, 0xBF, 0xFD, 0xBD, 0xBD, 0xFF, 0xEF, 0xFB, 0xFF, 0xEF, 0xBD, 
	0xB5, 0xBD, 0xBD, 0xBD, 0xBB, 0xBF, 0xBF, 0xBD, 0xBD, 0xF7, 0xFD, 0xB7, 0xBF, 0x99, 0x9D, 0xBD, 
	0xBD, 0xBD, 0xBD, 0xBF, 0xEF, 0xBD, 0xBD, 0xBD, 0xDB, 0xBB, 0xFB, 0xF7, 0xBF, 0xEF, 0xC7, 0xFF, 
	0xDD, 0xC7, 0xDF, 0xE3, 0xFB, 0xC7, 0xEF, 0xC3, 0xBF, 0xFF, 0xFF, 0xD7, 0xEF, 0x97, 0x87, 0xC7, 
	0x87, 0xC3, 0xE3, 0xC7, 0xC7, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0x83, 0xF7, 0xF7, 0xEF, 0xD7, 0x66, 
	0x00, 0x55, 0x42, 0xBD, 0xFE, 0xFE, 0xFE, 0xFE, 0x81, 0xFF, 0x24, 0x7C, 0xEE, 0xD6, 0xD6, 0x54, 
	0x18, 0xF0, 0x10, 0xF0, 0x1F, 0xFF, 0x1F, 0xFF, 0x10, 0xF0, 0x10, 0xF0, 0x1F, 0xFF, 0x1F, 0xFF, 
	0x00, 0x10, 0x00, 0x24, 0x28, 0x08, 0x10, 0x00, 0x08, 0x10, 0x08, 0x08, 0x00, 0x00, 0x00, 0x04, 
	0x4A, 0x08, 0x02, 0x0C, 0x28, 0x7C, 0x7C, 0x04, 0x3C, 0x42, 0x10, 0x00, 0x08, 0x3E, 0x08, 0x04, 
	0x56, 0x42, 0x7C, 0x40, 0x42, 0x7C, 0x7C, 0x40, 0x7E, 0x08, 0x02, 0x70, 0x40, 0x5A, 0x52, 0x42, 
	0x42, 0x42, 0x42, 0x3C, 0x10, 0x42, 0x42, 0x42, 0x18, 0x28, 0x08, 0x08, 0x20, 0x10, 0x54, 0x00, 
	0x78, 0x04, 0x3C, 0x20, 0x3C, 0x44, 0x18, 0x44, 0x78, 0x30, 0x04, 0x30, 0x10, 0x54, 0x44, 0x44, 
	0x44, 0x44, 0x20, 0x40, 0x10, 0x44, 0x44, 0x54, 0x28, 0x44, 0x08, 0x30, 0x08, 0x0C, 0x00, 0xA1, 
	0x00, 0x0F, 0xF0, 0xFF, 0x00, 0x0F, 0xF0, 0xFF, 0x00, 0x0F, 0xF0, 0xFF, 0x00, 0x0F, 0xF0, 0xFF, 
	0xE7, 0x0F, 0xEF, 0x0F, 0xE0, 0x00, 0xE0, 0x00, 0xEF, 0x0F, 0xEF, 0x0F, 0xE0, 0x00, 0xE0, 0x00, 
	0xFF, 0xEF, 0xFF, 0xDB, 0xD7, 0xF7, 0xEF, 0xFF, 0xF7, 0xEF, 0xF7, 0xF7, 0xFF, 0xFF, 0xFF, 0xFB, 
	0xB5, 0xF7, 0xFD, 0xF3, 0xD7, 0x83, 0x83, 0xFB, 0xC3, 0xBD, 0xEF, 0xFF, 0xF7, 0xC1, 0xF7, 0xFB, 
	0xA9, 0xBD, 0x83, 0xBF, 0xBD, 0x83, 0x83, 0xBF, 0x81, 0xF7, 0xFD, 0x8F, 0xBF, 0xA5, 0xAD, 0xBD, 
	0xBD, 0xBD, 0xBD, 0xC3, 0xEF, 0xBD, 0xBD, 0xBD, 0xE7, 0xD7, 0xF7, 0xF7, 0xDF, 0xEF, 0xAB, 0xFF, 
	0x87, 0xFB, 0xC3, 0xDF, 0xC3, 0xBB, 0xE7, 0xBB, 0x87, 0xCF, 0xFB, 0xCF, 0xEF, 0xAB, 0xBB, 0xBB, 
	0xBB, 0xBB, 0xDF, 0xBF, 0xEF, 0xBB, 0xBB, 0xAB, 0xD7, 0xBB, 0xF7, 0xCF, 0xF7, 0xF3, 0xFF, 0x5E, 
	0x00, 0xAA, 0x42, 0xBD, 0x7C, 0x7C, 0x54, 0xFE, 0xA5, 0xFF, 0x28, 0x10, 0x38, 0xFE, 0xFE, 0x7C, 
	0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
	0x00, 0x10, 0x00, 0x24, 0x3E, 0x10, 0x2A, 0x00, 0x08, 0x10, 0x3E, 0x3E, 0x00, 0x3E, 0x00, 0x08, 
	0x52, 0x08, 0x3C, 0x02, 0x48, 0x02, 0x42, 0x08, 0x42, 0x3E, 0x00, 0x00, 0x10, 0x00, 0x04, 0x08, 
	0x5E, 0x7E, 0x42, 0x40, 0x42, 0x40, 0x40, 0x4E, 0x42, 0x08, 0x42, 0x48, 0x40, 0x42, 0x4A, 0x42, 
	0x7C, 0x52, 0x7C, 0x02, 0x10, 0x42, 0x42, 0x42, 0x18, 0x10, 0x10, 0x08, 0x10, 0x10, 0x10, 0x00, 
	0x20, 0x3C, 0x22, 0x20, 0x44, 0x78, 0x10, 0x44, 0x44, 0x10, 0x04, 0x30, 0x10, 0x54, 0x44, 0x44, 
	0x44, 0x44, 0x20, 0x38, 0x10, 0x44, 0x28, 0x54, 0x10, 0x44, 0x10, 0x08, 0x08, 0x10, 0x00, 0xA1, 
	0x00, 0x00, 0x00, 0x00, 0x0F, 0x0F, 0x0F, 0x0F, 0xF0, 0xF0, 0xF0, 0xF0, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xE7, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xEF, 0xEF, 0xEF, 0xEF, 0xEF, 0xEF, 0xEF, 0xEF, 
	0xFF, 0xEF, 0xFF, 0xDB, 0xC1, 0xEF, 0xD5, 0xFF, 0xF7, 0xEF, 0xC1, 0xC1, 0xFF, 0xC1, 0xFF, 0xF7, 
	0xAD, 0xF7, 0xC3, 0xFD, 0xB7, 0xFD, 0xBD, 0xF7, 0xBD, 0xC1, 0xFF, 0xFF, 0xEF, 0xFF, 0xFB, 0xF7, 
	0xA1, 0x81, 0xBD, 0xBF, 0xBD, 0xBF, 0xBF, 0xB1, 0xBD, 0xF7, 0xBD, 0xB7, 0xBF, 0xBD, 0xB5, 0xBD, 
	0x83, 0xAD, 0x83, 0xFD, 0xEF, 0xBD, 0xBD, 0xBD, 0xE7, 0xEF, 0xEF, 0xF7, 0xEF, 0xEF, 0xEF, 0xFF, 
	0xDF, 0xC3, 0xDD, 0xDF, 0xBB, 0x87, 0xEF, 0xBB, 0xBB, 0xEF, 0xFB, 0xCF, 0xEF, 0xAB, 0xBB, 0xBB, 
	0xBB, 0xBB, 0xDF, 0xC7, 0xEF, 0xBB, 0xD7, 0xAB, 0xEF, 0xBB, 0xEF, 0xF7, 0xF7, 0xEF, 0xFF, 0x5E, 
	0x00, 0x55, 0x24, 0xDB, 0x38, 0x38, 0x10, 0x10, 0x99, 0xDB, 0xE0, 0x28, 0x54, 0xFE, 0xC6, 0x7C, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
	0x00, 0x00, 0x00, 0x7E, 0x0A, 0x26, 0x44, 0x00, 0x08, 0x10, 0x08, 0x08, 0x08, 0x00, 0x18, 0x10, 
	0x62, 0x08, 0x40, 0x42, 0x7E, 0x42, 0x42, 0x10, 0x42, 0x02, 0x00, 0x10, 0x08, 0x3E, 0x08, 0x00, 
	0x40, 0x42, 0x42, 0x42, 0x44, 0x40, 0x40, 0x42, 0x42, 0x08, 0x42, 0x44, 0x40, 0x42, 0x46, 0x42, 
	0x40, 0x4A, 0x44, 0x42, 0x10, 0x42, 0x24, 0x5A, 0x24, 0x10, 0x20, 0x08, 0x08, 0x10, 0x10, 0x00, 
	0x20, 0x44, 0x22, 0x20, 0x44, 0x40, 0x10, 0x3C, 0x44, 0x10, 0x04, 0x28, 0x10, 0x54, 0x44, 0x44, 
	0x78, 0x3C, 0x20, 0x04, 0x10, 0x44, 0x28, 0x54, 0x28, 0x3C, 0x20, 0x08, 0x08, 0x10, 0x00, 0x99, 
	0x00, 0x00, 0x00, 0x00, 0x0F, 0x0F, 0x0F, 0x0F, 0xF0, 0xF0, 0xF0, 0xF0, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xEF, 0xEF, 0xEF, 0xEF, 0xEF, 0xEF, 0xEF, 0xEF, 
	0xFF, 0xFF, 0xFF, 0x81, 0xF5, 0xD9, 0xBB, 0xFF, 0xF7, 0xEF, 0xF7, 0xF7, 0xF7, 0xFF, 0xE7, 0xEF, 
	0x9D, 0xF7, 0xBF, 0xBD, 0x81, 0xBD, 0xBD, 0xEF, 0xBD, 0xFD, 0xFF, 0xEF, 0xF7, 0xC1, 0xF7, 0xFF, 
	0xBF, 0xBD, 0xBD, 0xBD, 0xBB, 0xBF, 0xBF, 0xBD, 0xBD, 0xF7, 0xBD, 0xBB, 0xBF, 0xBD, 0xB9, 0xBD, 
	0xBF, 0xB5, 0xBB, 0xBD, 0xEF, 0xBD, 0xDB, 0xA5, 0xDB, 0xEF, 0xDF, 0xF7, 0xF7, 0xEF, 0xEF, 0xFF, 
	0xDF, 0xBB, 0xDD, 0xDF, 0xBB, 0xBF, 0xEF, 0xC3, 0xBB, 0xEF, 0xFB, 0xD7, 0xEF, 0xAB, 0xBB, 0xBB, 
	0x87, 0xC3, 0xDF, 0xFB, 0xEF, 0xBB, 0xD7, 0xAB, 0xD7, 0xC3, 0xDF, 0xF7, 0xF7, 0xEF, 0xFF, 0x66, 
	0x00, 0xAA, 0x18, 0xE7, 0x10, 0x10, 0x38, 0x38, 0x42, 0x66, 0xC0, 0x44, 0x10, 0xAA, 0x6C, 0xAA, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
	0x00, 0x10, 0x00, 0x24, 0x3E, 0x46, 0x3A, 0x00, 0x04, 0x20, 0x14, 0x08, 0x08, 0x00, 0x18, 0x20, 
	0x3C, 0x3E, 0x7E, 0x3C, 0x08, 0x3C, 0x3C, 0x10, 0x3C, 0x3C, 0x10, 0x10, 0x04, 0x00, 0x10, 0x08, 
	0x3C, 0x42, 0x7C, 0x3C, 0x78, 0x7E, 0x40, 0x3C, 0x42, 0x3E, 0x3C, 0x42, 0x7E, 0x42, 0x42, 0x3C, 
	0x40, 0x3C, 0x42, 0x3C, 0x10, 0x3C, 0x18, 0x24, 0x42, 0x10, 0x7E, 0x0E, 0x04, 0x70, 0x10, 0x00, 
	0x7E, 0x3C, 0x3C, 0x1C, 0x3C, 0x3C, 0x10, 0x04, 0x44, 0x38, 0x24, 0x24, 0x0C, 0x54, 0x44, 0x38, 
	0x40, 0x04, 0x20, 0x78, 0x0C, 0x38, 0x10, 0x28, 0x44, 0x04, 0x7C, 0x0E, 0x08, 0x70, 0x00, 0x42, 
	0x00, 0x00, 0x00, 0x00, 0x0F, 0x0F, 0x0F, 0x0F, 0xF0, 0xF0, 0xF0, 0xF0, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xEF, 0xEF, 0xEF, 0xEF, 0xEF, 0xEF, 0xEF, 0xEF, 
	0xFF, 0xEF, 0xFF, 0xDB, 0xC1, 0xB9, 0xC5, 0xFF, 0xFB, 0xDF, 0xEB, 0xF7, 0xF7, 0xFF, 0xE7, 0xDF, 
	0xC3, 0xC1, 0x81, 0xC3, 0xF7, 0xC3, 0xC3, 0xEF, 0xC3, 0xC3, 0xEF, 0xEF, 0xFB, 0xFF, 0xEF, 0xF7, 
	0xC3, 0xBD, 0x83, 0xC3, 0x87, 0x81, 0xBF, 0xC3, 0xBD, 0xC1, 0xC3, 0xBD, 0x81, 0xBD, 0xBD, 0xC3, 
	0xBF, 0xC3, 0xBD, 0xC3, 0xEF, 0xC3, 0xE7, 0xDB, 0xBD, 0xEF, 0x81, 0xF1, 0xFB, 0x8F, 0xEF, 0xFF, 
	0x81, 0xC3, 0xC3, 0xE3, 0xC3, 0xC3, 0xEF, 0xFB, 0xBB, 0xC7, 0xDB, 0xDB, 0xF3, 0xAB, 0xBB, 0xC7, 
	0xBF, 0xFB, 0xDF, 0x87, 0xF3, 0xC7, 0xEF, 0xD7, 0xBB, 0xFB, 0x83, 0xF1, 0xF7, 0x8F, 0xFF, 0xBD, 
	0x00, 0x55, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x3C, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
	0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x40, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3C, 
	0x00, 0x00, 0x00, 0x00, 0x0F, 0x0F, 0x0F, 0x0F, 0xF0, 0xF0, 0xF0, 0xF0, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xEF, 0xEF, 0xEF, 0xEF, 0xEF, 0xEF, 0xEF, 0xEF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xF7, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xEF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xDF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC7, 0xFF, 0xFF, 0xE7, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xBF, 0xF9, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC7, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC3, 
};