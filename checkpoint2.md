# **Embedded System Designs Project II**

## **Checkpoint 2**

**Group 305**

Victor Chavez, Derek Schow, Andrew Headley, Scott Hardman

EGR-314 Embedded Sys Design Project II Fall 2024

Arizona State University 

Prof. Nichols

October 21, 2024

**Team Folder:**

[Team 305](https://drive.google.com/drive/folders/1dzLA88jLNsgBlmBNI3v-Ub-JuR-p1YDu)

## **Selected Design Concept**

### **Features**

Below is a rendering of what the team calls the freezer regulator. The freezer regulator’s main function is to read and report the temperature and humidity inside of a freezer. If the humidity rises and is not consistent with the set temperature of the freezer a fan will be triggered to circulate cold air to all sections of the freezer. This will help reduce hot spots and will combat unwanted ice build up. 

The freezer regulator will communicate to users via an application that contains the data it has captured. This will be possible thanks to the ESP32 wifi module, which also has a built-in OLED screen that will provide another avenue to display the readings from inside the freezer to the user. The freezer regulator will be able to be clipped outside of the freezer door and will consist of the printed circuit board, motor controlled fan, and the ESP32 module. 

### **Reasoning**

After evaluating all three concept designs - the meat smoker measuring device, the freezer regulating device, and the RC cave crawler - the team ultimately decided to move forward with the freezer device. This was chosen for several reasons. The freezer regulator presented a practical solution to a common household problem of ice buildup in freezers. Its functionality of monitoring temperature and humidity while preventing ice formation, could be easily integrated into everyday use. Displaying the readings on the screen also enhanced user friendliness, making it accessible to more people.

In contrast, while the meat smoker device had potential for certain markets, it was less universally applicable. The RC cave crawler, while a fun idea, was potentially too niche a market and had very few functional applications. The freezer regulator had a more streamlined design with the ability to be installed in any freezer, with minimal hardware components. These factors, with the combination of a strong visual representation created by Derek, and computer generated images made the freezer regulator stand out as the most practical of the three options.

### **Rendering**

![image](https://raw.githubusercontent.com/schowderek/schowderek.github.io/refs/heads/main/Final%20Design%20Idea.drawio.svg)

## **Block Diagram**

### **Subsystem Descriptions**

The freezer regulator is made up of four subsystems. The temperature sensor is located at the bottom left corner of the block diagram. This subsystem utilizes Microchips’ TCN75AVOA713 to be able to read the surrounding temperature. 

Operating in conjunction with the temperature sensor is the humidity sensor subsystem. This subsystem utilizes Texas Instruments' HDC2080DMBR. This sensor allows us to report the amount of water vapor in the surrounding environment. Both of the sensor subsystems run on 3.3 volts and connect to the I2C pins on the microcontroller. 

The motor subsystem utilizes the AMT4900GLKATR motor driver and Fan Axial 30X8MM. This subsystem consists of a motor that triggers a fan when more airflow is needed in the freezer. The motor subsystem in particular runs on 12 volts and communicates to the microcontroller using I2C. 

All of these subsystems work together via Microchips’ PIC16F18124T-I/SL microcontroller. The microcontroller runs on the regulated 3.3 volts provided by the LM2575 voltage regulator. The microcontroller then communicates to the ESP32 module via UART which allows data from the temperature and humidity sensor to be displayed on the user's device while connected to wifi. The ESP32 module also has a small LCD screen which will be another way to display the sensors’ readings from inside the freezer. All of these subsystems work together to gather data from inside the freezer.

### **Updated Block Diagram**

![image](https://raw.githubusercontent.com/schowderek/schowderek.github.io/refs/heads/main/Block%20Diagram-Team305.drawio.svg)

## **Component Selection**

### **Background**

The tables below display the components that each team member selected for their subsystem. It lists the component as well as links to its product page and datasheets. Accompanying the selected component are its pros and cons in comparison to our constraints which include things such as cost and functionality. Below each table are also brief descriptions of why each component was selected. These tables omit two other alternative components that each team member considered for the sole purpose of focusing on the selected components. However, the completed tables that include the alternative choices can be found in Appendix A: Component Selection.

### **Selected Components**

Motor Driver: (Scott Hardman)



