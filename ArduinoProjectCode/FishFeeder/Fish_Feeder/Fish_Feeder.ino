//Updated The Code

int IncomingRead = 0;
int Sensor = 0; // Which Infered 
int Fish = 1; //How Many Fish
int TimeA = 0; // Alarm Time
int TimeB = 0; // System Time
//Think I Am Currently Missing A Varriable...


void Setup()
{
pinMode(13,OUTPUT); //Reservered For Motor
pinMode(12,OUTPUT);//Reservered For Servo
//pinMode(11,OUTPUT);//activate pin 11 for an output
//pinMode(10,OUTPUT);//activate pin 10 for an output
//pinMode(9,OUTPUT);//activate pin 9 for an output
//pinMode(8,OUTPUT);//activate pin 8 for an output
//pinMode(7,OUTPUT);//activate pin 7 for an output
//pinMode(6,OUTPUT);//activate pin 6 for an output
//pinMode(5,OUTPUT);//activate pin 5 for an output
//pinMode(4,OUTPUT);//activate pin 4 for an output
//pinMode(3,INPUT);//activate pin 2 foran input
pinMode(2,INPUT);//Reservered For Inferred 2
pinMode(1,INPUT);//Reservered For Inferred 1
Serial.begin(9600);//Open serial port
}

void Loop()
{
Serial.println("FISH");//send to for Java to get Variables
Delay(2000);
Serialread();
IncomingRead = Fish;

If (InferredSen1 == False)
{ //1o
Serial.println("TIME");//send to for Java to get the time
Delay(2000);
Serialread();
IncomingRead = TimeB;
Serial.println("FEED");//send to for Java to get the Feeding Time
Delay(2000);
Serialread();
IncomingRead = TimeA;
Delay(10);

Do while (TimeB ==  TimeA) // Comparing Time
{  //2o
For(x=0; y=Fish; x++)
{  //3o
PinOff(2); // Turn Inferred Off
PinOn(2); // Turn Inferred On
For(a=0; motor=4;a++) //motor turns
{  //4o
PinOff(13); //Turns Motor Off
PinOn(13); //Turns Motor On
delay(Rotation Time To Be Worked Out)
PinOff(13); //Turns Motor Off
}  //4c
Check sensor picked up movement

If (movement)
{  //5o
Delay (1)  // Do Nothing
}  //5c
Else
{  //6o
Checkfood();
}  //6c

Turn sensor off
}  //3c
}  //2c
}  //1c
Else
{  //7o
EmergencyFood();
Turn Red LED on
Print to system(no food)
Email owner //Java
Delay 11.59 hours
} //7c
}

void myinterruptfuntion() //myattachfunction
{
EmergencyFood();
Serial.println("NOFOOD");
}

void Checkfood(); //inferred 

Turn sensor on
Check distance
If (distance < 10mm)
{ //6.1o 
delay(1);  //do nothing
} //6.1c
Else
{ //6.2o
attachInterupt(email owner)
} //6.2c

void EmergencyFood();
{
Drop hatch;
// motor?
}


void ResetEmergencyFood();
{
Button press
Turn motor on
Delay
Turn motot off
}

void INFERRED(int)
{
Code to find
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
  delay(100);// cause 1/10 second delay
}

void pinOff(int pinNum)//pinOff function
{
  digitalWrite(pinNum, LOW);//turn pinNum off
  delay(100);// cause 1/10 second delay
}

