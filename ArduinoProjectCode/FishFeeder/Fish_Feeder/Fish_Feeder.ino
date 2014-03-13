//Updated The Code

int IncomingRead = 0;
int Sensor = 0; // Which Infered 
int Fish = 1; //How Many Fish
int TimeA = 0; // Alarm Time
int TimeB = 0; // System Time
int iReset = 1;// iReset (1) is the default to run program


void Setup()
{
pinMode(13,OUTPUT); //Reservered For Motor
pinMode(12,OUTPUT);//Reservered For Servo
pinMode(11,OUTPUT);//Reservered For RED LED
//pinMode(10,OUTPUT);//activate pin 10 for an output
//pinMode(9,OUTPUT);//activate pin 9 for an output
//pinMode(8,OUTPUT);//activate pin 8 for an output
//pinMode(7,OUTPUT);//activate pin 7 for an output
//pinMode(6,OUTPUT);//activate pin 6 for an output
//pinMode(5,OUTPUT);//activate pin 5 for an output
//pinMode(4,OUTPUT);//activate pin 4 for an output
pinMode(3,INPUT);//Reserved For Reset Button
pinMode(2,INPUT);//Reservered For Inferred 2
pinMode(1,INPUT);//Reservered For Inferred 1
Serial.begin(9600);//Open serial port
}

void Loop()
{
  if(digitalRead(3) == HIGH) //When Button is pressed giving power to pin3 then run the code
{
iReset = iReset + 1; //iReset value increase by 1
delay(1000);// cause 1 second delay
}
if(iReset == 1)// When iReset equals 1 then run the main code
{
Serial.println("FISH");//send to for Java to get how many fish is needed
Delay(2000);
Serialread(); //read the serial port
IncomingRead = Fish; // put whatever is in the serial port as the variable Fish

If (*Inferred Varriable To Indicate That They Cannot See Each Other* == False) // when the inferreds cannot see each other run the code 
{ //1o
Serial.println("TIME");//send to for Java to get the users console time
Delay(2000);
Serialread();//read the serial port
IncomingRead = TimeB; // put whatever is in the serial port as TimeB
Serial.println("FEED");//send to for Java to get the Feeding Time
Delay(2000);
Serialread();//read the serial port
IncomingRead = TimeA; // put whatever is in the serial port as TimeA
Delay(10);

Do while (TimeB ==  TimeA) // If TimeB is the same as TimeA then run the code
{  //2o
For(x=0; y=Fish; x++) //Loop for how many fish are in the tank
{  //3o
PinOff(2); // Turn Inferred Off
PinOn(2); // Turn Inferred On
For(a=0; motor=4;a++) //loop rotation for the main motor code
{  //4o
PinOff(13); //Turns Motor Off
PinOn(13); //Turns Motor On
delay(Rotation Time To Be Worked Out)
PinOff(13); //Turns Motor Off
}  //4c
//Can inferred see each other??

If (Inferred Can See Each Other)
{  //5o
Delay (1)  // Do Nothing
}  //5c
Else
{  //6o
Checkfood();
}  //6c

PinOff(2); // Turn Inferred Off

}  //3c
}  //2c
}  //1c

Else
{  //7o
pinOff(11); //Turn Red LED Off
pinOn(11); //Turn Red LED On
NoFood();//AttachInterupt Goes Here
delay(41724000); //11.59 Hours
} //7c
}
if else (iReset == 2)
{
iReset = 0; //iReset value set to 0
pinOff(11); //Turn Red LED Off
delay(1000);// cause 1 second delay
}
}

void NoFood()
{
EmergencyFood();
Serial.println("NOFOOD");
iReset = 2;
}

void Checkfood(); //inferred 

Inferred(1);
if(CanSee)
{
NoFood();
}
Else
{
 delay(1);
}

void EmergencyFood();
{
//Servo Code

}


void ResetEmergencyFood();
{
//Button press
//Servo Reset Code
}

void Inferred(int)
{
//Inferred Code
}

void Serialread ();
{
        if (Serial.available() > 0) {
                // read the incoming byte:
               IncomingRead = Serial.read();

                // say what you got:
                Serial.print("I received: ");
                Serial.println(IncomingRead, DEC);
        }
}

void pinOn(int pinNum)//pinOn function
{
  digitalWrite(pinNum, HIGH); //turn pinNum on
}

void pinOff(int pinNum)//pinOff function
{
  digitalWrite(pinNum, LOW);//turn pinNum off
}

