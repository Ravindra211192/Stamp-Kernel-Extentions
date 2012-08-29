// file: pwm.c
#include <stdio.h>
#include <stdlib.h>
#include "imx233.h"

extern int imx233_rd(long offset);
extern int imx233_wr(long offset, long value);

int main(int argc, char **argv) {

   // If the name of the offset ends in CLR, the bits that are hi will be set to 0.
   // If the name of the offset ends in SET, the bits that are hi will be set to 1.
   // If the name of the offset ends in TOG, the bits that are hi will be toggled.
   
   // Change the function of the processor pins
   imx233_wr(HW_PINCTRL_MUXSEL0_SET, 0x00000300);
   
   // Enable the GPIO output
   imx233_wr(HW_PINCTRL_DOE0_SET, 0x00000010);

   // Enable the GPIO output
   imx233_wr(HW_PINCTRL_DOUT0_CLR, 0x00000010);
   usleep(1000);

   imx233_wr(HW_PINCTRL_DOUT0_SET, 0x00000010);
}

