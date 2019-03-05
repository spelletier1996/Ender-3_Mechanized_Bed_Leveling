

class serial_Gcode {
public:
  void connect();
  void moveto_FL();
  void moveto_FR();
  void moveto_BL();
  void moveto_BR();
  void wait_For_ok();
  void auto_Home();
  void increment_Up();
  void increment_Down();
  
};
