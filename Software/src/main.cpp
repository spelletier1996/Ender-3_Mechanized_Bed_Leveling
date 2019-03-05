#include <Arduino.h>
#include <continuous_Servo.h>
#include <serial_Gcode.h>

  continuous_Servo servo_FL, servo_FR, servo_BL, servo_BR; //Declareds all the servo objects LOOK INTO MOVING SETUP TO CONSTRUCTOR
  serial_Gcode ender3;
  int inductive_Sensor_State = 1; //When it detects metal it is state 0

void setup() {


  ender3.connect();

  servo_FL.setup(5, 1, 0); //Front left servo set up
  servo_FR.setup(4, 1, 0); //Front Right servo set up
  servo_BL.setup(3, 1, -1); //Back Left servo set up
  servo_BR.setup(2, 1, -1); //Back Right servo set up

  pinMode(6, INPUT);

  //Serial.begin(115200);

  while (!Serial) {
    ;
  }

  delay(1000);

  servo_FL.stop();
  servo_FR.stop();
  servo_BL.stop();
  servo_BR.stop();

}

void loop() {

  inductive_Sensor_State = digitalRead(6);

  ender3.auto_Home();

  ender3.moveto_FL();

  inductive_Sensor_State = digitalRead(6);

  if (inductive_Sensor_State == 1){

    while(inductive_Sensor_State == 1){

      servo_FL.raise();
      delay(100);
      servo_FL.stop();
      inductive_Sensor_State = digitalRead(6);

    }

  }

  else{

    while(inductive_Sensor_State == 0){

      servo_FL.lower();
      delay(100);
      servo_FL.stop();
      inductive_Sensor_State = digitalRead(6);

    }

  }


  ender3.moveto_FR();

  inductive_Sensor_State = digitalRead(6);

  if (inductive_Sensor_State == 1){

    while(inductive_Sensor_State == 1){

      servo_FR.raise();
      delay(100);
      servo_FR.stop();
      inductive_Sensor_State = digitalRead(6);

    }

  }

  else{

    while(inductive_Sensor_State == 0){

      servo_FR.lower();
      delay(100);
      servo_FR.stop();
      inductive_Sensor_State = digitalRead(6);

    }

  }

  ender3.moveto_BR();

  inductive_Sensor_State = digitalRead(6);

  if (inductive_Sensor_State == 1){

    while(inductive_Sensor_State == 1){

      servo_BR.raise();
      delay(100);
      servo_BR.stop();
      inductive_Sensor_State = digitalRead(6);

    }

  }

  else{

    while(inductive_Sensor_State == 0){

      servo_BR.lower();
      delay(100);
      servo_BR.stop();
      inductive_Sensor_State = digitalRead(6);

    }

  }


  ender3.moveto_BL();

  inductive_Sensor_State = digitalRead(6);

  if (inductive_Sensor_State == 1){

    while(inductive_Sensor_State == 1){

      servo_BL.raise();
      delay(100);
      servo_BL.stop();
      inductive_Sensor_State = digitalRead(6);

    }

  }

  else{

    while(inductive_Sensor_State == 0){

      servo_BL.lower();
      delay(100);
      servo_BL.stop();
      inductive_Sensor_State = digitalRead(6);

    }

  }
























}
