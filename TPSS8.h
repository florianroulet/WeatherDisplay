

/*
 *
 * TPSS8
 *
 * created with FontCreator
 * written by F. Maximilian Thiele
 *
 * http://www.apetech.de/fontCreator
 * me@apetech.de
 *
 * File Name           : TPSS8.c
 * Date                : 04.07.2015
 * Font size in bytes  : 7078
 * Font width          : 10
 * Font height         : 16
 * Font first char     : 32
 * Font last char      : 128
 * Font used chars     : 96
 *
 * The font data are defined as
 *
 * struct _FONT_ {
 *     uint16_t   font_Size_in_Bytes_over_all_included_Size_it_self;
 *     uint8_t    font_Width_in_Pixel_for_fixed_drawing;
 *     uint8_t    font_Height_in_Pixel_for_all_characters;
 *     unit8_t    font_First_Char;
 *     uint8_t    font_Char_Count;
 *
 *     uint8_t    font_Char_Widths[font_Last_Char - font_First_Char +1];
 *                  // for each character the separate width in pixels,
 *                  // characters < 128 have an implicit virtual right empty row
 *
 *     uint8_t    font_data[];
 *                  // bit field of all characters
 */

#include <inttypes.h>
#if defined (ESP8266)
   #include <pgmspace.h>
#else
   #include <avr/pgmspace.h>
#endif

#ifndef TPSS8_H
#define TPSS8_H

#define TPSS8_WIDTH 10
#define TPSS8_HEIGHT 16

static const uint8_t TPSS8[] PROGMEM = {
    0x1B, 0xA6, // size
    0x0A, // width
    0x10, // height
    0x20, // first char
    0x60, // char count
    
    // char widths
    0x00, 0x01, 0x03, 0x05, 0x05, 0x05, 0x07, 0x01, 0x05, 0x05, 
    0x05, 0x05, 0x02, 0x05, 0x01, 0x05, 0x05, 0x05, 0x05, 0x05, 
    0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x01, 0x02, 0x05, 0x05, 
    0x05, 0x05, 0x09, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 
    0x05, 0x01, 0x05, 0x05, 0x05, 0x07, 0x05, 0x05, 0x05, 0x05, 
    0x05, 0x05, 0x05, 0x05, 0x05, 0x07, 0x05, 0x05, 0x05, 0x03, 
    0x05, 0x03, 0x03, 0x06, 0x02, 0x05, 0x05, 0x05, 0x05, 0x05, 
    0x05, 0x05, 0x05, 0x01, 0x01, 0x05, 0x01, 0x07, 0x05, 0x05, 
    0x05, 0x06, 0x04, 0x05, 0x04, 0x05, 0x05, 0x07, 0x05, 0x05, 
    0x05, 0x06, 0x01, 0x06, 0x05, 0x03, 
    
    // font data
    0xF8, 0x0D, // 33
    0x18, 0x00, 0x18, 0x00, 0x00, 0x00, // 34
    0x00, 0x80, 0x00, 0x80, 0x00, 0x05, 0x0F, 0x05, 0x0F, 0x05, // 35
    0x30, 0x48, 0xF8, 0x48, 0x90, 0x06, 0x08, 0x0F, 0x08, 0x07, // 36
    0x18, 0x00, 0xC0, 0x30, 0x08, 0x08, 0x06, 0x01, 0x00, 0x0C, // 37
    0xB0, 0x48, 0x48, 0x48, 0xB0, 0x00, 0x00, 0x07, 0x08, 0x08, 0x08, 0x07, 0x08, 0x04, // 38
    0x18, 0x00, // 39
    0x80, 0x60, 0x10, 0x08, 0x08, 0x00, 0x03, 0x04, 0x08, 0x08, // 40
    0x08, 0x08, 0x10, 0x60, 0x80, 0x08, 0x08, 0x04, 0x03, 0x00, // 41
    0x20, 0x40, 0xF0, 0x40, 0x20, 0x02, 0x01, 0x07, 0x01, 0x02, // 42
    0x00, 0x00, 0xC0, 0x00, 0x00, 0x01, 0x01, 0x07, 0x01, 0x01, // 43
    0x00, 0x00, 0x10, 0x08, // 44
    0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, // 45
    0x00, 0x08, // 46
    0x00, 0x00, 0xC0, 0x30, 0x08, 0x08, 0x06, 0x01, 0x00, 0x00, // 47
    0xF0, 0x08, 0x08, 0x08, 0xF0, 0x07, 0x08, 0x08, 0x08, 0x07, // 48
    0x20, 0x10, 0xF8, 0x00, 0x00, 0x08, 0x08, 0x0F, 0x08, 0x08, // 49
    0x30, 0x08, 0x08, 0x88, 0x70, 0x0C, 0x0A, 0x09, 0x08, 0x08, // 50
    0x10, 0x08, 0x48, 0x48, 0xB0, 0x04, 0x08, 0x08, 0x08, 0x07, // 51
    0x70, 0x40, 0x40, 0x40, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x0F, // 52
    0x78, 0x48, 0x48, 0x48, 0xC8, 0x04, 0x08, 0x08, 0x08, 0x07, // 53
    0xF0, 0x48, 0x48, 0x48, 0x90, 0x07, 0x08, 0x08, 0x08, 0x07, // 54
    0x08, 0x88, 0x48, 0x28, 0x18, 0x00, 0x0F, 0x00, 0x00, 0x00, // 55
    0xB0, 0x48, 0x48, 0x48, 0xB0, 0x07, 0x08, 0x08, 0x08, 0x07, // 56
    0x70, 0x88, 0x88, 0x88, 0xF0, 0x04, 0x08, 0x08, 0x08, 0x07, // 57
    0x00, 0x09, // 58
    0x00, 0x00, 0x10, 0x09, // 59
    0x80, 0x40, 0x20, 0x10, 0x08, 0x00, 0x01, 0x02, 0x04, 0x08, // 60
    0x80, 0x80, 0x80, 0x80, 0x80, 0x02, 0x02, 0x02, 0x02, 0x02, // 61
    0x08, 0x10, 0x20, 0x40, 0x80, 0x08, 0x04, 0x02, 0x01, 0x00, // 62
    0x10, 0x08, 0x88, 0x48, 0x30, 0x00, 0x00, 0x0D, 0x00, 0x00, // 63
    0xE0, 0x10, 0x90, 0x50, 0x50, 0x90, 0x10, 0xE0, 0x00, 0x07, 0x08, 0x09, 0x0A, 0x0A, 0x09, 0x0A, 0x09, 0x04, // 64
    0xF0, 0x48, 0x48, 0x48, 0xF0, 0x0F, 0x00, 0x00, 0x00, 0x0F, // 65
    0xF8, 0x48, 0x48, 0x48, 0xB0, 0x0F, 0x08, 0x08, 0x08, 0x07, // 66
    0xF0, 0x08, 0x08, 0x08, 0x10, 0x07, 0x08, 0x08, 0x08, 0x04, // 67
    0xF8, 0x08, 0x08, 0x08, 0xF0, 0x0F, 0x08, 0x08, 0x08, 0x07, // 68
    0xF8, 0x48, 0x48, 0x48, 0x08, 0x0F, 0x08, 0x08, 0x08, 0x08, // 69
    0xF8, 0x48, 0x48, 0x48, 0x08, 0x0F, 0x00, 0x00, 0x00, 0x00, // 70
    0xF0, 0x08, 0x48, 0x48, 0xD0, 0x07, 0x08, 0x08, 0x08, 0x07, // 71
    0xF8, 0x40, 0x40, 0x40, 0xF8, 0x0F, 0x00, 0x00, 0x00, 0x0F, // 72
    0xF8, 0x0F, // 73
    0x00, 0x00, 0x00, 0x00, 0xF8, 0x04, 0x08, 0x08, 0x08, 0x07, // 74
    0xF8, 0x80, 0x40, 0x20, 0x18, 0x0F, 0x00, 0x01, 0x02, 0x0C, // 75
    0xF8, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x08, 0x08, 0x08, 0x08, // 76
    0xF8, 0x10, 0x20, 0x40, 0x20, 0x10, 0xF8, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, // 77
    0xF8, 0x10, 0x20, 0x40, 0xF8, 0x0F, 0x00, 0x00, 0x00, 0x0F, // 78
    0xF0, 0x08, 0x08, 0x08, 0xF0, 0x07, 0x08, 0x08, 0x08, 0x07, // 79
    0xF8, 0x48, 0x48, 0x48, 0x30, 0x0F, 0x00, 0x00, 0x00, 0x00, // 80
    0xF0, 0x08, 0x08, 0x08, 0xF0, 0x07, 0x08, 0x0F, 0x08, 0x07, // 81
    0xF8, 0x48, 0x48, 0x48, 0xB0, 0x0F, 0x00, 0x00, 0x00, 0x0F, // 82
    0x30, 0x48, 0x48, 0x48, 0x90, 0x06, 0x08, 0x08, 0x08, 0x07, // 83
    0x08, 0x08, 0xF8, 0x08, 0x08, 0x00, 0x00, 0x0F, 0x00, 0x00, // 84
    0xF8, 0x00, 0x00, 0x00, 0xF8, 0x07, 0x08, 0x08, 0x08, 0x07, // 85
    0x38, 0xC0, 0x00, 0xC0, 0x38, 0x00, 0x03, 0x0C, 0x03, 0x00, // 86
    0x38, 0xC0, 0x00, 0xC0, 0x00, 0xC0, 0x38, 0x00, 0x01, 0x0E, 0x01, 0x0E, 0x01, 0x00, // 87
    0x18, 0x20, 0xC0, 0x20, 0x18, 0x0E, 0x01, 0x00, 0x01, 0x0E, // 88
    0x18, 0x20, 0xC0, 0x20, 0x18, 0x00, 0x00, 0x0F, 0x00, 0x00, // 89
    0x08, 0x08, 0x88, 0x48, 0x38, 0x0E, 0x09, 0x08, 0x08, 0x08, // 90
    0xF8, 0x08, 0x08, 0x0F, 0x08, 0x08, // 91
    0x20, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x06, 0x08, // 92
    0x08, 0x08, 0xF8, 0x08, 0x08, 0x0F, // 93
    0x02, 0x01, 0x02, 0x00, 0x00, 0x00, // 94
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, // 95
    0x02, 0x01, 0x00, 0x00, // 96
    0x80, 0x40, 0x40, 0x40, 0x80, 0x07, 0x08, 0x08, 0x08, 0x0F, // 97
    0xF8, 0x40, 0x40, 0x40, 0x80, 0x07, 0x08, 0x08, 0x08, 0x07, // 98
    0x80, 0x40, 0x40, 0x40, 0x80, 0x07, 0x08, 0x08, 0x08, 0x04, // 99
    0x80, 0x40, 0x40, 0x40, 0xF8, 0x07, 0x08, 0x08, 0x08, 0x0F, // 100
    0x80, 0x40, 0x40, 0x40, 0x80, 0x07, 0x09, 0x09, 0x09, 0x05, // 101
    0x40, 0xF0, 0x48, 0x08, 0x10, 0x00, 0x0F, 0x00, 0x00, 0x00, // 102
    0x80, 0x40, 0x40, 0x40, 0x80, 0x47, 0x88, 0x88, 0x88, 0x7F, // 103
    0xF8, 0x80, 0x40, 0x40, 0x80, 0x0F, 0x00, 0x00, 0x00, 0x0F, // 104
    0xD8, 0x0F, // 105
    0xD8, 0x7F, // 106
    0xF8, 0x00, 0x80, 0x40, 0x00, 0x0F, 0x01, 0x02, 0x04, 0x08, // 107
    0xF8, 0x0F, // 108
    0xC0, 0x80, 0x40, 0xC0, 0x80, 0x40, 0xC0, 0x0F, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x0F, // 109
    0xC0, 0x80, 0x40, 0x40, 0x80, 0x0F, 0x00, 0x00, 0x00, 0x0F, // 110
    0x80, 0x40, 0x40, 0x40, 0x80, 0x07, 0x08, 0x08, 0x08, 0x07, // 111
    0x80, 0x40, 0x40, 0x40, 0x80, 0xFF, 0x08, 0x08, 0x08, 0x07, // 112
    0x80, 0x40, 0x40, 0x40, 0xC0, 0x00, 0x07, 0x08, 0x08, 0x28, 0xFF, 0x20, // 113
    0xC0, 0x80, 0x40, 0x40, 0x0F, 0x00, 0x00, 0x00, // 114
    0x80, 0x40, 0x40, 0x40, 0x00, 0x04, 0x09, 0x09, 0x09, 0x06, // 115
    0x40, 0xF8, 0x40, 0x40, 0x00, 0x0F, 0x00, 0x00, // 116
    0xC0, 0x00, 0x00, 0x00, 0xC0, 0x07, 0x08, 0x08, 0x08, 0x07, // 117
    0xC0, 0x00, 0x00, 0x00, 0xC0, 0x00, 0x03, 0x0C, 0x03, 0x00, // 118
    0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x00, 0x03, 0x0C, 0x03, 0x0C, 0x03, 0x00, // 119
    0x40, 0x80, 0x00, 0x80, 0x40, 0x08, 0x04, 0x03, 0x04, 0x08, // 120
    0xC0, 0x00, 0x00, 0x00, 0xC0, 0x47, 0x88, 0x88, 0x88, 0x7F, // 121
    0x80, 0x40, 0x40, 0x40, 0xC0, 0x08, 0x0C, 0x0A, 0x09, 0x08, // 122
    0x80, 0x80, 0x60, 0x10, 0x08, 0x08, 0x00, 0x00, 0x03, 0x04, 0x08, 0x08, // 123
    0xF8, 0x0F, // 124
    0x08, 0x08, 0x10, 0x60, 0x80, 0x80, 0x08, 0x08, 0x04, 0x03, 0x00, 0x00, // 125
    0x03, 0x01, 0x03, 0x02, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, // 126
    0xFF, 0x00, 0xFF, 0x0F, 0x08, 0x0F // 127
    
};

#endif