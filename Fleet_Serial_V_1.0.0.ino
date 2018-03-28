/*
Writer :Team GSM ( Bhupendra_KUMAR_GUPTA, GURU_CHARAN_KAUR_SALUJA , SAILJA_CHAUHAN)       Date:28 March 2018
***************************************************************************************************************************
Objective: The basic building block of code for Fleet_Management , As a part of Serial interfacing (GPS GSM GPRS) of SIM808
Version: V1.0.0           
*/
#include "SIM900.h"
int ledpin=13; // On Board LEd for output testing
//Variables Declearation
char buf0; // buffer-0 Storing the data
int index=0;

void setup() {
                  
                   Serial.begin(9600); // using serial-0 RX0-TX0 as 9600 Baud rate
                    if(gsm.begin(9600))
                    Serial.println("\nstatue=Ready");
                    else Serial.println("\nstatus=IDLE");
                    
                   pinMode(ledpin,OUTPUT); // For output use making led as output
                   
                
              }

//-------------------------------------***-----------------------------------------
void loop() 



{
  if(Serial1.available())
  {
    Serial.write(Serial1.read());
    
    }
  if(Serial.available())
  {
    Serial1.write(Serial.read());
    
    }
  
  }
            
            /*{
           Serial.write("AT");
           delay(500);

               buf0=Serial.read();
  
                 /* while(index<2)
                  {Serial.println(index);
                  Serial.println("Helo");
                    while(Serial.available()>0);
                    buf0[index]=Serial.read();
                    index++;
                     Serial.println(index);
                      Serial.println("Helo");
                  }

                 Serial.println(buf0); 
                 if (buf0=="OK")
                 {
                  digitalWrite(ledpin,HIGH);
                  }
                  
                  //Serial1.flush();
                  //Serial.println(val-48);
    while(1);
              }


/*
void SendMessage()
{
  mySerial.println("AT+CMGF=1");    //Sets the GSM Module in Text Mode
  delay(1000);  // Delay of 1000 milli seconds or 1 second
  mySerial.println("AT+CMGS=\"+60XXXXXXXXX\"\r"); // Replace x with mobile number
  delay(1000);
  mySerial.println("sim900a sms");// The SMS text you want to send
  delay(100);
   mySerial.println((char)26);// ASCII code of CTRL+Z
  delay(1000);
}*/
/*
void ReceiveMessage()
{
  mySerial.println("AT+CNMI=2,2,0,0,0"); // AT Command to recieve a live SMS
  delay(1000);
  if (mySerial.available()>0)
  {
    msg=mySerial.read();
    Serial.print(msg);
  }
}*/
