/*
  Standard Servo with Ramping.c

  Version 0.94 for use with SimpleIDE 9.40 and its Simple Libraries
  
  Moves servo to 0, 90 and 180 degrees.  Uses ramping to gradually move the 
  servo to the target.
  
  learn.parallax.com/propeller-c-tutorials  
*/

#include "simpletools.h"                      // Include simpletools header
#include "servo.h"                            // Include servo header

int main()                                    // main function
{
  servo_angle(16, 0);                         // P16 servo to 0 degrees
  pause(500);                                 // Allow 1/2 second to get there
  servo_setramp(16, 7);                       // Change by up to 7/10 degree/20 ms 
  servo_angle(16, 1800);                      // P16 servo to 180 degrees
  pause(6000);                                // Allow 6 seconds to get there
                                              // (with ramping in effect)
  servo_stop();                               // Stop servo process
}

