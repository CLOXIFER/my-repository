#include "resistor_color.h"
uint16_t color_code(resistor_band_t color){
  return color;  
}
const resistor_band_t *colors(void) {
  static resistor_band_t my_array[10]={BLACK,BROWN,RED,ORANGE,YELLOW,GREEN,BLUE,VIOLET,GREY,WHITE};
  return my_array;  
}