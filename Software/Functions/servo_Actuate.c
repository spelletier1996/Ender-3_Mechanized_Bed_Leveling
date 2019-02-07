#include <arduino.h>
#include <servo.h>

Void level_Corner(servo current_Servo, float correction) { //Function to control the servo rotation and travel of the bed leveling screw

      static float screw_Pitch = 0.5 , lead_Distance, num_Threads = 1, correction_Angle; //Variables required to calculate the distance traveled by the bed

      lead_Distance = screw_Pitch * num_Threads; //Lead distance of screw calculation

      correction_Angle = 360 * (correction / lead_Distance); //calculating angle to rotate the servo

      current_Servo.write(correction_Angle) //Sending command to the arduino

}
