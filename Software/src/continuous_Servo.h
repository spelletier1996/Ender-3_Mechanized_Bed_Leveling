#include <Servo.h>

class continuous_Servo : public Servo {

  int stop_Value; // corrected stop value command for servo
  int orientation;// orientation of servo in physical space to determine raise and lower

public:

  void setup( int pin, int orientation, int offset ); // orientation is set to either 1 or 0 depending on physical set up while calibration is servo offset for 90 stop
  void raise( ); // rotates servo to raise bed
  void lower( ); // rotates servo to raise bed
  void stop( ); // stops servo rotation using calibrated value


};
