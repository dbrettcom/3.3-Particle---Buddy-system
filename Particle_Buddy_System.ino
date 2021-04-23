int led = D6;

void setup()
{
    pinMode(led, OUTPUT);
    
    digitalWrite(led, LOW);
    
    Particle.subscribe("Deakin_RIOT_SIT210_Photon_Buddy", myHandler, MY_DEVICES);
}

void myHandler(String event, String data)
{
    if(data == "wave") 
    {
        // 3 slow blinks
        digitalWrite(led, HIGH);
        delay (1000);
        digitalWrite(led, LOW);
        delay (1000);
        digitalWrite(led, HIGH);
        delay (1000);
        digitalWrite(led, LOW);
        delay (1000);
        digitalWrite(led, HIGH);
        delay (1000);
        digitalWrite(led, LOW);
        delay (1000);
    }
        
    if(data == "pat")
    {
        // 3 fast blinks
        digitalWrite(led, HIGH);
        delay (100);
        digitalWrite(led, LOW);
        delay (100);
        digitalWrite(led, HIGH);
        delay (100);
        digitalWrite(led, LOW);
        delay (100);
        digitalWrite(led, HIGH);
        delay (100);
        digitalWrite(led, LOW);
        delay (100);
    }
        
}
