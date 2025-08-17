#ifndef STDCONSOLE_H
#define STDCONSOLE_H


#include <stdint.h>
#define VGA_COLS 80 //x 
#define VGA_ROWS 25 // y 


#define VGA_ADDRESS 0xB8000 //location of 
static unsigned short* const vga = (unsigned short*)VGA_ADDRESS;




void print_string(char* string, unsigned char attribute, int posX, int posY);
void print_char(char character, unsigned char attribute, int posX, int posY);
void clear_screen();
#endif
