#include <continuous_Servo.h>

void continuous_Servo::setup( int pin, int orientation, int offset ){

  attach(pin);

  this->orientation = orientation; // either a 1 or 0 value

  stop_Value = 90 + offset;

};

void continuous_Servo::raise(){

  if (orientation == 1){write(180);}

  else {write(0);}

};
void continuous_Servo::lower(){

  if (orientation == 1){write(0);}

  else {write(180);}

};
void continuous_Servo::stop(){

  write(stop_Value);

};
