# Ender-3_Mechanized_Bed_Leveling
This is an implementation of a mechanical leveling system on the Creality Ender-3 Printer. 
![alt text](https://i.imgur.com/5lPmSWH.jpg)
## Mechanical Structure
The structure on the mechanical side is essentially complete except for a few tolerance teaks. 
## Software
The software is functional and was written using Platform.IO and an arduino nano controller. The embedded software is essentially complete except for the serial communication with the printer. This is due to the printer only accepting communication from a master device. I believe finding some other communication method such as I2C with the Ender 3 board or using a UART master shield for the arduino would be a solution to this. I will attempt to implement it when I have the time
## BOM
All thats needed for this project is:
- Ender 3 Pro or not
- 4x Tower pro SG90 Style continuous servo motors
- some sort of hall effect sensor that mounts to the ender 3 and acts as a switch 
- PLA Filament 
