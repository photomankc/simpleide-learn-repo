/*
  Two DC Motors 60 Percent.c

  Version 0.94 for use with SimpleIDE 9.40 and its Simple Libraries

  Drive a pair of DC motors at 6/10 of full speed.
  http://learn.parallax.com/propeller-c-tutorials
*/

#include "simpletools.h"

int main()                                    
{
  // Keep pins low if unused.
  set_outputs(5, 2, 0b0000);
  set_directions(5, 2, 0b1111);

  // Start PWM process.  Period 1 ms, Freq 1 kHz
  pwm_start(1000);                            
  
  // Turn motors counterclockwise for 3 s.
  pwm_set(3, 0, 600);
  pwm_set(4, 1, 600);
  pause(3000);

  // Stop for 1 second.
  pwm_set(3, 0, 0);
  pwm_set(4, 1, 0);
  pause(1000);

  // Turn motors counterclockwise for 3 s.
  pwm_set(2, 0, 600);  
  pwm_set(5, 1, 600);
  pause(3000);

  // Stop again
  pwm_set(2, 0, 0);
  pwm_set(5, 1, 0);
  
  // End the PWM process
  pwm_stop();
}  

