# **Embedded System Designs Project II**

## **Report**

**Group 305**

Victor Chavez, Derek Schow, Andrew Headley, Scott Hardman

EGR-314 Embedded Sys Design Project II Fall 2024

Arizona State University 

Prof. Nichols

September 9, 2024

**Team Folder:**

[Team 305](https://drive.google.com/drive/folders/1dzLA88jLNsgBlmBNI3v-Ub-JuR-p1YDu)

## **Table of Contents**

* [Team Organization](https://egr-314-team-305.github.io/Team_305.github.io/full_report.html#team-organization)

* [User Needs, Benchmarking, and Requirements](https://egr-314-team-305.github.io/Team_305.github.io/full_report.html#user-needs-benchmarking-and-requirements)

* [Design Ideation](https://egr-314-team-305.github.io/Team_305.github.io/full_report.html#design-ideation) 

* [Selected Design Concept](https://egr-314-team-305.github.io/Team_305.github.io/full_report.html#selected-design-concept)

* [Block Diagram](https://egr-314-team-305.github.io/Team_305.github.io/full_report.html#block-diagram)

* [Component Selection](https://egr-314-team-305.github.io/Team_305.github.io/full_report.html#component-selection)

* [Power Budget](https://egr-314-team-305.github.io/Team_305.github.io/full_report.html#power-budget-table)

* [Microcontroller Selection](https://egr-314-team-305.github.io/Team_305.github.io/full_report.html#microcontroller-selection)

* [Hardware Proposal](https://egr-314-team-305.github.io/Team_305.github.io/full_report.html#hardware-proposal)

* [Software Proposal](https://egr-314-team-305.github.io/Team_305.github.io/full_report.html#software-proposal)

* [Appendix A: Team Organization](https://egr-314-team-305.github.io/Team_305.github.io/full_report.html#appendix-a-team-organization)

* [Appendix B: User Needs Benchmarking Requirements](https://egr-314-team-305.github.io/Team_305.github.io/full_report.html#appendix-b-user-needs-benchmarking-requirements)

* [Appendix C: Design Ideation](https://egr-314-team-305.github.io/Team_305.github.io/full_report.html#appendix-c-design-ideation)

* [Appendix D: Complete Component Selection](https://egr-314-team-305.github.io/Team_305.github.io/full_report.html#appendix-d-component-selection)

* [Appendix E: Microcontroller Selection Table](https://egr-314-team-305.github.io/Team_305.github.io/full_report.html#appendix-e-microcontroller-selection)

* [Appendix F: Bill of Materials](https://egr-314-team-305.github.io/Team_305.github.io/full_report.html#appendix-f-hardware-proposal)

## Introduction
For the Fall 2024 session of EGR 314, the design challenge was to sense and measure environmental factors, then use those measurements to actuate a moving subsystem like a motor or servo. To this end, Team 305 looked at different ideas that would satisfy the course requirements, while also providing the team members the desired experience and knowledge-base. During the design ideation phase the team landed on a monitoring system for freezers, where the design would measure the temperature and humidity of said freezer, then actuate a fan attached to a DC motor to increase the air flow in the freezer. The working theory is that without proper air flow, freezers can build up frost due to excess water in the air, as well as having hotter spots where the air cannot circulate as well. With the intended design solution, the hope is that the excess frost can be minimized, and a more even distribution of cooling can be achieved.

## Team Organization

### **Charter**

The team will operate with the following goals throughout the semester:

1. **Work together to create a functional technical product that solves a real-world problem:**

    The primary goal is for the team to work together on creating a technical solution to a practical, real-world issue. This involves identifying a problem or need, brainstorming potential solutions, and then narrowing down the idea to a feasible and impactful project. The product should not only be functional but also innovative, addressing the real-world problem in a way that adds value and makes a tangible difference.

2. **Gain experience with electronics and embedded system design with a microcontroller:**

    Team members will deepen their understanding of electronics and embedded systems by working directly with microcontrollers. This experience includes designing circuits, programming the microcontroller, and integrating various electronic components. The goal is to develop proficiency in both hardware (sensors, actuators, communication modules) and software (embedded programming, interfacing, and debugging) aspects of the system.

3. **Maximize work efficiency through extensive planning and proper time management:**

    Efficient teamwork relies on solid planning and time management. The team will need to create a comprehensive project timeline, breaking down the work into manageable tasks, setting deadlines, and assigning responsibilities. Proper organization is key to ensuring that all team members contribute effectively, progress is steady, and roadblocks are anticipated and addressed promptly.

4. **Develop a final product to showcase the team members’ newfound knowledge and experience utilizing embedded systems:**

    The culmination of the project will be a final product that embodies the collective knowledge and experience gained during the process. This product should not only solve the identified problem but also serve as a demonstration of the team’s newly acquired expertise in electronics and embedded system design. The project should reflect the practical application of theoretical concepts and provide insight into the team's learning journey.

5. **Present our final project in a presentation to effectively communicate the team’s knowledge to the class and the client:**

    The team will prepare a formal presentation to showcase their project, explaining the problem, the development process, the technical design, and the final product. The presentation should clearly communicate the technical aspects of the solution, demonstrate how it addresses the identified real-world problem, and highlight the team’s growth in technical and collaborative skills. Tailoring the presentation to the audience will ensure that the key points are delivered effectively and comprehensively.


### **Product Mission Statement**

Our mission is to design and develop a product that aims to incorporate the use of sensors that are able to gauge the different factors in its surrounding environment and transmit that newly obtained data through a serial communication protocol, utilizing only surface mounted components. 

## User Needs, Benchmarking, and Requirements

### **Listing and Grouping Needs**

During the very early stages of this class the team wanted to make something that was slightly different from a mobile weather station. Instead the team wanted to look toward making a product that was used in a cooking setting. The team wanted a product that could be used to help regulate the storage and preservation of foods or even create a device that could provide more accurate readings for something like a meat smoker or grill. So during the benchmarking process the team picked products on the market that related to cooking in some way. For our five products two were temperature sensors, two were cooking tools, and one was a product that cooled a person down which is very handy in those grilling environments. We did this so as to find needs that would relate to our future product. The team then looked through the reviews of each product and found six positive and six negative reviews. Utilizing these reviews the team was then able to create ten user needs for each product, with half of them being explicit needs and the other being latent needs. In total the team found fifty needs and grouped them into a jamboard.

### **Converting Needs**

For the process of converting the needs into specifications the team created four categories that were used to group the user needs in. The four categories included: cost effectiveness, user friendliness, reliability, and wireless connectability. After color coding and grouping the needs the team ranked the user needs in each category. This was done using a one to three star scale, with three stars being an important user need, two stars being somewhat important and one being a less important user need. The ranking the user need received was based on two factors. The first was how prevalent that user needs was in the reviews and the second was based on how broad the user need was.We wanted broad user needs so that they encompassed the more specific user needs. For example the user need that stated the device needed to be easy to install, received three stars. Whereas the user needs that stated the probe must be easy to position, received a one star rank. The team then looked at the top ranked user needs and converted those into specifications that could be measurable to see if we met the needs of the user. 

### **Design Aspects**

Our design aspects are grouped into six categories. These include product design, software/functionality, interactivity & User experience, customization, manufacturing and safety. The top aspects in each category include designing a device that is unique from existing products, making a device that will communicate with an online server via ESP 32 module, making sure the device will work with different devices, allowing the user to customize the device to meet a certain goal, making each subsystem at a reasonable cost, and lastly making sure the device is not harmful to the user in any way. The rest of the design aspects are listed in Appendix B: 

## Design Ideation

### **Generating Ideas**

For generating ideas the team first referenced the user needs and came up with ideas that met those user needs. After coming up with small basic ideas the process evolved into coming up with basic products that utilized those features. Throughout this process the team bounced off each other and added their own twist to each idea, this led to us generating a lot of ideas prior to our brainstorming process. This was important as it gave us direction during our brainstorming process. The roles for this process were relatively simple, Victor record the different ideas and made note of the top ideas, Derek came up with the top idea and led the discussion, Scott did research on different ideas and looked to find similar products on the market, and Andrew grounded each idea by making sure that we could implement the required sensors and actuators. 

### **Brainstorming**

The brainstorming process started out by creating a jamboard and coming up with different features we wanted to see in our kitchen device. After brainstorming features, we then began to brainstorm more fleshed out ideas such as how the features would work together and how a feature could trigger an actuation. We planned on brainstorming all one hundred features in one go but the team found that the ideas were being repeated or were simply dull. So collectively the team decided to split the brainstorming process over the span of 2 days. This approach definitely helped and allowed us to come up with strong ideas each day. During this process we also began to add ideas for features that could be seen in products that were not necessarily related to cooking. The team came to the conclusion that brainstorming for other products could lead us to new innovative ideas that could benefit the kitchen product we had in mind. In the end the team came up with 100 ideas.

### **Organization and Concepts**

After concluding the brainstorming process the team came up with three concept ideas. Those three ideas were the meat smoker measuring device, the freezer regulating device, and the rc cave crawler. Related ideas from the brainstorming session were then grouped under the concept that they best reinforced. To provide a visual aid of our different concepts the team created computer generated images and the top concept also included a detailed vector sketch of the concept at work. Derek created the vector image for our top concept, the freezer regulating device. A computer generated image of the freezer regulator also accompanied the image. Scott made a concept image for the meat smoker measuring device. Lastly Victor made a concept image for the rc cave crawler. Each of these concepts were accompanied by short descriptions of the features that would be included in each concept. To see the concept images and jamboards visit Appendix C: Design Ideation. 

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

![image](https://raw.githubusercontent.com/schowderek/schowderek.github.io/refs/heads/main/Block%20Diagram-Team305(1).drawio.svg)

## **Component Selection**

### **Background**

The tables below display the components that each team member selected for their subsystem. It lists the component as well as links to its product page and datasheets. Accompanying the selected component are its pros and cons in comparison to our constraints which include things such as cost and functionality. Below each table are also brief descriptions of why each component was selected. These tables omit two other alternative components that each team member considered for the sole purpose of focusing on the selected components. However, the completed tables that include the alternative choices can be found in Appendix A: Component Selection.

### **Selected Components**

Motor Driver: (Scott Hardman)

| Solution | Pros | Cons |
|----------|------|------|
| <img src="https://github.com/Rockerfrog/Rockerfrog.github.io/blob/main/620%3B-10SOIC-EP-3%2C9%3B-LK%3B-10.jpg?raw=true" alt="Alt Text" width="125" height="150"> <br>AMT49400GLKATR <br>[Link to product](https://www.digikey.com/en/products/detail/allegro-microsystems/AMT49400GLKATR/10146667)<br>[Link to datasheet](https://www.allegromicro.com/-/media/Files/Datasheets/AMT49400-Datasheet.ashx) | - High voltage supply and load <br> - Motor Driver Power MOSFET I2C 10-SOIC <br> - 0.3V-20V <br> - 2A Output Current | - Most expensive option <br> - Only operates one fan | 

Choice: AMT49400GLKATR
Rationale: The large voltage operating margin and general purpose design makes it the ideal pick for our product because the driver needs to be able to handle up to 12V and it is not too expensive despite this. 


Motor: (Scott Hardman)

| Solution | Pros | Cons |
|----------|------|------|
| <img src="https://github.com/VictorChvz885/VictorChvz885.github.io/blob/main/MFG_HA40101V4-1000U-A99%20(1).jpg?raw=true" alt="Alt Text" width="125" height="150"> <br>HA40101V4-1000U-A99 <br>[Link to product](https://www.digikey.com/en/products/detail/sunon-fans/HA40101V4-1000U-A99/6198728?utm_adgroup=&utm_source=google&utm_medium=cpc&utm_campaign=PMax%20Shopping_Product_Medium%20ROAS%20Categories&utm_term=&utm_content=&utm_id=go_cmp-20223376311_adg-_ad-__dev-c_ext-_prd-6198728_sig-CjwKCAjw0aS3BhA3EiwAKaD2ZV4SR-mhshkZJRApqpeEfWNnqg7gYdPNDVAJrWyka_VC8i5g6X8cFhoCoPgQAvD_BwE&gad_source=1&gclid=CjwKCAjw0aS3BhA3EiwAKaD2ZV4SR-mhshkZJRApqpeEfWNnqg7gYdPNDVAJrWyka_VC8i5g6X8cFhoCoPgQAvD_BwE) <br>[Link to datasheet](https://www.sunon.com/PROSEARCH_FILES/(D04111000G-02)-2.pdf)| - Operating Temperature <br> - Not a large footprint <br> - Low cost and quiet <br> - Lightweight | - Relatively high voltage pull <br> - 12 volts |

Choice: HA40101V4-1000U-A99
Rationale: The HA40101V4-1000U-A99 fan is just the right size. The operating voltage is high enough to work for our purposes for higher fan speeds, and it is not too expensive. It is quiet, while operating and lightweight. 


Switching Voltage Regulator (Andrew Headley)

| Solution | Pros | Cons |
|----------|------|------|
| <img src="https://github.com/VictorChvz885/VictorChvz885.github.io/blob/main/296~4200577-4~KTT~5.jpg?raw=true" alt="Alt Text" width="125" height="150"> <br>LM2575HVS <br>[Link to product](https://www.digikey.com/en/products/detail/texas-instruments/LM2575HVS-3-3-NOPB/363637) <br>[Link to datasheet](https://www.ti.com/general/docs/suppproductinfo.tsp?distId=10&gotoUrl=https%3A%2F%2Fwww.ti.com%2Flit%2Fgpn%2Flm2575-n)| - Output voltage (3.3v) <br> - Simple example circuit <br> - Wide input voltage range <br> - 1A output current | - Circuit protection is needed <br> - Outputs a set voltage <br> - No customization <br> - Only a buck converter |

Choice: LM2575HVS
Rationale: Even though the output voltage is fixed, having a simpler example circuit to follow reduces the points of failure so debugging and repairs can be addressed more quickly. Additionally, the wide voltage input will allow the team to offset any disadvantages from the LM2575 being only a buck converter. There is also a set 5V output version that can be used for powering other subsystems.

Temperature Sensor (Victor Chavez)

| Solution | Pros | Cons |
|----------|------|------|
| <img src="https://github.com/VictorChvz885/VictorChvz885.github.io/blob/main/150~C04-057~SN,OA~8.jpg?raw=true" alt="Alt Text" width="125" height="150"> <br>TCN75AVOA713 <br>[Link to product](https://www.digikey.com/en/products/detail/microchip-technology/TCN75AVOA713/739450) <br>[Link to datasheet](https://ww1.microchip.com/downloads/en/DeviceDoc/21935D.pdf)| - Temperature to digital converter <br> - Measure from -40°C to +125°C <br> - I2C™ Compatible <br> - Alert pin and configurable address pins | - Low measuring range <br> - Large IC size |

Choice: TCN75AVOA713 
Rationale: Microchip’s TCN75AVOA13 might have a smaller range in terms of measuring temperature, however, the smaller accuracy error makes it more suitable for our application. We also won’t be needing the extra -15 degrees that the DS1775R+T&R offers as most freezers operate at around 0 to 10 degrees fahrenheit. Also the TCN75AVOA13 has a configurable address which will be useful since we are connecting four devices into one I2C serial bus. The bigger footprint also will make it easier to work with during the PCB assembly process. Lastly the TCN75AVOA13 has configurable alert pins if the temperature it senses goes above or below its set threshold, which is also configurable.

Humidity Sensor (Derek Schow)

| Solution | Pros | Cons |
|----------|------|------|
| <img src="https://github.com/VictorChvz885/VictorChvz885.github.io/blob/main/Pkg%20SDE06A%20(1).jpg?raw=true" alt="Alt Text" width="125" height="150"> <br>HDC2080DMBR <br>[Link to product](https://www.digikey.com/en/products/detail/texas-instruments/HDC2080DMBR/9692560) <br>[Link to datasheet](https://www.ti.com/lit/ds/symlink/hdc2080.pdf?HQS=dis-dk-null-digikeymode-dsf-pf-null-wwe&ts=1726699942311&ref_url=https%253A%252F%252Fwww.ti.com%252Fgeneral%252Fdocs%252Fsuppproductinfo.tsp%253FdistId%253D10%2526gotoUrl%253Dhttps%253A%252F%252Fwww.ti.com%252Flit%252Fgpn%252Fhdc2080)| - I2C Output <br> - Interrupt Capability <br> - Larger size 3.1mm x 3.1mm <br> - Wide Supply voltage 1.62V - 3.6V <br> - Least expensive <br> - Surface Mount | - More complicated to set up - 6 pins <br> - Less accurate +/- 2% RH |

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

<img src="https://github.com/Rockerfrog/Rockerfrog.github.io/blob/main/Team%20Schematic.jpg?raw=true" alt="Alt Text" width="1146" height="593"> 

### **Voltage Regulator Assembly**

<img src="https://github.com/Rockerfrog/Rockerfrog.github.io/blob/main/voltage%20regulator%20assembly.jpg?raw=true" alt="Alt Text" width="1113" height="538"> 

### **Microcontroller Assembly**

<img src="https://github.com/Rockerfrog/Rockerfrog.github.io/blob/main/microcontroller%20assembly.jpg?raw=true" alt="Alt Text" width="836" height="528"> 

### **Temperature Sensor Assembly**

<img src="https://github.com/Rockerfrog/Rockerfrog.github.io/blob/main/temperature%20sensor%20assembly.jpg?raw=true" alt="Alt Text" width="858" height="472"> 

### **Humidity Sensor Assembly**

<img src="https://github.com/Rockerfrog/Rockerfrog.github.io/blob/main/humidity%20sensor%20assembly.jpg?raw=true" alt="Alt Text" width="758" height="500"> 

### **Motor Driver / Motor Assembly**

<img src="https://github.com/Rockerfrog/Rockerfrog.github.io/blob/main/motor%20driver%20assembly.jpg?raw=true" alt="Alt Text" width="585" height="532"> 

### **Functionality/Decision Making**

The team schematic displays four subsystems which include two sensors, an actuator, and a microcontroller. Starting at the top is the schematic showing the wiring for the voltage regulator and microcontroller. Included are flags on the I2C and SCL pins which is where the sensor and motor subsystems will connect to. Scattered through many pins are capacitors to reduce noise and help with voltage maintenance. To the right of the microcontroller schematic is the temperature sensor schematic which includes a simple temperature sensor and three pull-up resistors on the digital communication lines. Below that is the humidity sensor which has a similar layout to the sensor except it contains LEDs for debugging purposes. Lastly is the motor schematic which contains a motor fan and a motor driver and like the sensors the main connections to the microcontroller are connected to the communication pins. 

For the schematics the team deliberately created simple circuits for each of their components. The purpose of keeping each schematic simple was due to the fact that each subsystem was only to perform one function but it needed to perform said function well. For example the temperature circuit is set to only sense temperature although it could also be configured to sense humidity. However, since we needed to have two sensors, adding a humidity sensor made more sense. This would also make creating the PCB a lot more simpler and would allow for easier debugging. Having smaller circuits would also reduce the footprint of the PCB which is beneficial for our product as the team wants to make it portable so it can be moved to all areas of the freezer.


## **Software Proposal**

![image](https://raw.githubusercontent.com/schowderek/schowderek.github.io/refs/heads/main/Software-Proposal-Team305(1).drawio.svg)

### **Functionality/Decision Making**

This diagram displays the logical behavior of the software in our microcontroller for this project. The five key components include the temperature sensor, humidity sensor, fans, display, and the wifi module. The temperature and humidity sensors work in tandem to periodically collect data from inside the freezer. The microcontroller requests this data at set intervals, analyzing the conditions to determine whether the humidity levels are too high in relation to the current temperature. If the humidity exceeds the threshold, the software triggers the fan to circulate cold air within the freezer. This forms the core logic of the regulator’s functionality. 

Additionally, the system’s display and communication features, the OLED screen built into the ESP32 module provides real-time updates on the temperature and humidity inside the freezer, giving users immediate visual feedback. At the same time, the WiFi module transmits this data to the user’s mobile application, allowing remote data collection on the freezer conditions and alerts the user if needed. 

## **System Verification Table**
<img width="553" alt="image" src="https://github.com/user-attachments/assets/d3ec9b97-e81b-4f0a-9130-6db59561ca3e">


## **Appendix A: Team Organization:**

### **Communication Channels & Procedures**

| Name | 1st Choice of Communication | 2nd Choice of Communication | 3rd Choice of Communication |
|------|-----------------------------|-----------------------------|-----------------------------|
|Victor Chavez|Discord: G0G0         |Text: (928)-271-9230         |Email: vchave22@asu.edu      |
|Derek Schow|Text: (480)-589-0978    |Discord: pretty_cool_bananas |Email: dschow@asu.edu        |
|Scott Hardman|Discord: rockerfrog   |Text: (480)-322-5623         |Email: sahardma@asu.edu      |
|Andrew Headley|Discord: LittleSurvey|Text: (770)-825-6299         |Email: aheadle2@asu.edu      |

### **Meeting Schedule & Coordination**

![image](https://github.com/user-attachments/assets/5f508e57-867d-42f2-a497-bb3e27d5bac4)


### Weekly Meeting Procedure:



1. **What method will you use to remind yourselves of meetings?** We will use our group chat on Discord to remind each other of meetings and stay up to date regarding team assignments. The meeting leader will also be following a google calendar with important due dates that will be shared with the team. 
2. **How will your team go about changing or adding meeting times?** We will meet collectively and decide which times work best for the group. This can be done either through a virtual Zoom call or in-person meeting.
3. **What's the preferred format for meetings (face-to-face or virtually)?** Both formats are equally preferred; it's a matter of what seems the most efficient. For hands-on work we will meet face to face, for writing assignments virtual meetups will suffice. 
4. **Are there any other procedures that your team feels are necessary?** No other procedures are needed for the team.

### **Roles & Responsibilities**

|Role       |Description                |Name                |
|-----------|---------------------------|--------------------|
|Meeting Leader|Schedules team meetings, creates and distributes an agenda for each meeting, and runs each meeting. Outlines possible topics for each meeting and task that must be accomplished.|Victor Chavez|
|Meeting Recorder|Takes minutes of each team meeting, including attendance, and records action items and to whom they are assigned.|Andrew Headley|
|Assignment Leader|Coordinates the team's work on a given assignment to Canvas before the due date. Also performs the final overview before the assignment is turned in.|Scott Hardman|
|Project Monitor|Tracks the team's progress relative to the overarching project schedule and keeps team members apprised of deadlines and project status.|Derek Schow|

1. **How often will you change project roles?** Every month there will be a role change, this will allow for everyone to experience each role once. 
2. **How will you decide who is assigned to each role?** Understanding what goals need to be met will drive the team's decision making on who gets what role and during what month, each member can only take on a role once.
3. **How will team members help one another meet their responsibilities?** Constant communication with one another will allow the team to come up with plans to tackle responsibilities. This means each member will always be relaying to the team what they are working on, when they are working on it, and how they will go about tackling their problem. This transparency allows everyone to be in the loop and help will be there if a problem arises. 
4. **How will you identify and respond to situations in which the team must adjust roles and responsibilities?** The team will conduct a team meeting virtually and will go over which roles will be changed.** **
5. **How will you track the team activities and milestones?** Through the use of a Gantt chart the team will be able to plan out a roadmap all the way to our functional prototype.
6. **How will you assign technical responsibilities to the team members?** As a team we will discuss what is the best possible course to take so that each member is assigned a technical responsibility that they are best suited to take on. 

### **Team Coordination and Accountability**

Each team member will be notified by the assignment leader before submitting an assignment via the group text and will seek approval from each of the other team members before submitting. The same will be true with the team’s design review. In the case that a team member doesn’t have the knowledge to complete an assignment, the other team members will explain and clarify the necessary information to solve the problem until they can solve it. Transparency is something that will be encouraged in our meetings and other communication modes. If for whatever reason one team member can not complete their assigned task the remaining group members will work on the missed task together. The teammate that missed did not do their task will get warned then referred to the professor if it happens again. To make sure everyone is held accountable and each team member has to report to the group chat when they are going to work on the assignment at the time. After they have completed their portion they must again report the changes and updates they made during their time working on the assignment. 

### **Conflict Recognition and Resolution**

In the case that some contribution or assignment is missed, the group will talk at the weekly meeting and discuss what can be done moving forward to resolve the problem and how to improve for later. Each team member is responsible for their portion of the project and is accountable for the expectations laid out in the charter. If a conflict arises, it should be recognized by the involved parties and worked out together as a team. A team controversy is normal and should be discussed openly to determine the best option for the project goals. If a solution is not found in a timely manner the team has agreed on a votes based system when regarding decision making or differing opinions. In the case that a specific team member is not performing all of the necessary work, the group will try to resolve the issue amongst themselves during the group meetings as well as help them to improve. If a team member repeatedly fails to meet the expectations, intervention by the professor will be needed. A pink slip will be given to them with consequences to be determined on a case-by-case basis by the professor.

## **Appendix B: User Needs, Benchmarking, Requirements:**

### Voice of Customer Benchmarking

#### Product 1: Embr Wave Cooling Bracelet

![image](https://github.com/user-attachments/assets/574711ba-3d40-4db4-a4d5-fe8c69550594)


* Search Keywords & Results Link
    * Keyword: Thermal regulation devices

        Results: [Link](https://www.google.com/search?q=temperature+regulation+devices&rlz=1C1VDKB_enUS1096US1096&oq=temperature+&gs_lcrp=EgZjaHJvbWUqBggCEEUYOzIGCAAQRRg5MgoIARAAGLEDGIAEMgYIAhBFGDsyBwgDEAAYgAQyBwgEEAAYgAQyDQgFEAAYgwEYsQMYgAQyDQgGEAAYsQMYyQMYgAQyBwgHEAAYgAQyBwgIEAAYgAQyBwgJEAAYgATSAQkyMjAxOWowajeoAgiwAgE&sourceid=chrome&ie=UTF-8)

        Amazon: [Link](https://www.amazon.com/Embr-Wave-Thermal-Wristband-Rechargeable/dp/B09KCPGWK7/ref=sr_1_1_sspa?crid=32AX188L4TT7&dib=eyJ2IjoiMSJ9._3W9Lkalp7oKFyHKN1nYY-zAwRQagX-HyMN_0eJl5Yd6Vsw57-4fhpRABuJn1xHDQ5S0ZIaPMtuNXmPCBJNCCN2ckahZkQUEZjx2ML4vHOK5pvGfVtFm7DnE_b6wvfGaMWBVrKxgHdgETOy5TpyCqf4M7tUAQHG4MBPpe-lIr2AVQ52Wd-nzqMcIyg0Us-wr7DpBBQXLJ73JO-pFy5lEgUI3jVkeGJDy8Bn12wBTTm7Psh4h1qvG0DnvxQIEWt7B1JCwjI_JbwDQK-T0Z-v9iGssPoOtbiqoWV3x-gD50Wk.Dm5fMDUTDT0F9x8Pzbsjb8IQjcM70V2I_MuRksEoKc8&dib_tag=se&keywords=embr%2Bwave&qid=1725470905&sprefix=embr%2Bwave%2Caps%2C127&sr=8-1-spons&sp_csd=d2lkZ2V0TmFtZT1zcF9hdGY&th=1)

* Positive Statements
    * “App allows me to customize my settings more than I thought possible”; I cannot properly regulate my body temperature so this thing is a godsend.”
    * “I wear it to bed and all day”; “It did take a couple of weeks to get use[d] to it.”
    * “It’s like holding a tiny heating pad”; “It’s really comfortable. I often forget I have it on.”
* Negative Statements
    * “Cooling is not cold enough nor long enough”; “Not super comfortable”; “Hard to keep in contact with your body.”
    *  “Great the first few days, but started overheating in sleep mode”; “Worked better if not worn consistently, but that defeats the purpose.”
    * “By the time the watch started to do what it needed, the hot flash was done”; “The device got hot after use”; “The product is used for reactive purposes only.”
* User Needs Statements
    * The product needs to be comfortable to wear (explicit)
    * The product needs to be capable of heating and cooling (latent)
    * The product needs to perform its function in a reasonable amount of time (latent)
    * In performing its function, the device needs to not actively make the problem worse (latent)
    * The product needs to be intuitive to operate (latent)
    * The product needs to be able to operate when the user needs it (latent)
    * The product should be able to operate in everyday conditions (latent)

#### Product 2: ThermoPro TP50 

![image](https://github.com/user-attachments/assets/dbf4751b-fba8-49f8-9b30-85e3d740837c)


* Search Keywords & Results Link
    * Keyword: Temperature and humidity product

        Results: [Link](https://www.google.com/search?q=Temperature+and+humidity+product&rlz=1C1ONGR_enUS1093US1094&oq=Temperature+and+humidity+product&gs_lcrp=EgZjaHJvbWUyBggAEEUYOTIKCAEQABgPGBYYHjIICAIQABgWGB4yDQgDEAAYhgMYgAQYigUyDQgEEAAYhgMYgAQYigUyDQgFEAAYhgMYgAQYigUyDQgGEAAYhgMYgAQYigUyCggHEAAYgAQYogQyCggIEAAYgAQYogQyCggJEAAYgAQYogTSAQg2MDk4ajBqN6gCALACAA&sourceid=chrome&ie=UTF-8) 


        Amazon: [Link](https://www.amazon.com/ThermoPro-TP50-Digital-Thermometer-Temperature/dp/B01H1R0K68/ref=asc_df_B01H1R0K68/?tag=hyprod-20&linkCode=df0&hvadid=692875362841&hvpos=&hvnetw=g&hvrand=6606611843919647117&hvpone=&hvptwo=&hvqmt=&hvdev=c&hvdvcmdl=&hvlocint=&hvlocphy=9030037&hvtargid=pla-2281435180498&mcid=45aacced7c083692b216ae98a74f0b97&hvocijid=6606611843919647117-B01H1R0K68-&hvexpln=73&th=1) 

* Positive Statements
    * “ This is a great reliable product. Perfect for our baby's room to make sure the temperature is good. Seems very accurate compared to our other readers.”
    * “Good value, and easy to use. Just put in the battery and press the button to set F or C. Just remove the barely able to see plastic on the battery.”
    * “I needed these for my basement as it seems damp mostly in summer, shows the humidity, temp and seems spot on with my dehumidifier.”
* Negative Statements
    * “Ordered on June 12th, received by June 14th. Fast forward two months and 5 days later - it is broken. The screen won't read the temperature anymore and you can only partially see/read the humidity.”
    * “These say they refresh every 10 minutes - they do not, it takes around an hour…even [in] the most drastically different spaces.”
    * “ I checked this with a 32% calibration kit and it was off by 10%, which is 3 times what it claims.”
* User Needs Statements
    * The product needs to display humidity and temperature of the environment (explicit)
    * The product needs to be accurate and reliable (explicit)
    * The product needs be easy to use (explicit)
    * The product needs to be able to display and read data fast (explicit)
    * The product needs to durable and long lasting (explicit)
    * The product needs to come with working batteries (explicit)
    * The product needs to be able to be recalibrated (latent)
    * The product needs to come in different sizes (latent)
    * The product needs to be portable (latent)
    * The product needs to be ready to use little to no set (latent)
    * The product needs to be able to measure air quality (latent)
    * The product needs to be able to withstand extreme high or low temperatures (latent)

#### Product 3: Anova Culinary Sous Vide Precision Cooker


![image](https://github.com/user-attachments/assets/eaa4f939-e9ce-4780-a019-973eea654a41)


* Search Keywords & Results Link
    * Keywords: Temperature and humidity cooking product
    * Results: [Link ](https://www.google.com/search?q=Temperature+and+humidity+cooking+product&sca_esv=bb2e894607922a5f&rlz=1C1ONGR_enUS1093US1094&ei=AdHYZuulEZzgkPIP767q-QY&ved=0ahUKEwirqqfZnaqIAxUcMEQIHW-XOm8Q4dUDCBA&uact=5&oq=Temperature+and+humidity+cooking+product&gs_lp=Egxnd3Mtd2l6LXNlcnAiKFRlbXBlcmF0dXJlIGFuZCBodW1pZGl0eSBjb29raW5nIHByb2R1Y3QyCBAhGKABGMMESPUdUMsKWO0acAJ4AZABAJgBb6ABuwiqAQQxMi4xuAEDyAEA-AEBmAIPoALXCMICChAAGLADGNYEGEfCAggQABgHGAgYHsICCBAAGAgYDRgewgILEAAYgAQYhgMYigXCAggQABiABBiiBMICCBAAGKIEGIkFwgIKECEYoAEYwwQYCsICBhAAGAgYHpgDAIgGAZAGCJIHBDE0LjGgB88y&sclient=gws-wiz-serp) 
    * Amazon: [Link](https://www.amazon.com/Anova-Precision-Cooker-Nano-3-0/dp/B0BQ93XGWC/ref=asc_df_B0BQ93XGWC/?tag=hyprod-20&linkCode=df0&hvadid=692875362841&hvpos=&hvnetw=g&hvrand=9096130086006137299&hvpone=&hvptwo=&hvqmt=&hvdev=c&hvdvcmdl=&hvlocint=&hvlocphy=9030037&hvtargid=pla-2281435183658&mcid=25ba4bf92487332180b7a305bc03d900&hvocijid=9096130086006137299-B0BQ93XGWC-&hvexpln=73&th=1) 
* Positive Statements
    * “Now I cook it using Sous Vide method. Very pleased with quality and price. Heats water quickly. Steak internal temp is a perfect 130 degrees. Doesn’t get overcooked.”
    * “Holds the water at the desired temperature as long as you want it to cook your product. I used the cooker from 30 minutes to 14 hours with no variation. My sous vide has been perfect each time.”
    * “Love that it is Bluetooth connectivity which I can do from my phone. Love the app. Love that it is portable, sturdy clamp to attach to pot or container and love its sleek design.”
* Negative Statements
    * “ The bluetooth barely works; most of the times I enter the app I have to restart the app and suddenly the connection works again.”
    * “Temp was stuck on 37.2 right out of the box which I researched as a common problem going all the way back to 2017. The water just got super hot, it couldn't sense how hot it was so the timer never started.”
    * “I set the proper temp. for pork chops 140 fahrenheit, inserted the pork chops and in 30 minutes the water was at a rapid boil temp was 200 degrees . Can't control water temp. Also tried 60 celsius with the same result.”
* User Needs Statements
    * The product needs to be able to heat up water quickly. (explicit)
    * The product needs to be regulate water temperature (explicit)
    * The product needs to be able to connect to mobile device via bluetooth or wifi (explicit)
    * The product needs to be user friendly (explicit)
    * The product needs to be cost effective (explicit)
    * The product needs to be adjustable so it can be used for multiple tubs (explicit)
    * The product needs to be serviceable by the user (latent)
    * The product needs to have troubleshooting capabilities for mobile connectivity (latent)
    * The product needs to be small enough to be able to be stored and moved (latent)
    * The product needs to have enough power to produce a decent amount of heat to warm up the water (latent)
    * The product needs to be able to have properly working temperature sensors (latent)
    * The product needs to be light enough to be able to use a handheld cooking device (latent)

#### Product 4: PitmasterIQ IQ110 BBQ Temperature Regulator Kit W/ Standard Pit Adapter

![image](https://github.com/user-attachments/assets/8fc9ebcf-0069-419d-8300-7c81e410496e)


* Search Keywords & Results Link
    * Keywords: BBQ Temperature Regulator
    * Results: [Link](https://www.google.com/search?q=bbq+temperature+regulator&sca_esv=bb2e894607922a5f&ei=4tXYZt--DM6dkPIP6s_t8Q8&ved=0ahUKEwjft-usoqqIAxXODkQIHepnO_4Q4dUDCBA&uact=5&oq=bbq+temperature+regulator&gs_lp=Egxnd3Mtd2l6LXNlcnAiGWJicSB0ZW1wZXJhdHVyZSByZWd1bGF0b3IyBRAAGIAEMgYQABgWGB4yBhAAGBYYHjIGEAAYFhgeMgYQABgWGB4yBhAAGBYYHjILEAAYgAQYhgMYigUyCxAAGIAEGIYDGIoFMggQABiABBiiBEjjC1CsAljcCnABeAGQAQCYAWegAYYGqgEDOC4xuAEDyAEA-AEBmAIKoAKXBsICChAAGLADGNYEGEfCAgsQABiABBiRAhiKBcICCBAAGBYYHhgPmAMAiAYBkAYIkgcDOS4xoAfNQA&sclient=gws-wiz-serp#oshopproduct=gid:5610788453999457953,mid:576462318513014143,oid:13910712694354946440,iid:14458595838322960801,rds:UENfNTYxMDc4ODQ1Mzk5OTQ1Nzk1M3xQUk9EX1BDXzU2MTA3ODg0NTM5OTk0NTc5NTM%3D,pvt:hg,pvo:3&oshop=apv&pvs=0)
    * Amazon: [Link](https://www.amazon.com/PitmasterIQ-Temperature-Regulator-Standard-Mountain/dp/B00A7F1B60?source=ps-sl-shoppingads-lpcontext&ref_=fplfs&psc=1&smid=A2YDP6S0Y3DD6Y)
* Positive Statements
    * “The user was impressed with the IQ110 on their Weber, finding it very easy to use and effective at maintaining a consistent low and slow temperature for 8 hours using only a handful of briquettes. They added a single chunk of apple wood for smoke, which proved sufficient as the smoke was well-contained.” 5 Star Review
    * “The IQ110 provided essential guidance for managing charcoal quantity and setup issues, making it a valuable tool for effective temperature control during long, slow cooks.” 4 Star Review
    * “The user used the IQ110 twice on their Weber 22.5 kettle and found it performed exactly as hoped, without encountering any of the negative issues reported online.” 5 Star Review
* Negative Statements
    * “The user struggled with the device on their PBC for 2.5 years, finding the concept promising but ultimately disappointing as it frequently malfunctioned despite numerous resets and proper storage.” 1 Star Review
    * “The user bought a temperature control unit for their WSM 18.5 smoker to manage temperatures during long smokes, finding it generally effective but with a 15°F temperature variance compared to their digital probes. After a year of use, the unit failed by getting stuck on "lid open" status and not blowing air properly, despite careful maintenance. Frustrated with its reliability, the user decided to replace it with a Flame Boss FB200 for its WiFi capabilities, opting not to risk another unit failing in a year.” 1 Star Review
    * “The user is struggling to position the temperature probe accurately with their Vision Kamado Classic smoker/grill after four uses, trying various routes and placements without success. They are concerned that the probe might be damaged despite its appearance being unchanged and are comparing its readings with a reliable grill thermometer and another thermometer placed in different spots. They plan to update their review once they find a reliable method for achieving accurate temperature readings.” 3 Star Review
* User Needs Statements
    * Ease of Use: The device should be straightforward to use and simple to set up and operate. (explicit)
    * Reliable Temperature Control: It must effectively maintain a constant temperature for extended periods to ensure reliable cooking results. \
(latent)
    * Effective Smoke Management: It should allow optimal smoke generation for longer slow cook sessions. (latent)
    * Durability and Longevity: The device must be robust enough to withstand regular use and minimize risk of malfunction. (explicit)
    * Accurate Temperature Sensing: It should offer precise temperature readings. (latent)
    * Adaptability to Various Grills: It should be versatile enough to work with different types of grills. (explicit)
    * The device offers WiFi capabilities for remote monitoring and control. (explicit)
    * The temperature control device can handle various weather conditions without compromising performance. (latent)
    * The temperature control device must integrate well with digital probes and maintain accurate temperature readings. (latent)
    * The probe is easy to position accurately and provides consistent, reliable readings. (latent)
    * The temperature control device offers value for money, with performance matching or exceeding expectations. (explicit)
    * The device does not require frequent troubleshooting or adjustments. (latent)

#### Product 5: YoLink Smart Wireless Temperature & Humidity Sensor

![images](https://github.com/user-attachments/assets/350bc87c-f78a-42b8-b267-55e29f86da54)


* Search Keywords & Results Link’
    * Keywords: 
        * Cooking Temperature sensor
        * Temperature and humidity sensor cooking
        * Freezer Temperature and Humidity sensor
    * Results: [Link](https://www.google.com/search?q=Freezer+Temperature+and+Humidity+sensor&rlz=1C1ONGR_enUS1093US1094&oq=Freezer+Temperature+and+Humidity+sensor&gs_lcrp=EgZjaHJvbWUyBggAEEUYOTIHCAEQIRigATIHCAIQIRigATIHCAMQIRigATIHCAQQIRigATIHCAUQIRigATIHCAYQIRirAtIBCDExMzlqMGo3qAIAsAIA&sourceid=chrome&ie=UTF-8) 
    * Amazon: [Link](https://a.co/d/gUVmdln) 
* Positive Statements
    * “The battery lasts forever. The sensor is extremely accurate. The range is great. The app is great with customizable alerts. Pairing takes literally one second. Everything about these just works.”
    * “ Recently, I received an alert that the temperature in one of the freezers had risen beyond the range I had set. That alert may well have saved a freezer full of food.”
    * “I have had absolutely no problems. The temperatures recorded appear very accurate when compared with both a mechanical thermometer and an electronic LCD thermometer.”
    * Tracks data to better monitor temperature fluctuations over time
* Negative Statements
    * “Impossible to connect to perfectly good wifi.”
    * “I bought this sensor to automatically operate a smart switch through alexa. However, alexa incorrectly recognizes the high and low humidity sensors as motion sensors. Therefore, no automation can be created to achieve what I bought this for.”
    * “ since my freezers have what seem to be heavier steel on the doors and sides than most of the competing brands I examined when I purchased them. Since the devices communicate by radio, one presumes the signal isn't strong enough to penetrate all refrigerator or freezer doors.”
    * “As you can see this device does not read accurate. Even after calibrating it in the app, it’s all over the place.”
    * Batteries need to be able to withstand cold temperatures of freezer
* User Needs Statements
    * Must have a long battery life (explicit)
    * The temperature sensing must be accurate (explicit)
    * Wireless Connections must have a good range (explicit)
    * The device must be easy and fast to install (explicit)
    * The device must let users know when it detects an issue in temperature (explicit)
    * The range of acceptable temperatures must be configurable by the user (latent)
    * The temperature measurement must be the same as other temperature sensors (latent)
    * The product must keep a log of temperature data over time (explicit)
    * Temperature data must be accessible to user in an intuitive way (latent)
    * The product must be easy to connect wirelessly without technical knowledge of wireless communication (latent)
    * The device and power source must be able to function properly in the temperature conditions necessary for the use case (latent)
    * Must be able to utilize all types of sensors included (Temperature, humidity, pressure etc.) (explicit)
    * The device must be able to interface with existing automation systems if desired (explicit)
    * The device must be able to wirelessly transmit reliably in the situation in which it will be used (IE inside freezer, inside BBQ) (latent)
    * The sensors must be able to be calibrated by the user to ensure accuracy (latent)
    * The device must be sold as one complete unit (latent)
    * The device must be made of environmentally responsible materials (latent)
    * The device must be energy efficient (latent)
    * The device must follow rules and regulations for wireless communication (latent)
    * The device must be as low cost as possible (latent)
    * The device must be food safe when it comes in contact with food (latent)
    * The device must take up as little space as possible (latent)
    * The device must display temperature in both Fahrenheit and Celsius (latent)
    * The device needs to be able to run for an extended time without user intervention (latent)


### Consolidate Statements:

![image](https://github.com/user-attachments/assets/e8ece65a-07af-4909-b5c6-58d7f6bde9fa)


### Group Statements:

![image](https://github.com/user-attachments/assets/391cbf03-0ce0-4a3b-bf0d-2054673f2ff3)


### Rank Needs:

#### Ranking system:

*** Most important

**  Somewhat important

\*   Less important

**Cost Effectiveness: The product must be cost effective and provide value for the cost.**

* The temperature control device offers value for money, with performance matching or exceeding expectations. ***
* The device must have a long battery life ***
* The product needs to come with working batteries **
* The device must be energy efficient **
* The device must be sold as one standalone unit *
* The device must be as low cost as possible *

**User Friendly: The product must provide users with a positive, smooth and safe experience**

* The product must be easy and fast to install/set up ***
* The product needs to be intuitive to operate ***
* The device needs to be able to run for an extended time without user intervention ***
* The product must alert users if there is a problem with temperature ***
* The device does not require frequent troubleshooting or adjustments. **
* The product must provide information to the user in multiple ways **
* The device must be food safe where it comes in contact with food **
* The probe should be easy to place/install **
* Temperature data must be accessible to user in an intuitive way **
* The device must take up as little space as possible **
* The sensors must be able to be calibrated by the user to ensure accuracy **
* The product needs to be portable **
* Must be able to display temperature in both F and C *
* The product needs to be able to be recalibrated *
* The probe is easy to position accurately and provides consistent, reliable readings. *
* The device must be made of environmentally responsible materials *
* The product needs to be comfortable to wear *
* The product needs to come in different sizes*

**Reliability: The product needs to perform its function consistently and correctly.**

* The product needs to be accurate and reliable ***
* The product needs to durable and long lasting ***
* It should offer precise temperature readings.***
* Temperature control devices can handle various weather conditions without compromising performance. ***
* Must be able to utilize all types of sensors included (Temperature, humidity, pressure etc.)***
* Temperature sensing must be consistent and reliable ***
* The product needs to be able to operate when the user needs it ***
* The device provides consistent readings over time ***
* The product needs to perform its function in a reasonable amount of time **
* The device does not require frequent troubleshooting or adjustments. **
* The product should be able to operate in everyday conditions **
* The product needs to be ready to use **
* The product needs to be able to display and read data fast **
* The device and power source must be able to function properly in the temperature conditions necessary for the use case **
* The product needs to be able to withstand extreme high or low temperatures **
* It must effectively maintain a constant temperature for extended periods to ensure reliable cooking results. **
* The temperature control device must integrate well with digital probes and maintain accurate temperature readings. **
* The product needs to be able to measure air quality *
* The product needs to be capable of heating and cooling *
* It should allow optimal smoke generation for longer slow cook sessions. *
* In performing its function, the device needs to not actively make the problem worse *

**Wireless Connectability: The product needs to have the ability to connect to existing wireless networks and other systems.**

* The device must follow rules and regulations for wireless communication ***
* The product needs to display humidity and temperature of the environment ***
* The product must keep a log of temperature data over time ***
* The product needs to be able to display and read data quickly ***
* The device must be able to wirelessly transmit reliably in the situation in which it will be used (IE inside freezer, inside BBQ) ***
* The device must offer WiFi capabilities for remote monitoring and control. ***
* Wireless connection must have good range **
* The range of acceptable temperatures must be configurable by the user **
* The product must be easy to connect wirelessly without technical knowledge of wireless communication **
* The device must be able to interface with existing automation systems if desired *
* The product must be compatible with other commonly available products on the market. *

### Develop Requirements

#### Introduction

For this semester’s EGR 314 project class section, a device that uses two forms of environmental sensing that is then used to influence the control of a motor. To this end, Team 305 is looking at devices that manage temperatures based on external factors like temperature, humidity, and atmospheric pressure. The actuation requirement would then be fulfilled by a motor powering a mechanism that adjusts the temperature as needed.

#### Objectives

The team aims to achieve the project requirements by performing market research, developing the skills necessary to implement sensing and actuation, and implement the chosen solution as a prototype. The end product will be something from which each team member will take away a valuable skill and potentially bring the prototype to market. With the appropriate market research, the team hopes to create something novel and useful that consumers would consider a marked improvement over other products.

#### Stakeholders

* Average consumers - End users who could use a temperature control device for cooking, managing medical conditions, etc.
* Manufacturers - End users who could use a temperature control device on an industrial scale.
* Antiquities preservationists - End users who could use a temperature control device to manage environmental factors
* Food industry - End users who could use a temperature control device to expand their business

#### Use Cases

* Use Case #1 - Average Consumer
    * Karen purchased the device via Amazon and uses it everyday to bring new cooking techniques to her home cooking. Being able to control the temperature of her food as it cooks helps her to achieve new flavor profiles.
* Use Case #2 - Manufacturers
    * Mr. Winwood purchased an industrial version of the device in order to regulate the quality of the food his factory puts out. The device provides better data logging and thermal control so that his food more frequently meets quality standards.

#### Aspects

* Hardware/Product Design
    * The device will be noticeably different from existing products on the market.
    * The device will be made using resources available to ASU students.
    * The device will conform to size restrictions provided by the course project requirements.
* Software/Functionality
    * The device will function using a PIC microcontroller and serial sensors to control the movement of a motor via a motor controller.
    * The device will communicate with an online server via an ESP32 module.
* Interactivity & User Experience
    * The device will work with the user's devices.
    * The device will operate quickly to meet the user's needs.
* Customization
    * The device will allow users to set temperature goals.
    * The device will allow users to set behaviors based on different environmental conditions.
* Manufacturing
    * The cost of each subsystem will fall within the restrictions provided by the course project description.
    * The device will be manufactured in a way that debugging/maintenance will be relatively easy and straightforward.
* Safety
    * The device will conform to the appropriate safety standards.
    * The device will not harm the user in any way during operation.

## **Appendix C: Design Ideation**

### **Process:**

For the design ideation process the group began by brainstorming ideas for potential devices that could be used to monitor and somehow regulate temperature and humidity. The group encouraged each other to throw out any ideas. Ideas ranged from features we wanted to see, to potential use cases, and even extra components that we could throw in to complement the sensors and actuators that we were required to use. All the ideas were thrown onto the jamboards.

At the end of the brainstorming session we were able to come up with one hundred notes of ideas and features. We then used these ideas and came up with three concept designs. Two of which assist with monitoring the environment in a cooking setting and the third has to do with monitoring underground environments such as caves. Using Dall-E 3 we generated three images of our concepts along with a description of features that accompany each concept. Below are screenshots of the jamboards and images of each concept.

### **Jamboard 1 (Ideas 1-50):**

![image](https://github.com/user-attachments/assets/30bc1b9c-4596-4022-8370-f7b314878fe1)


### **Jamboard 2 (Ideas (51-100)**

![image](https://github.com/user-attachments/assets/1f2e3ad6-c6fc-4ebe-aa07-9ef97fb36545)


## **Grouping of best ideas and Ranking concepts**

![image](https://github.com/user-attachments/assets/69cde01b-afc6-42a0-b54c-7a5cb97fabd4)


## **Concept 1 Freezer Temperature and Humidity regulator:**


![image](https://github.com/user-attachments/assets/d5e1624a-fae7-4bfb-adb6-1ad41c29a5a0)
![image](https://github.com/user-attachments/assets/5502ea41-8668-41e3-a5a2-49fa4cd6fb9a)

**(Image generated with DALL-E AI)**



## **Concept 2 Cave Crawler Scout:**


![image](https://github.com/user-attachments/assets/e27c95ed-7cf2-4278-9806-19c9478fc200)

**(Images generated with DALL-E AI)**



## **Concept 3 Meat Smoker Measuring Device:**


![image](https://github.com/user-attachments/assets/77b32650-6538-456a-9c63-cdff660382da)

**(Image generated with DALL-E AI)**

## **Appendix D: Component Selection**

### **Completed Component Selection Tables**

Motor Driver: (Scott Hardman)

| Solution | Pros | Cons |
|----------|------|------|
| <img src="https://github.com/Rockerfrog/Rockerfrog.github.io/blob/main/620%3B-10SOIC-EP-3%2C9%3B-LK%3B-10.jpg?raw=true" alt="Alt Text" width="125" height="150"> <br>L293DD <br>[Link to product]() <br>[Link to datasheet](https://www.allegromicro.com/-/media/Files/Datasheets/AMT49400-Datasheet.ashx)| - High voltage supply/load <br> - General purpose motor driver<br> - 4.5V-36V <br> - 600mA | - Most expensive option <br> - No built in fault protection |
| <img src="https://github.com/VictorChvz885/VictorChvz885.github.io/blob/main/Scott%202.1.jpg?raw=true" alt="Alt Text" width="125" height="150"><br>IFX9201SGAUMA1 <br>[Link to product](https://www.digikey.com/en/products/detail/infineon-technologies/IFX9201SGAUMA1/5415542) <br>[Link to datasheet](https://www.infineon.com/dgdl/Infineon-IFX9201SG-DS-v01_01-EN.pdf?fileId=5546d4624cb7f111014d2e8916795dea&ack=t)| - High voltage supply/load <br> - General purpose motor driver <br> - 5V-36V<br> - 6 amps<br> - Built in fault protection | - Middle cost option<br> - Large ground plane makes soldering more difficult |
| <img src="https://github.com/VictorChvz885/VictorChvz885.github.io/blob/main/Scott%203.1.jpg?raw=true" alt="Alt Text" width="125" height="150"> <br>TC646BEOA713 <br>[Link to product](https://www.digikey.com/en/products/detail/microchip-technology/TC646BEOA713/9955326?utm_adgroup=&utm_source=google&utm_medium=cpc&utm_campaign=PMax%20Supplier_Focus%20Supplier&utm_term=&utm_content=&utm_id=go_cmp-20243063242_adg-_ad-__dev-c_ext-_prd-9955326_sig-Cj0KCQjw9Km3BhDjARIsAGUb4nyeT5_pXL9PsXoUC6IBdMf3kG0my9ioLBf2w7cxlhfhvE_Ft6ZS6pYaAsB6EALw_wcB&gad_source=1&gclid=Cj0KCQjw9Km3BhDjARIsAGUb4nyeT5_pXL9PsXoUC6IBdMf3kG0my9ioLBf2w7cxlhfhvE_Ft6ZS6pYaAsB6EALw_wcB) <br>[Link to datasheet](https://ww1.microchip.com/downloads/en/DeviceDoc/21755C.pdf)| - Meant for driving fans<br> - Low cost option<br> - Low pin count for easier installation | - Low voltage supply/load<br> - 3V-5.5V<br> - No built in fault protection<br> - No stated output current |

Choice: L293DD
Rationale: The large voltage operating margin and general purpose design makes it the ideal pick for our product because the driver needs to be able to handle up to 24V and it is not too expensive despite this. 

Motor: (Scott Hardman)

| Solution | Pros | Cons |
|----------|------|------|
| <img src="https://github.com/VictorChvz885/VictorChvz885.github.io/blob/main/Scott%201.jpg?raw=true" alt="Alt Text" width="125" height="150"> <br>4468 FAN AXIAL 30X8MM 5VDC<br>[Link to product](https://www.digikey.com/en/products/detail/adafruit-industries-llc/4468/11587354?utm_adgroup=&utm_source=google&utm_medium=cpc&utm_campaign=PMax%20Shopping_Product_Medium%20ROAS%20Categories&utm_term=&utm_content=&utm_id=go_cmp-20223376311_adg-_ad-__dev-c_ext-_prd-11587354_sig-CjwKCAjw0aS3BhA3EiwAKaD2ZQqMSqsdQ4CdTnbOi8NRRPZnsqG5jWqjvZvPzKGZCTCa3Y-oa1mqaRoCkT4QAvD_BwE&gad_source=1&gclid=CjwKCAjw0aS3BhA3EiwAKaD2ZQqMSqsdQ4CdTnbOi8NRRPZnsqG5jWqjvZvPzKGZCTCa3Y-oa1mqaRoCkT4QAvD_BwE) <br>[Link to datasheet](https://mm.digikey.com/Volume0/opasdata/d220001/medias/docus/212/4468_Web.pdf?_gl=1*qlsxtd*_up*MQ..&gclid=CjwKCAjw0aS3BhA3EiwAKaD2ZQqMSqsdQ4CdTnbOi8NRRPZnsqG5jWqjvZvPzKGZCTCa3Y-oa1mqaRoCkT4QAvD_BwE)| - Small Size <br> - Low cost <br> | - No Operating Temperature stated <br> - Low operating voltage 5v <br> - May be too small to be practical <br> - Datasheet doesn’t have a lot of information |
| <img src="https://github.com/VictorChvz885/VictorChvz885.github.io/blob/main/MFG_HA40101V4-1000U-A99%20(1).jpg?raw=true" alt="Alt Text" width="125" height="150"> <br>HA40101V4-1000U-A99 <br>[Link to product](https://www.digikey.com/en/products/detail/sunon-fans/HA40101V4-1000U-A99/6198728?utm_adgroup=&utm_source=google&utm_medium=cpc&utm_campaign=PMax%20Shopping_Product_Medium%20ROAS%20Categories&utm_term=&utm_content=&utm_id=go_cmp-20223376311_adg-_ad-__dev-c_ext-_prd-6198728_sig-CjwKCAjw0aS3BhA3EiwAKaD2ZV4SR-mhshkZJRApqpeEfWNnqg7gYdPNDVAJrWyka_VC8i5g6X8cFhoCoPgQAvD_BwE&gad_source=1&gclid=CjwKCAjw0aS3BhA3EiwAKaD2ZV4SR-mhshkZJRApqpeEfWNnqg7gYdPNDVAJrWyka_VC8i5g6X8cFhoCoPgQAvD_BwE) <br>[Link to datasheet](https://www.sunon.com/PROSEARCH_FILES/(D04111000G-02)-2.pdf)| - Operating Temperature <br> - Not a large footprint <br> - Low cost and quiet<br> - Lightweight | - Relatively high voltage pull <br> - 12 volts |
| <img src="https://github.com/VictorChvz885/VictorChvz885.github.io/blob/main/Scott%202.jpg?raw=true" alt="Alt Text" width="125" height="150"> <br>RBM7530B2FAN BLOWER 75X30MM <br>[Link to product](https://www.digikey.com/en/products/detail/pelonis-technologies,-inc./RBM7530B2/16609370?utm_adgroup=General&utm_source=google&utm_medium=cpc&utm_campaign=Shopping_DK%2BSupplier_Pelonis%20Technologies%2C%20INC.&utm_term=&utm_content=General&utm_id=go_cmp-18024309031_adg-139617000666_ad-616203479477_pla-293946777986_dev-c_ext-_prd-16609370_sig-Cj0KCQjw9Km3BhDjARIsAGUb4nxxVvVf68VIX5wzvaRzQtGaP05Ll08clxhS55jL5dmIhNzn3z3VXJkaAg8JEALw_wcB&gad_source=1&gclid=Cj0KCQjw9Km3BhDjARIsAGUb4nxxVvVf68VIX5wzvaRzQtGaP05Ll08clxhS55jL5dmIhNzn3z3VXJkaAg8JEALw_wcB) <br>[Link to datasheet](https://mm.digikey.com/Volume0/opasdata/d220001/medias/docus/2605/RB7530%20Series.pdf?_gl=1*ey6qgz*_up*MQ..&gclid=Cj0KCQjw9Km3BhDjARIsAGUb4nxxVvVf68VIX5wzvaRzQtGaP05Ll08clxhS55jL5dmIhNzn3z3VXJkaAg8JEALw_wcB)| - High voltage option <br> - 24 volts | - Large Size <br> - Loud <br> - Expensive <br> - Probably heavy, not specified in datasheet <br> |

Choice: HA40101V4-1000U-A99
Rationale: Option 1 is too small, option 3 is too large, and option 2 is just right. The operating voltage is high enough to work for our purposes for higher fan speeds, and it is not too expensive. Option 2 is quiet, while option 3 is very loud. Option 2 is lightweight and small, making for more options for where to place the fan, while option 3 is bulky and probably heavier. 

Switching Voltage Regulator (Andrew Headley)

| Solution | Pros | Cons |
|----------|------|------|
| <img src="https://github.com/VictorChvz885/VictorChvz885.github.io/blob/main/296~4200577-4~KTT~5.jpg?raw=true" alt="Alt Text" width="125" height="150"> <br>LM2575HVS <br>[Link to product](https://www.digikey.com/en/products/detail/texas-instruments/LM2575HVS-3-3-NOPB/363637) <br>[Link to datasheet](https://www.ti.com/general/docs/suppproductinfo.tsp?distId=10&gotoUrl=https%3A%2F%2Fwww.ti.com%2Flit%2Fgpn%2Flm2575-n)| - Output voltage (3.3v) <br> - Simple example circuit <br> - Wide input voltage range <br> - 1A output current | - Circuit protection is needed <br> - Outputs a set voltage <br> - No customization <br> - Only a buck converter |
| <img src="https://github.com/VictorChvz885/VictorChvz885.github.io/blob/main/Andrew%202.jpg?raw=true" alt="Alt Text" width="125" height="150"> <br>LM2675MX<br>[Link to product](https://www.digikey.com/en/products/detail/texas-instruments/LM2675MX-3-3-NOPB/366907) <br>[Link to datasheet](https://www.ti.com/general/docs/suppproductinfo.tsp?distId=10&gotoUrl=https%3A%2F%2Fwww.ti.com%2Flit%2Fgpn%2Flm2675)| - Output voltage (3.3V) <br> - Datasheet has example circuit <br> - Wide input voltage range (6.5V-40V) <br> - 1A output current | - 8 pins to solder <br> - Doesn’t have heastsink <br> - Output voltage is fixed<br> - Only a buck converter |
| <img src="https://github.com/VictorChvz885/VictorChvz885.github.io/blob/main/Andrew%203.jpg?raw=true" alt="Alt Text" width="125" height="150"><br>LM75BDP118 <br>[Link to product](https://www.digikey.com/en/products/detail/nxp-usa-inc/LM75BDP-118/2075977) <br>[Link to datasheet](https://www.nxp.com/docs/en/data-sheet/LM75B.pdf)| - 2C-bus interface with up to 8 devices on the same bus <br> - Power supply range from 2.8 V to 5.5 V <br> - Temperatures range from 55 C to +125 C <br> - Accuracy of:  ±2.0°C <br>  | - Has a higher accuracy error with a ±3.0°C at higher and lower temperatures <br> - Fairly large footprint <br> - Recommends components to filter out noise |

Choice: LM2575HVS
Rationale: Even though the output voltage is fixed, having a simpler example circuit to follow reduces the points of failure so debugging and repairs can be addressed more quickly. Additionally, the wide voltage input will allow the team to offset any disadvantages from the LM2575 being only a buck converter. There is also a set 5V output version that can be used for powering other subsystems.

Temperature Sensor (Victor Chavez)

| Solution | Pros | Cons |
|----------|------|------|
| <img src="https://github.com/VictorChvz885/VictorChvz885.github.io/blob/main/150~C04-057~SN,OA~8.jpg?raw=true" alt="Alt Text" width="125" height="150"> <br>TCN75AVOA713 <br>[Link to product](https://www.digikey.com/en/products/detail/microchip-technology/TCN75AVOA713/739450) <br>[Link to datasheet](https://ww1.microchip.com/downloads/en/DeviceDoc/21935D.pdf)| - Temperature to digital converter <br> - Measure from -40°C to +125°C <br> - I2C™ Compatible <br> - Alert pin and configurable address pins | - Low measuring range <br> - Large IC size |
| <img src="https://github.com/VictorChvz885/VictorChvz885.github.io/blob/main/Victor%202.jpg?raw=true" alt="Alt Text" width="125" height="150"> <br>DS1775R+T&R<br>[Link to product](https://www.digikey.com/en/products/detail/analog-devices-inc-maxim-integrated/DS1775R-T-R/1018006) <br>[Link to datasheet](https://www.analog.com/media/en/technical-documentation/data-sheets/DS1775.pdf)| - I2C Output <br> - Measures temperatures from -55°C to +125°C with a ±2.0°C accuracy <br> - Operating Voltage Range: 2.7V to 5.5V <br> - Small footprint <br> - Surface Mount | - Has higher accuracy error <br> - Doesn’t have configurable address <br> - High cost |
| <img src="https://github.com/VictorChvz885/VictorChvz885.github.io/blob/main/Victor%203.jpg?raw=true" alt="Alt Text" width="125" height="150"><br>LM75BDP118 <br>[Link to product](https://www.digikey.com/en/products/detail/nxp-usa-inc/LM75BDP-118/2075977) <br>[Link to datasheet](https://www.nxp.com/docs/en/data-sheet/LM75B.pdf)| - 2C-bus interface with up to 8 devices on the same bus <br> - Power supply range from 2.8 V to 5.5 V <br> - Temperatures range from 55 C to +125 C <br> - Accuracy of:  ±2.0°C  | - Has a higher accuracy error with a ±3.0°C at higher and lower temperatures <br> - Fairly large footprint <br> - Recommends components to filter out noise <br> |

Choice: TCN75AVOA713 
Rationale: Microchip’s TCN75AVOA13 might have a smaller range in terms of measuring temperature, however, the smaller accuracy error makes it more suitable for our application. We also won’t be needing the extra -15 degrees that the DS1775R+T&R offers as most freezers operate at around 0 to 10 degrees fahrenheit. Also the TCN75AVOA13 has a configurable address which will be useful since we are connecting four devices into one I2C serial bus. The bigger footprint also will make it easier to work with during the PCB assembly process. Lastly the TCN75AVOA13 has configurable alert pins if the temperature it senses goes above or below its set threshold, which is also configurable. 

Humidity Sensor (Derek Schow)

| Solution | Pros | Cons |
|----------|------|------|
| <img src="https://github.com/VictorChvz885/VictorChvz885.github.io/blob/main/FrFr.jpg?raw=true" alt="Alt Text" width="125" height="150"> <br>SHT40I-AD1B-R3 <br>[Link to product](https://www.digikey.com/en/products/detail/sensirion-ag/SHT40I-AD1B-R3/15792545) <br>[Link to datasheet](https://sensirion.com/media/documents/1D662E57/661CD1C1/HT_DS_Datasheet_SHT4xI-Digital.pdf)| - I2C Output <br> - Only four pins <br> - Accurate up to ±1.8% RH <br> - Wide Supply voltage 2.3V - 5.5V <br> - Waterproof <br> - Works Down to -40C <br> - Surface Mount< | - Very small 1.5 mm x 1.5 mm <br> - Somewhat expensive for 1 tiny part |
| <img src="https://github.com/VictorChvz885/VictorChvz885.github.io/blob/main/Derek%201Fr.jpg?raw=true" alt="Alt Text" width="125" height="150"> <br>SHT45-AD1F-R2<br>[Link to product](https://www.digikey.com/en/products/detail/sensirion-ag/SHT45-AD1F-R2/17180856) <br>[Link to datasheet](https://sensirion.com/media/documents/1D662E57/661CD1C1/HT_DS_Datasheet_SHT4xI-Digital.pdf)| - I2C Output <br> - Only four pins <br> - Accurate up to ±1.8% RH <br> - Waterproof <br> - Works Down to -40C <br> - Surface Mount  | - More narrow voltage range (1.08 V - 3.6V) <br> - Much more expensive <br> - Very small 1.5 mm - 1.5 mm |
| <img src="https://github.com/VictorChvz885/VictorChvz885.github.io/blob/main/Pkg%20SDE06A%20(1).jpg?raw=true" alt="Alt Text" width="125" height="150"> <br>HDC2080DMBR <br>[Link to product](https://www.digikey.com/en/products/detail/texas-instruments/HDC2080DMBR/9692560) <br>[Link to datasheet](https://www.ti.com/lit/ds/symlink/hdc2080.pdf?HQS=dis-dk-null-digikeymode-dsf-pf-null-wwe&ts=1726699942311&ref_url=https%253A%252F%252Fwww.ti.com%252Fgeneral%252Fdocs%252Fsuppproductinfo.tsp%253FdistId%253D10%2526gotoUrl%253Dhttps%253A%252F%252Fwww.ti.com%252Flit%252Fgpn%252Fhdc2080)| - I2C Output <br> - Interrupt Capability <br> - Larger size 3.1mm x 3.1mm <br> - Wide Supply voltage 1.62V - 3.6V <br> - Least expensive <br> - Surface Mount | - More complicated to set up - 6 pins <br> - Less accurate +/- 2% RH |

Choice: HDC2080DMBR 
Rationale: With more pins and capability we will have more control over exactly how we use the device. It is the least expensive of the options, and also has a small package size without being too small to solder. It can withstand the low temperatures inside of a freezer or fridge. While it is slightly less accurate than the other choices, 2% compared to 1.8% is a small enough difference that it will not affect the functionality of the end product. The datasheet is also more detailed with some example configurations. 
## **Appendix E: Microcontroller Selection**

### **Microcontroller Selection Tables**

| 1\. Determine your project-specific requirements                                                           | 3\. Look up specifications in the PIC datasheet                                |
| ---------------------------------------------------------------------------------------------------------- | ------------------------------------------------------------------------------ |
| Design Considerations                                                                                      | Team Project-Specific Requirements from Problem Definition and Block Diagram | PIC Option 1 | PIC Option 2 | PIC Option 3 |
| How many GPIO Pins?                                                                                        | The team will utilize 6 GPIO pins                                              | 12 | 6 | 6 |
| Built-in Analog to Digital Converter? How many?                                                            | The team does not require any ADC modules                                      | 11 | 5 | 5 |
| Built-in Hardware PWM? How many?                                                                           | The team does not require any PWM modules                                      | 2 | 2 | 2 |
| Built-in I2C? SPI? How many?                                                                               | The team will utilize 1 12C port                                               | 2 | 2 | 2 |
| Built-in UART? How many?                                                                                   | The team will utilize 1 UART port                                              | 2 | 2 | 2 |
| Other Required Built-In Features? (optional)                                                               | No other features are needed                                                   | N/A | N/A | N/A |
| Additional considerations specific to your project specifications (optional) <br>                         | No other additional considerations                                             | N/A | N/A | N/A |
| 2\. Find 3 microcontrollers that meet your team project-specific requirements and find information on each | 4\. Look up part details in the PIC datasheet                                  |
| Microcontroller Considerations                                                                             | Instructions                                                                   | PIC Option 1 | PIC Option 2 | PIC Option 3 |
| Part Number                            | Include the entire part number (leave off any letters at the end that specify the package type)                                                           | PIC16F18124                                                                                                                                                                                              | PIC16F18114                                                                                                                                                                                              | PIC16F17114                                                                                                                                                                                                                                                                                                                                                                                                    |
| Link (URL) to product page             | Do not paste links directly into the table. Instead, [link them like this](http://www.microchip.com/).                                                    | [Product Page](https://www.digikey.com/en/products/detail/microchip-technology/PIC16F18124T-I-SL/21572940)                                                                                               | [Product Page](https://www.digikey.com/en/products/detail/microchip-technology/PIC16F18114-I-SN/16549245)                                                                                                | [Product Page](https://www.digikey.com/en/products/detail/microchip-technology/PIC16F17114T-I-SN/21265083)                                                                                                                                                                                                                                                                                                 |
| Links (URL) to Data Sheets             |                                                                                                                                                           | [Data Sheet](https://ww1.microchip.com/downloads/aemDocuments/documents/MCU08/ProductDocuments/DataSheets/PIC16F18114-15-24-25-44-45-Microcontroller-Data-Sheet-DS40002404.pdf)                          | [Data Sheet](https://ww1.microchip.com/downloads/aemDocuments/documents/MCU08/ProductDocuments/DataSheets/PIC16F18114-15-24-25-44-45-Microcontroller-Data-Sheet-DS40002404.pdf)                          | [Data Sheet](https://ww1.microchip.com/downloads/aemDocuments/documents/MCU08/ProductDocuments/DataSheets/PIC16F17114-15-24-25-44-45-Microcontroller-Data-Sheet-DS40002403.pdf)                                                                                                                                                                                                                            |
| Links (URL) to Application Notes       | Often provided by manufacturers to give you specific examples of how to use their products. Search for them in the search bar on the Microchip’s website. | [Application Notes for PIC16F18 Family](https://ww1.microchip.com/downloads/aemDocuments/documents/MCU08/ApplicationNotes/ApplicationNotes/TB3346-ADCC-Modes-PIC16F17-18146-MCUs-in-Apps-DS90003346.pdf) | [Application Notes for PIC16F18 Family](https://ww1.microchip.com/downloads/aemDocuments/documents/MCU08/ApplicationNotes/ApplicationNotes/TB3346-ADCC-Modes-PIC16F17-18146-MCUs-in-Apps-DS90003346.pdf) | [Application Notes for PIC16F18 Family](https://ww1.microchip.com/downloads/aemDocuments/documents/MCU08/ApplicationNotes/ApplicationNotes/TB3346-ADCC-Modes-PIC16F17-18146-MCUs-in-Apps-DS90003346.pdf)                                                                                                                                                                                                   |
| Links (URL) to Code Examples           |                                                                                                                                                           | [Code Examples](https://ww1.microchip.com/downloads/aemDocuments/documents/MCU08/ProductDocuments/ProgrammingSpecifications/PIC16F181xx-Family-Programming-Specification-DS40002276A.pdf)                | [Code Examples](https://ww1.microchip.com/downloads/aemDocuments/documents/MCU08/ProductDocuments/ProgrammingSpecifications/PIC16F181xx-Family-Programming-Specification-DS40002276A.pdf)                | [Code Examples](https://mplab-discover.microchip.com/v2/category/com.microchip.code.examples/com.microchip.ide.project?dsl=com.microchip.ide.project%3Adevice.content.name%3Apic16f171+AND+com.microchip.ide.project%3Acontenttype%3A%22MCC+Melody%22&ds=%7B%22com.microchip.ide.project%22%3A%7B%22name%22%3A%22com.microchip.portal.start.displayCharacteristics%22%2C%22version%22%3A%221.3.0%22%7D%7D) |
| Links (URL) to External Resources      | Search on Google and YouTube for other resources for each specific microcontroller.                                                                       | [Video Resource](https://www.youtube.com/watch?v=Lm6e3xSC8sg)                                                                                                                                            | [Video Resource](https://www.microchip.com/en-us/about/media-center/videos/fCkZxvFQybo)                                                                                                                  | [Video Resource](https://www.youtube.com/watch?v=N3_aro7YviE)                                                                                                                                                                                                                                                                                                                                              |
| Production Unit Cost                   | Find in the Microchip online store, or Digikey                                                                                                            | $0.82                                                                                                                                                                                                    | $0.76                                                                                                                                                                                                    | $0.80                                                                                                                                                                                                                                                                                                                                                                                                      |
| Supply Voltage Range                   | Find in the microcontroller datasheet                                                                                                                     | 1.8V-5.5V                                                                                                                                                                                                | 1.8V-5.5V                                                                                                                                                                                                | 1.8V-5.5V                                                                                                                                                                                                                                                                                                                                                                                                  |
| Absolute Maximum Current for entire IC | Find in the microcontroller datasheet                                                                                                                     | 300mA                                                                                                                                                                                                    | 300mA                                                                                                                                                                                                    | 300mA                                                                                                                                                                                                                                                                                                                                                                                                      |
| Maximum GPIO Pin Current (Source/Sink)                                                                       | Find in the microcontroller datasheet                                                                                                                                                                                  | +/-25mA                          | +/-25mA                          | +/-25mA                          |
| 8-bit or 16-bit Architecture                                                                                 | Find in the microcontroller datasheet                                                                                                                                                                                  | 8-bit                            | 8-bit                            | 8-bit                            |
| Available IC Packages / Footprints                                                                           | Find in the microcontroller datasheet. Choose a microcontroller with both surface mount and DIP/through-hole packages available. See Most Common Mistakes below for requirements to improve manufacturing reliability. | PDIP SOIC, TSSOP, VQFN           | PDIP, SOIC, DFN                  | PDIP, SOIC, DFN                  |
| Supports External Interrupts?                                                                                | Find in the microcontroller datasheet                                                                                                                                                                                  | Yes                              | Yes                              | Yes                              |
| In-System Programming Capability and Type                                                                    | Allows for programming the microcontroller without removing it from the PCB. Find in the microcontroller datasheet.                                                                                                    | ICSP programming                 | ICSP Programming                 | ICSP Programming<br>           |
| Programming Hardware, Cost, and URL                                                                          | Find on the microcontroller product page                                                                                                                                                                               | RJ-11 or 6 pin header and PICKit | RJ-11 or 6 pin header and PICKit | RJ-11 or 6 pin header and PICKit |
| Works with [MPLAB® X Integrated Development Environment](https://www.microchip.com/mplab/mplab-x-ide) (IDE)? | Required. See [Microchip Development Tools](https://www.microchip.com/development-tools)                                                                                                                               | Yes                              | Yes                              | Yes                              |
| 5\. Write overall pros, cons, and rankings for the chosen microcontrollers |
| Overall Pros                                                               | Write at least 2 for each microcontroller | Low cost. Includes 12 pins.<br> | Low cost.DFN package. | Low cost.Includes op amp peripherals.DFN package. |
| Overall Cons                                                               | Write at least 2 for each microcontroller | Doesn’t include the DFN package.No op amp peripherals. | almost identical to option 3.Doesn’t include TSSOP or VQFN packages. | almost identical to option 2.Doesn’t include TSSOP or VQFN packages. |
| Ranking                                                                    | 1 = first, 2 = second, 3 = third | 1 | 3 | 2 |

Choice: PIC16F18124

Rationale: The larger layout and more package options gives us more options and flexibility when designing our pc boards. With more input/output pins, we can connect more subsystems which is preferred to allow the microcontroller to handle multiple subsystems. Option 1 also includes a better package type in TSSOP rather than DFN. The larger lead size makes it easier to solder, while the SOIC package is available for all options, the best option is to use TSSOP in case we need to optimize for space. We will likely use the SOIC package however because of the wider pin size making for easier soldering. With all this in mind, the difference between our three microcontrollers is small but the pin count in option 1 is the best choice for multiple subsystems.


## **Appendix F: Hardware Proposal**

### **Bill of Materials**

| Unit Quantity | Unit Prototype Cost | Total Prototype Cost | Unit Production Cost | Total Production Cost | Manufacturer                 | Manufacturer Part # | Vendor Link                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        | Datasheet Link | Supplier                                   | Supplier Part # | \# Ordered | Date Ordered | \# Received | Surplus     | Schematic Reference Designators |
| ------------- | ------------------- | -------------------- | -------------------- | --------------------- | ---------------------------- | ------------------- | ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------ | -------------- | ------------------------------------------ | --------------- | ---------- | ------------ | ----------- | ----------- | ------------------------------- |
| 5             | $3.67               | $18.35               | $3.67                | $18.35                | Allegro Microsystems         | AMT49400GLKATR      | [https://www.digikey.com/en/products/detail/allegro-microsystems/AMT49400GLKATR/10146667?s=N4IgjCBcoGwJxVAYygMwIYBsDOBTANCAPZQDaIALAAxwDMdIAuoQA4AuUIAymwE4CWAOwDmIAL6EwAVgqIQKSBhwFiZELSnwwADiasOkbnyGiJ4AExwI0eWix5CJSOQDsFWtpd6Q7TjwEi4pIwMLI2CkoOqs7q5rTUVN6%2Bhv4m4mbmagC2RGxEvAAEACYCAG64vExiQA](https://www.digikey.com/en/products/detail/allegro-microsystems/AMT49400GLKATR/10146667?s=N4IgjCBcoGwJxVAYygMwIYBsDOBTANCAPZQDaIALAAxwDMdIAuoQA4AuUIAymwE4CWAOwDmIAL6EwAVgqIQKSBhwFiZELSnwwADiasOkbnyGiJ4AExwI0eWix5CJSOQDsFWtpd6Q7TjwEi4pIwMLI2CkoOqs7q5rTUVN6%2Bhv4m4mbmagC2RGxEvAAEACYCAG64vExiQA)                                                                                                                                                                                                                                                                                                                                                                                                       |                | Digikey                                    | 620-2055-2-ND   | 5          | 10/7/2024    | 5           | 4           | U5                              |
| 2             | $5.53               | $11.06               | $5.53                | $11.06                | Sunon                        | HA40101V4-1000U-A99 | [https://www.digikey.com/en/products/detail/sunon-fans/HA40101V4-1000U-A99/6198728](https://www.digikey.com/en/products/detail/sunon-fans/HA40101V4-1000U-A99/6198728)                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             | Digikey        | 259-1790-ND                                | 2               | 10/7/2024  | 2            | 1           | M1          |
| 5             | $2.90               | $14.50               | $2.90                | $14.50                | Texas Instruments            | HDC2080DMBR         | [https://www.digikey.com/en/products/detail/texas-instruments/HDC2080DMBR/9692560](https://www.digikey.com/en/products/detail/texas-instruments/HDC2080DMBR/9692560)                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               | Digikey        | 296-52638-1-ND - Cut Tape (CT)             | 5               | 10/7/2024  | 5            | 4           | U1          |
| 15            | $0.15               | $2.25                | $0.15                | $2.25                 | Rth Elektronik               | 150060VS75000       | [https://www.digikey.com/en/products/detail/w%C3%BCrth-elektronik/150060VS75000/4489904?utm_adgroup=&utm_source=google&utm_medium=cpc&utm_campaign=PMax%20Shopping_Product_Medium%20ROAS%20Categories&utm_term=&utm_content=&utm_id=go_cmp-20223376311_adg-_ad-__dev-c_ext-_prd-4489904_sig-Cj0KCQjwu-63BhC9ARIsAMMTLXSIsim1E4-VKr0_E6aj2Tzszxmh3YR-LejRYkAFUNt_KWewXqRRNPwaAr6_EALw_wcB&gad_source=1&gclid=Cj0KCQjwu-63BhC9ARIsAMMTLXSIsim1E4-VKr0_E6aj2Tzszxmh3YR-LejRYkAFUNt_KWewXqRRNPwaAr6_EALw_wcB](https://www.digikey.com/en/products/detail/w%C3%BCrth-elektronik/150060VS75000/4489904?utm_adgroup=&utm_source=google&utm_medium=cpc&utm_campaign=PMax%20Shopping_Product_Medium%20ROAS%20Categories&utm_term=&utm_content=&utm_id=go_cmp-20223376311_adg-_ad-__dev-c_ext-_prd-4489904_sig-Cj0KCQjwu-63BhC9ARIsAMMTLXSIsim1E4-VKr0_E6aj2Tzszxmh3YR-LejRYkAFUNt_KWewXqRRNPwaAr6_EALw_wcB&gad_source=1&gclid=Cj0KCQjwu-63BhC9ARIsAMMTLXSIsim1E4-VKr0_E6aj2Tzszxmh3YR-LejRYkAFUNt_KWewXqRRNPwaAr6_EALw_wcB) | Digikey        | 732-4980-1-ND - Cut Tape (CT)              | 15              | 10/7/2024  | 15           | 10          | D2          |
| 15            | $0.15               | $2.25                | $0.15                | $2.25                 | Rth Elektronik               | 150060YS75000       | [https://www.digikey.com/en/products/detail/w%C3%BCrth-elektronik/150060YS75000/4489909](https://www.digikey.com/en/products/detail/w%C3%BCrth-elektronik/150060YS75000/4489909)                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   | Digikey        | 732-4981-1-ND - Cut Tape (CT)              | 15              | 10/7/2024  | 15           | 10          | D3,D4,D5    |
| 5             | $0.90               | $4.50                | $0.90                | $4.50                 | Microchip Technology         | PIC16F18124T-I/SL   | [https://www.digikey.com/en/products/detail/microchip-technology/PIC16F18124T-I-SL/21572940](https://www.digikey.com/en/products/detail/microchip-technology/PIC16F18124T-I-SL/21572940)                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           | Digikey        | 150-PIC16F18124T-I/SLCT-ND - Cut Tape (CT) | 5               | 10/7/2024  | 5            | 4           | U3          |
| 25            | $0.28               | $7.00                | $0.28                | $7.00                 | Koa Speer Electronics        | WK73R2HTTE1002F     | [https://www.digikey.com/en/products/detail/koa-speer-electronics-inc/WK73R2HTTE1002F/10273860](https://www.digikey.com/en/products/detail/koa-speer-electronics-inc/WK73R2HTTE1002F/10273860)                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     | Digikey        | 2019-WK73R2HTTE1002FCT-ND - Cut Tape (CT)  | 25              | 10/7/2024  | 25           | 15          | R1,R2,R3,R6 |
| 10            | $0.38               | $3.80                | $0.38                | $3.80                 | Rohm Semiconductor           | LTR50UZPF4700       | [https://www.digikey.com/en/products/detail/rohm-semiconductor/LTR50UZPF4700/4052998?s=N4IgjCBcoCwGxVAYygMwIYBsDOBTANCAPZQDaIAnDAOzUgC6hADgC5QgDKLATgJYB2AcxABfQgCYADAA4ArIhApIGHAWJkQNSQAIA8gAsAttgbM2kEAFV%2BvFrtQBZXOmwBXbrlGEAtOIVKeVzUSSHJ5ejEQbwRoRShA4I0AZgYRSL9QkA9sXmwWIm5UoA](https://www.digikey.com/en/products/detail/rohm-semiconductor/LTR50UZPF4700/4052998?s=N4IgjCBcoCwGxVAYygMwIYBsDOBTANCAPZQDaIAnDAOzUgC6hADgC5QgDKLATgJYB2AcxABfQgCYADAA4ArIhApIGHAWJkQNSQAIA8gAsAttgbM2kEAFV%2BvFrtQBZXOmwBXbrlGEAtOIVKeVzUSSHJ5ejEQbwRoRShA4I0AZgYRSL9QkA9sXmwWIm5UoA)                                                                                                                                                                                                                                                                                                                                                                                                                                     | Digikey        | RHM470ACTR-ND                              | 10              | 10/7/2024  | 10           | 5           | R4          |
| 10            | $0.90               | $9.00                | $0.90                | $9.00                 | Bourns inc                   | SRR1280-221K        | [https://www.digikey.com/en/products/detail/bourns-inc/SRR1280-221K/1970008](https://www.digikey.com/en/products/detail/bourns-inc/SRR1280-221K/1970008)                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           | Digikey        | SRR1280-221KLTR-ND                         | 10              | 10/7/2024  | 10           | 5           | L1          |
| 10            | $0.27               | $2.70                | $0.27                | $2.70                 | Diodes Incorporated          | 1N5819HW-7-F        | [https://www.digikey.com/en/products/detail/diodes-incorporated/1N5819HW-7-F/814970](https://www.digikey.com/en/products/detail/diodes-incorporated/1N5819HW-7-F/814970)                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           | Digikey        | 1N5819HW-FDITR-ND                          | 10              | 10/7/2024  | 10           | 5           | D1          |
| 5             | $1.43               | $7.15                | $1.43                | $7.15                 | Cal Chip Electronics         | CHV1812N2K0103MXT   | [https://www.digikey.com/en/products/detail/cal-chip-electronics-inc/CHV1812N2K0103MXT/22155322](https://www.digikey.com/en/products/detail/cal-chip-electronics-inc/CHV1812N2K0103MXT/22155322)                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   | Digikey        | 4713-CHV1812N2K0103MXTTR-ND                | 5               | 10/7/2024  | 5            | 4           | C1,C2,C6    |
| 20            | $2.85               | $57.00               | $2.85                | $57.00                | Cal Chip Electronics         | CHV2220N250104KXT   | [https://www.digikey.com/en/products/detail/cal-chip-electronics-inc/CHV2220N250104KXT/22155385?s=N4IgjCBcpgbFoDGUBmBDANgZwKYBoQB7KAbXABYAOMMABhAF0CAHAFyhAGVWAnASwB2AcxABfArACcCEMkjps%2BIqRDlakgMybGLdpC69BI8SABMtctOizUmXAWKQytAHRgABAFaAYjpBsOAFUBPlYAeRQAWRw0LABXHhwxAgBaeGs5XjilRzINRhMU0xlMnmyHFQBWApNip1k0ZjREUMIeLD9q62YoMBYeyFNK0VEgA](https://www.digikey.com/en/products/detail/cal-chip-electronics-inc/CHV2220N250104KXT/22155385?s=N4IgjCBcpgbFoDGUBmBDANgZwKYBoQB7KAbXABYAOMMABhAF0CAHAFyhAGVWAnASwB2AcxABfArACcCEMkjps%2BIqRDlakgMybGLdpC69BI8SABMtctOizUmXAWKQytAHRgABAFaAYjpBsOAFUBPlYAeRQAWRw0LABXHhwxAgBaeGs5XjilRzINRhMU0xlMnmyHFQBWApNip1k0ZjREUMIeLD9q62YoMBYeyFNK0VEgA)                                                                                                                                                                                                                                                                                                                   | Digikey        | 4713-CHV2220N250104KXTTR-ND                | 20              | 10/7/2024  | 20           | 10          | C5          |
| 5             | $1.31               | $6.55                | $1.31                | $6.55                 | Nichicon                     | RSS1C101MCN1GS      | [https://www.digikey.com/en/products/detail/nichicon/RSS1C101MCN1GS/3465977](https://www.digikey.com/en/products/detail/nichicon/RSS1C101MCN1GS/3465977)                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           | Digikey        | 493-6665-2-ND                              | 5               | 10/7/2024  | 5            | 4           | C3          |
| 5             | $1.03               | $5.15                | $1.03                | $5.15                 | Nichicon                     | RSA0J331MCN1GS      | [https://www.digikey.com/en/products/detail/nichicon/RSA0J331MCN1GS/3768637](https://www.digikey.com/en/products/detail/nichicon/RSA0J331MCN1GS/3768637)                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           | Digikey        | 493-7370-2-ND                              | 5               | 10/7/2024  | 5            | 4           | C4          |
| 2             | $5.22               | $10.44               | $5.22                | $10.44                | Tensility International Corp | CA-2216             | [https://www.digikey.com/en/products/detail/tensility-international-corp/CA-2216/1129479](https://www.digikey.com/en/products/detail/tensility-international-corp/CA-2216/1129479)                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 | Digikey        | CP-2216-ND                                 | 2               | 10/7/2024  | 2            | 1           | J1          |
| 3             | $1.26               | $3.78                | $1.26                | $3.78                 | Nidec Components Corp        | CL-SB-12B-01T       | [https://www.digikey.com/en/products/detail/nidec-components-corporation/CL-SB-12B-01T/3507823](https://www.digikey.com/en/products/detail/nidec-components-corporation/CL-SB-12B-01T/3507823)                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     | Digikey        | 563-1318-1-ND - Cut Tape (CT)              | 3               | 10/7/2024  | 3            | 1           | SW1         |
| 3             | $6.51               | $19.53               | $6.51                | $19.53                | Littefuse Inc                | 65800003009         | [https://www.digikey.com/en/products/detail/littelfuse-inc/65800003009/16628063?s=N4IgjCBcoCwJxVAYygMwIYBsDOBTANCAPZQDaIAzAEwBsA7FVSALqEAOALlCAMocBOASwB2AcxABfQjQTQQKSBhwFiZEDAAMcCtpbsukXgJHip6gKwxE8tFjyESkclRgAOOq6asQnbnyFikoQAtExyCgIAriqO5OYsZsE01hH80Q5qFAlmYeSokXgABAAWRJgAJrj8CUA](https://www.digikey.com/en/products/detail/littelfuse-inc/65800003009/16628063?s=N4IgjCBcoCwJxVAYygMwIYBsDOBTANCAPZQDaIAzAEwBsA7FVSALqEAOALlCAMocBOASwB2AcxABfQjQTQQKSBhwFiZEDAAMcCtpbsukXgJHip6gKwxE8tFjyESkclRgAOOq6asQnbnyFikoQAtExyCgIAriqO5OYsZsE01hH80Q5qFAlmYeSokXgABAAWRJgAJrj8CUA)                                                                                                                                                                                                                                                                                                                                                                                                                           | Digikey        | 18-65800003009-ND                          | 3               | 10/7/2024  | 3            | 1           |             |
| 10            | $0.95               | $9.50                | $0.95                | $9.50                 | Littefuse Inc                | 0218001.HXP         | [https://www.digikey.com/en/products/detail/littelfuse-inc/0218001-HXP/777135](https://www.digikey.com/en/products/detail/littelfuse-inc/0218001-HXP/777135)                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       | Digikey        | F2419-ND                                   | 10              | 10/7/2024  | 10           | 5           | F1          |
| 10            | $0.10               | $1.00                | $0.10                | $1.00                 | Yageo                        | RC0402FR-07330RL    | [https://www.digikey.com/en/products/detail/yageo/RC0402FR-07330RL/726594](https://www.digikey.com/en/products/detail/yageo/RC0402FR-07330RL/726594)                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               | Digikey        | 311-330LRCT-ND - Cut Tape (CT)             | 10              | 10/7/2024  | 10           | 5           | R7,R8,R9    |
| 5             | $0.88               | $4.40                | $0.88                | $4.40                 | Microchip Technology         | TCN75AVOA713        | [https://www.digikey.com/en/products/detail/microchip-technology/TCN75AVOA713/739450](https://www.digikey.com/en/products/detail/microchip-technology/TCN75AVOA713/739450)                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         | Digikey        | TCN75AVOA713CT-ND - Cut Tape (CT)          | 5               | 10/7/2024  | 5            | 4           | U4          |

                                                                                                                                | Digikey        | 311-330LRCT-ND                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            | Digikey        | TCN75AVOA713CT-ND - Cut Tape (CT)          | 5               | 10/7/2024  | 5            | 4           | U4          |

