#include "mcc_generated_files/system/system.h"
#include "mcc_generated_files/i2c_host/i2c_host_event_types.h"
#include "mcc_generated_files/i2c_host/i2c_host_interface.h"
#include "mcc_generated_files/i2c_host/i2c_host_types.h"
#include "mcc_generated_files/i2c_host/mssp1.h"
#define HUMIDADDRESS 0b1000000
#define TEMPADDRESS 0b1001000


int main(void)
{
    SYSTEM_Initialize();
    I2C1_Initialize();
    
    
    INTERRUPT_GlobalInterruptEnable(); 

    
    INTERRUPT_PeripheralInterruptEnable(); 

    
    uint8_t transmitData[2] = {};

    uint8_t readDataH[2] = {};
    uint8_t readDataT[1] = {};
    readDataT[0] = 0;
    uint16_t rawhumid = 0;
    uint8_t rawtemp = 0;
    IO_RC2_SetLow();

    while(1)
    {
        
    // Measure humidity
      //Configure Measurement at register 0x0F 
        
      transmitData[0] = 0x0F;
      transmitData[1] = 0b00000001;
      I2C1_Host.Write(HUMIDADDRESS, transmitData, 2);
      
      
       if(!I2C1_Host.IsBusy())
    {
        if ( I2C1_Host.ErrorGet() == I2C_ERROR_NONE)
        {
            // Write operation is successful
        }
        else
        {
            // Error handling
        }
    }
      
      //Read 2 bytes from register 0x02 to get humidity value
      transmitData[0] = 0x02;
      transmitData[1] = 0;
    
      I2C1_Host.WriteRead(HUMIDADDRESS, transmitData, 1, readDataH , 2);
      
       if(!I2C1_Host.IsBusy())
    {
        if ( I2C1_Host.ErrorGet() == I2C_ERROR_NONE)
        {
            //Take the humidity value and compare it to set threshold.
            rawhumid = readDataH[0]+(readDataH[1] << 8);
            if (rawhumid >= 0x6200)
            {
             IO_RC2_SetHigh();
            // Turn on LED and Fan to dissipate humidity if it is above threshold
             IO_RA2_SetHigh();
            }
            else
            {
             IO_RC2_SetLow();
             IO_RA2_SetLow();
            }
            EUSART1_Write(readDataT[0]);
            __delay_ms(500);
            EUSART1_Write(readDataH[0]);
            //__delay_ms(500);
            EUSART1_Write(readDataH[1]);
            __delay_ms(500);
            
        }
        else
        {
         break;   // Error handling
        }
        
        
      //Measure Temperature 
      transmitData[0] = 0x00;
      //transmitData[1] = 0x00;
    
      I2C1_Host.WriteRead(TEMPADDRESS, 0x00, 1, readDataT ,1);
    
      // Compare temperature to threshold (26 C)
      rawtemp = readDataT[0];
            if (rawtemp >= 0x19)
            {
             IO_RC4_SetHigh();
           }
            else
            {
             IO_RC4_SetLow();
            }
    }
      
    
    
      
  }
}  
