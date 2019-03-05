#include<serial_Gcode.h>
#include<continuous_Servo.h>
#include<Arduino.h>


void serial_Gcode::connect(){ //opens the serial connection and waits for it to be ready

  Serial.begin(115200);

  while (!Serial) {
    ;
  }

}

void serial_Gcode::wait_For_ok(){ //function that waits for marlin to return ok signal

  String recieved;

  while (recieved != "ok"){

    recieved += Serial.readString();

  }

}

void serial_Gcode::moveto_FL(){ //sends gcode to move printer to front left then waits for ok

  Serial.print("G0 X40 Y10 Z5");
  wait_For_ok();

}
void serial_Gcode::moveto_FR(){ //sends gcode to move printer to front right then waits for ok

  Serial.write("G0 X200 Y10 Z5");
  wait_For_ok();

}
void serial_Gcode::moveto_BL(){ //sends gcode to move printer to front back left then waits for ok

  Serial.write("G0 X40 Y200 Z5");
  wait_For_ok();

}
void serial_Gcode::moveto_BR(){ //sends gcode to move printer to back right then waits for ok

  Serial.write("G0 X200 Y200 Z5");
  wait_For_ok();

}

void serial_Gcode::auto_Home(){ //sends gcode to move printer to auto home then waits for ok

  Serial.write("G28");
  wait_For_ok();

}

void serial_Gcode::increment_Up(){ //increments the printer up 1mm

  Serial.write("G91 Z1");
  wait_For_ok();

}
void serial_Gcode::increment_Down(){ //increments the printer down 1mm

  Serial.write("G91 Z-1");
  wait_For_ok();

}
