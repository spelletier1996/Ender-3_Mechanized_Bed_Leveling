#include <Servo.h>

class continuous_Servo : public Servo {

  int stop_Value;
  int orientation;

public:

  void setup( int pin, int orientation, int offset ); // orientation is set to either 1 or 0 depending on physical set up while calibration is servo offset for 90 stop
  void raise( ); // rotates servo to raise bed
  void lower( );
  void stop( );


};
