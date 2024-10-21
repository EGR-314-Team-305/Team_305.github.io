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
| Solution | Pros | Cons |
|----------|------|------|
| ![image](https://raw.githubusercontent.com/VictorChvz885/VictorChvz885.github.io/e742220e4acf9355206988f596c3029423ce1b4a/20-SOIC%200.295.jpg) <br>L293DD <br>[Link to product](https://www.digikey.com/en/products/detail/stmicroelectronics/L293DD/585913) <br>[Link to datasheet](https://www.st.com/content/ccc/resource/technical/document/datasheet/04/ac/22/f9/20/5d/43/a1/CD00000059.pdf/files/CD00000059.pdf/jcr:content/translations/en.CD00000059.pdf)| <ul><li>High voltage supply/load</li><li>General purpose motor driver</li><li>4.5V-36V</li><li>600mA</li><ul> | <ul><li>Most expensive option</li><li>No built in fault protection</li><ul> |

Choice: L293DD
Rationale: The large voltage operating margin and general purpose design makes it the ideal pick for our product because the driver needs to be able to handle up to 24V and it is not too expensive despite this. 


Motor: (Scott Hardman)
| Solution | Pros | Cons |
|----------|------|------|
| <img src="https://github.com/VictorChvz885/VictorChvz885.github.io/blob/main/20-SOIC%200.295.jpg?raw=true" alt="Alt Text" width="100" height="50"> <br>HA40101V4-1000U-A99 <br>[Link to product](https://www.digikey.com/en/products/detail/sunon-fans/HA40101V4-1000U-A99/6198728?utm_adgroup=&utm_source=google&utm_medium=cpc&utm_campaign=PMax%20Shopping_Product_Medium%20ROAS%20Categories&utm_term=&utm_content=&utm_id=go_cmp-20223376311_adg-_ad-__dev-c_ext-_prd-6198728_sig-CjwKCAjw0aS3BhA3EiwAKaD2ZV4SR-mhshkZJRApqpeEfWNnqg7gYdPNDVAJrWyka_VC8i5g6X8cFhoCoPgQAvD_BwE&gad_source=1&gclid=CjwKCAjw0aS3BhA3EiwAKaD2ZV4SR-mhshkZJRApqpeEfWNnqg7gYdPNDVAJrWyka_VC8i5g6X8cFhoCoPgQAvD_BwE) <br>[Link to datasheet](https://www.sunon.com/PROSEARCH_FILES/(D04111000G-02)-2.pdf)| <ul><li>Operating Temperature</li><li>Not a large footprint</li></li><li>Low cost and quiet</li><li>Lightweight</li><ul> | <ul><li>Relatively high voltage pull</li><li>12 volts</li><ul> |

Choice: HA40101V4-1000U-A99
Rationale: The HA40101V4-1000U-A99 fan is just the right size. The operating voltage is high enough to work for our purposes for higher fan speeds, and it is not too expensive. It is quiet, while operating and lightweight. 


Switching Voltage Regulator (Andrew Headley)
| Solution | Pros | Cons |
|----------|------|------|
| ![image](https://mm.digikey.com/Volume0/opasdata/d220001/medias/images/2472/20-SOIC%200.295.jpg) <br>LM2575HVS <br>[Link to product](https://www.digikey.com/en/products/detail/texas-instruments/LM2575HVS-3-3-NOPB/363637) <br>[Link to datasheet](https://www.ti.com/general/docs/suppproductinfo.tsp?distId=10&gotoUrl=https%3A%2F%2Fwww.ti.com%2Flit%2Fgpn%2Flm2575-n)| <ul><li>Output voltage (3.3v)</li><li>Simple example circuit</li><li>Wide input voltage range</li><li>1A output current</li><ul> | <ul><li>Circuit protection is needed</li><li>Outputs a set voltage</li><li>No customization</li><li>Only a buck converter</li><ul> |

Choice: LM2575HVS
Rationale: Even though the output voltage is fixed, having a simpler example circuit to follow reduces the points of failure so debugging and repairs can be addressed more quickly. Additionally, the wide voltage input will allow the team to offset any disadvantages from the LM2575 being only a buck converter. There is also a set 5V output version that can be used for powering other subsystems.


Temperature Sensor (Victor Chavez)
| Solution | Pros | Cons |
|----------|------|------|
| ![image](https://mm.digikey.com/Volume0/opasdata/d220001/medias/images/2472/20-SOIC%200.295.jpg) <br>TCN75AVOA713 <br>[Link to product](https://www.digikey.com/en/products/detail/microchip-technology/TCN75AVOA713/739450) <br>[Link to datasheet](https://ww1.microchip.com/downloads/en/DeviceDoc/21935D.pdf)| <ul><li>Temperature to digital converter</li><li>Measure from -40°C to +125°C</li><li>I2C™ Compatible</li><li>Alert pin and configurable address pins</li><ul> | <ul><li>Low measuring range</li><li>Large IC size</li><ul> |


Choice: TCN75AVOA713 
Rationale: Microchip’s TCN75AVOA13 might have a smaller range in terms of measuring temperature, however, the smaller accuracy error makes it more suitable for our application. We also won’t be needing the extra -15 degrees that the DS1775R+T&R offers as most freezers operate at around 0 to 10 degrees fahrenheit. Also the TCN75AVOA13 has a configurable address which will be useful since we are connecting four devices into one I2C serial bus. The bigger footprint also will make it easier to work with during the PCB assembly process. Lastly the TCN75AVOA13 has configurable alert pins if the temperature it senses goes above or below its set threshold, which is also configurable.


Humidity Sensor (Derek Schow)
| Solution | Pros | Cons |
|----------|------|------|
| ![image](https://mm.digikey.com/Volume0/opasdata/d220001/medias/images/2472/20-SOIC%200.295.jpg) <br>HDC2080DMBR <br>[Link to product](https://www.digikey.com/en/products/detail/texas-instruments/HDC2080DMBR/9692560) <br>[Link to datasheet](https://www.ti.com/lit/ds/symlink/hdc2080.pdf?HQS=dis-dk-null-digikeymode-dsf-pf-null-wwe&ts=1726699942311&ref_url=https%253A%252F%252Fwww.ti.com%252Fgeneral%252Fdocs%252Fsuppproductinfo.tsp%253FdistId%253D10%2526gotoUrl%253Dhttps%253A%252F%252Fwww.ti.com%252Flit%252Fgpn%252Fhdc2080)| <ul><li>I2C Output</li><li>Interrupt Capability</li><li>Larger size 3.1mm x 3.1mm</li><li>Wide Supply voltage 1.62V - 3.6V</li><li>Least expensive</li><li>Least expensive</li>Surface Mount<ul> | <ul><li>More complicated to set up - 6 pins</li><li>Less accurate +/- 2% RH</li><ul> |

Choice: HDC2080DMBR 
Rationale: With more pins and capability we will have more control over exactly how we use the device. It is the least expensive of the options, and also has a small package size without being too small to solder. It can withstand the low temperatures inside of a freezer or fridge. While it is slightly less accurate than the other choices, 2% compared to 1.8% is a small enough difference that it will not affect the functionality of the end product. The datasheet is also more detailed with some example configurations.









### **Power Budget Table**

A. List ALL major components (active devices, integrated circuits, etc.) except for power sources, voltage regulators, resistors, capacitors, or passive elements
| Component Name      | Part Number           | Supply<br>Voltage<br>Range | # | Absolute<br>Maximum<br>Current (mA) | Total<br>Current<br>(mA) | Unit |
| ------------------- | --------------------- | -------------------------- | - | ----------------------------------- | ------------------------ | ---- |
| Fan Motor           | HA40101V4-1000U-A99   | 12V                        | 1 | 37                                  | 37                       | mA   |
| PIC Microcontroller | PIC16F18124T-I/SL<br> | 3.3V                       | 1 | 0.048                               | 0.048                    | mA   |
| Humidity Sensor     | HDC2080DMBR           | 3.3V                       | 1 | 0.89                                | 0.89                     | mA   |
| Temperature Sensor  | TCN75AVOA713          | 3.3V                       | 1 | 0.5                                 | 0.5                      | mA   |
| Motor Driver        | AMT49400GLKATR<br>    | 3.3V-12V                   | 1 | 5                                   | 5                        | mA   |
| ESP 32              | (full part number)    | +1.8 - 3.3V                | 1 | 40                                  | 40                       | mA   |
|                     |                       |                            |   |                                     |                          |


"B. Assign each major component above to ONE power rail below. Try to minimize the number of different power rails in the design. 
Add additional power rails or change the power rail voltages if needed."							
| +12V Input                     | Component Name                                 | Part Number         | Supply<br>Voltage<br>Range | # | Absolute<br>Maximum<br>Current (mA) | Total<br>Current<br>(mA) | Unit |
| ------------------------------ | ---------------------------------------------- | ------------------- | -------------------------- | - | ----------------------------------- | ------------------------ | ---- |
|                                | Fan Motor                                      | HA40101V4-1000U-A99 | 12V                        | 1 | 37                                  | 37                       | mA   |
|                                | Motor Driver                                   | AMT49400GLKATR<br>  | 3.3V-12V                   | 1 | 5                                   | 5                        | mA   |
|                                | Subtotal                                       | 42                  | mA                         |
|                                | Safety Margin                                  | 25%                 |                            |
|                                | Total Current Required on +12V Rail            | 52.5                | mA                         |
|                                |                                                |                     |                            |   |                                     |                          |      |
| c1. Regulator or Source Choice | +12V Wall Supply                               |                     | 12                         | 1 | 2500                                | 2500                     | mA   |
|                                | Total Remaining Current Available on +12V Rail | 2447.5              | mA                         |

| +3.3V Power Rail               | Component Name                                 | Part Number           | Supply<br>Voltage<br>Range | # | Absolute<br>Maximum<br>Current (mA) | Total<br>Current<br>(mA) | Unit |
| ------------------------------ | ---------------------------------------------- | --------------------- | -------------------------- | - | ----------------------------------- | ------------------------ | ---- |
|                                | PIC Microcontroller                            | PIC16F18124T-I/SL<br> | 3.3V                       | 1 | 0.048                               | 350                      | mA   |
|                                | Humidity Sensor                                | HDC2080DMBR           | 3.3V                       | 1 | 0.89                                | 0.89                     | mA   |
|                                | Temperature Sensor                             | TCN75AVOA713          | 3.3V                       | 1 | 0.5                                 | 0.5                      | mA   |
|                                | Motor Driver                                   | AMT49400GLKATR<br>    | 3.3V-12V                   | 1 | 5                                   | 5                        | mA   |
|                                | ESP 32                                         | (full part number)    | +1.8 - 3.3V                | 1 | 40                                  | 40                       | mA   |
|                                | Subtotal                                       | 356.39                | mA                         |
|                                | Safety Margin                                  | 25%                   |                            |
|                                | Total Current Required on +3.3V Rail           | 445.4875              | mA                         |
|                                |                                                |                       |                            |   |                                     |                          |      |
| c4. Regulator or Source Choice | +3.3V switching voltage regulator              | LM2575                | +3.3V                      | 1 | 1000                                | 1000                     | mA   |
|                                | Total Remaining Current Available on 3.3V Rail | 554.5125              | mA                         |


C. Select a specific external power source (wall supply or battery) for your system, and confirm that it can supply all of the regulators for all of the power rails simultaneously. If you need multiple power sources, list each separately below and indicate which regulators will be connected to each supply. Confirm that the Total Remaining Current Available on each power source below is not negative.	

| External Power Source 1                          | Component Name                                               | Part Number        | Supply<br>Voltage<br>Range | Output Voltage | Absolute<br>Maximum<br>Current (mA) | Total<br>Current<br>(mA) | Unit |
| ------------------------------------------------ | ------------------------------------------------------------ | ------------------ | -------------------------- | -------------- | ----------------------------------- | ------------------------ | ---- |
| Power Source 1 Selection                         | Plug-in Wall Supply                                          | (full part number) | 110VAC                     | +12V           | 2500                                | 2500                     | mA   |
|                                                  |                                                              |                    |                            |                |                                     |                          |      |
| Power Rails Connected to External Power Source 1 | +12V supply                                                  |                    | +12V                       | 1              | 1000                                | 1000                     | mA   |
| +3.3V regulator                                  | LM2575                                                       | +3.3V              | 1                          | 1000           | 1000                                | mA                       |
|                                                  | Total Remaining Current Available on External Power Source 1 | 500                | mA                         |


### **Conclusion**

Based on our power budget, we have determined that our system can be completely powered by a simple wall mounted DC supply with plenty of power to spare. All the components that were selected use less very low current at a relatively low voltage of 3.3V. The team was able to use this budget to plan for the supply that we would use. After this first iteration, the team would likely be able to update the design to operate on batteries for convenience.


## **Microcontroller Selection**

### **Decision Making**

For the microcontroller selection the team wanted a microcontroller that would be reliable and would have a sufficient amount of pins for all of our subsystems. Being the connective tissue for all of the subsystems the microcontroller was a part the team did not want to rush in choosing. After weighing factors the team decided to choose the PIC16F18124 microcontroller. The larger layout and various packages gave us more options and flexibility when designing our printed circuit boards. More input/output pins, means our team can connect more subsystems which is preferable for a microcontroller that has to handle three subsystems. 

This option also includes a better package type in SOIC rather than DFN. The SOIC package is favorable because of the wider pin size making for easier soldering. The difference between the three microcontrollers is small but the pin count in PIC16F18124 is the best choice for multiple subsystems. It's also low cost and has a voltage supply range of 1.8 to 5.5 volts. 

The table detailing the three options the team considered is located in Appendix B: Microcontroller Selection. It includes many sections that list the number of pins for each microcontroller, the operating voltage, max current rating, links to data sheets and product page, links to code examples, and much more. 


## **Hardware Proposal**

### **Team Schematic**

![image](

### **Functionality/Decision Making**

The team schematic displays four subsystems which include two sensors, an actuator, and a microcontroller. Starting at the top is the schematic showing the wiring for the voltage regulator and microcontroller. Included are flags on the I2C and SCL pins which is where the sensor and motor subsystems will connect to. Scattered through many pins are capacitors to reduce noise and help with voltage maintenance. To the right of the microcontroller schematic is the temperature sensor schematic which includes a simple temperature sensor and three pull-up resistors on the digital communication lines. Below that is the humidity sensor which has a similar layout to the sensor except it contains LEDs for debugging purposes. Lastly is the motor schematic which contains a motor fan and a motor driver and like the sensors the main connections to the microcontroller are connected to the communication pins. 

For the schematics the team deliberately created simple circuits for each of their components. The purpose of keeping each schematic simple was due to the fact that each subsystem was only to perform one function but it needed to perform said function well. For example the temperature circuit is set to only sense temperature although it could also be configured to sense humidity. However, since we needed to have two sensors, adding a humidity sensor made more sense. This would also make creating the PCB a lot more simpler and would allow for easier debugging. Having smaller circuits would also reduce the footprint of the PCB which is beneficial for our product as the team wants to make it portable so it can be moved to all areas of the freezer.


## **Software Proposal**

![image](https://raw.githubusercontent.com/schowderek/schowderek.github.io/refs/heads/main/Software-Proposal-Team305.drawio.svg)


### **Functionality/Decision Making**

This diagram displays the logical behavior of the software in our microcontroller for this project. The five key components include the temperature sensor, humidity sensor, fans, display, and the wifi module. The temperature and humidity sensors work in tandem to periodically collect data from inside the freezer. The microcontroller requests this data at set intervals, analyzing the conditions to determine whether the humidity levels are too high in relation to the current temperature. If the humidity exceeds the threshold, the software triggers the fan to circulate cold air within the freezer. This forms the core logic of the regulator’s functionality. 

Additionally, the system’s display and communication features, the OLED screen built into the ESP32 module provides real-time updates on the temperature and humidity inside the freezer, giving users immediate visual feedback. At the same time, the WiFi module transmits this data to the user’s mobile application, allowing remote data collection on the freezer conditions and alerts the user if needed. 

## **Appendix A: Component Selection**

### **Completed Component Selection Tables**


## **Appendix B: Microcontroller Selection**

### **Microcontroller Selection Tables**


## **Appendix C: Hardware Proposal**

### **Bill of Materials**
