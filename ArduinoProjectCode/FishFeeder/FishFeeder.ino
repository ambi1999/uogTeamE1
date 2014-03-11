//Start (Arduino)
//Define Variables (int a time; int b motor; int c fish)

//Added comments

int IncomingRead = 0;
int Sensor = 0;

void Setup()
{
Serial.begin(9600);//Open serial port
}

void Loop()
{
Serial.println("VARIABLES");//send to for Java to get Variables
Delay(2000);
Serial.read();
If (InferredSenA == False)
{ //1o
Serial.println("TIME");//send to for Java to get the time
Retrieve system time from java
Check system time == time b
Do while (time b =  a time)
{  //2o
For(x=0; y=c; x++)
{  //3o
Turn sensor off
Turn sensor on
For(a=0; motor=4;a++) //motor turns
{  //4o
Turn motor off
Turn motor on
delay(1 rotation)
Turn motor off
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


