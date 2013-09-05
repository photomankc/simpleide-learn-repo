/*
  Hello VGA.c

  Version 0.94 for use with SimpleIDE 9.40 and its Simple Libraries

  Test Propeller VGA.  P8-V, P9-H, P10-B0, P11-B1, P12-G0, P13-G1
                       P14-R0, P15-R1. 
*/

#include "simpletools.h"                      // Include simple tools
#include "vgatext.h"                          // Include VGA text

int main()                                    // main function
{
  vga_text_start(8);                          // P8 basepin to V
  vga_text_str("Hello Propeller VGA!");       // Display hello message
  while(1);                                   // This cog keeps going
}


