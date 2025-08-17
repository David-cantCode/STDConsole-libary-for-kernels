#include "stdconsole.h"
#include <stdint.h>



void print_char(char character, unsigned char attribute, int posX, int posY) { 
   
                                
    vga[posY * VGA_COLS + posX] = (attribute << 8) | character;
}


                                
void print_string(char* string, unsigned char attribute, int posX, int posY){  //works but you cant put a strign as a agr. please use a char array such as 'msg[] = "Hello world"'
   //attribute - forground and background attribute:
            //bits 0-3 - text color 
            //bits 4-6 - background color 
            //recomend 0x07 for basic white text black background.
            

   
    int i = 0;                                                                 

    while (string[i] != '\0') {
        print_char(string[i], attribute, posX + i, posY);
        i++;
    }

}


void clear_screen(){
    unsigned int i;

    for (i = 0; i < VGA_COLS* VGA_ROWS; i++) {
        vga[i] = (0x07 << 8) | 0x20;  // writting the ascii symbol space to clear the screen (genius)
    }

}

