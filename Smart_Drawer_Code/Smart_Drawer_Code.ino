#include <ESP32_Servo.h>
#define BLYNK_PRINT Serial
#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>
Servo myservo;
int pos = 0;
char auth[] = "-";
char ssid[] = "-";
char pass[] = "-";

WidgetLED led1(V1);

WidgetLED led2(V2);
WidgetLED led3(V3);
WidgetLED led4(V4);
WidgetLED led5(V5);
WidgetLED led6(V6);
WidgetLED led7(V7);
WidgetLED led8(V8);
WidgetLED led9(V17);
WidgetLED led10(V18);
WidgetLED led11(V11);
WidgetLED led12(V12);
WidgetLED led13(V13);
WidgetLED led14(V14);
WidgetLED led15(V15);
WidgetLED led16(V16);
void setup()
{
  Serial.begin(115200);
  Serial.print("Connecting to ");
  Serial.println(ssid);
  WiFi.begin(ssid, pass);
  int wifi_ctr = 0;
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Blynk.begin(auth, ssid, pass);

}
BLYNK_WRITE(V1)
{
  int val = param.asInt();
  if (val == 1)
  {
    myservo.attach(13);
    Serial.print("Switch 1 turn on ...");
    for (pos = 0; pos <= 180; pos += 1) {
      myservo.write(pos);
      Serial.println(pos);
      delay(1);                       // waits 15ms for the servo to reach the position
    }
    for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
      myservo.write(pos);              // tell servo to go to position in variable 'pos'
      Serial.println(pos);
      delay(1);                       // waits 15ms for the servo to reach the position
    }
    myservo.detach();
    Blynk.virtualWrite(1, LOW);
  }
}
BLYNK_WRITE(V2)
{
  int val = param.asInt();
  if (val == 1)
  {
    myservo.attach(12);
    Serial.print("Switch 1 turn on ...");
    for (pos = 0; pos <= 180; pos += 1) {
      myservo.write(pos);
      Serial.println(pos);
      delay(1);                       // waits 15ms for the servo to reach the position
    }
    for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
      myservo.write(pos);              // tell servo to go to position in variable 'pos'
      Serial.println(pos);
      delay(1);                       // waits 15ms for the servo to reach the position
    }
    myservo.detach();
    Blynk.virtualWrite(2, LOW);
  }
}
BLYNK_WRITE(V3)
{
  int val = param.asInt();
  if (val == 1)
  {
    myservo.attach(14);
    Serial.print("Switch 1 turn on ...");
    for (pos = 0; pos <= 180; pos += 1) {
      myservo.write(pos);
      Serial.println(pos);
      delay(1);                       // waits 15ms for the servo to reach the position
    }
    for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
      myservo.write(pos);              // tell servo to go to position in variable 'pos'
      Serial.println(pos);
      delay(1);                       // waits 15ms for the servo to reach the position
    }
      myservo.detach();
      Blynk.virtualWrite(3, LOW);
    }
  }
  BLYNK_WRITE(V4)
  {
    int val = param.asInt();
    if (val == 1)
    {
      myservo.attach(27);
      Serial.print("Switch 1 turn on ...");
      for (pos = 0; pos <= 180; pos += 1) {
        myservo.write(pos);
        Serial.println(pos);
        delay(1);                       // waits 15ms for the servo to reach the position
      }
      for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
        myservo.write(pos);              // tell servo to go to position in variable 'pos'
        Serial.println(pos);
        delay(1);                       // waits 15ms for the servo to reach the position
      }

      myservo.detach();
      Blynk.virtualWrite(4, LOW);
    }
  }
  BLYNK_WRITE(V5)
  {
    int val = param.asInt();
    if (val == 1)
    {
      myservo.attach(26);
      Serial.print("Switch 1 turn on ...");
      for (pos = 0; pos <= 180; pos += 1) {
        myservo.write(pos);
        Serial.println(pos);
        delay(1);                       // waits 15ms for the servo to reach the position
      }
      for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
        myservo.write(pos);              // tell servo to go to position in variable 'pos'
        Serial.println(pos);
        delay(1);                       // waits 15ms for the servo to reach the position
      }
      myservo.detach();
      Blynk.virtualWrite(5, LOW);
    }
  }
  BLYNK_WRITE(V6)
  {
    int val = param.asInt();
    if (val == 1)
    {
      myservo.attach(25);
      Serial.print("Switch 1 turn on ...");
      for (pos = 0; pos <= 180; pos += 1) {
        myservo.write(pos);
        Serial.println(pos);
        delay(1);                       // waits 15ms for the servo to reach the position
      }
      for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
        myservo.write(pos);              // tell servo to go to position in variable 'pos'
        Serial.println(pos);
        delay(1);                       // waits 15ms for the servo to reach the position
      }
      myservo.detach();
      Blynk.virtualWrite(6, LOW);
    }
  }
  BLYNK_WRITE(V7)
  {
    int val = param.asInt();
    if (val == 1)
    {
      myservo.attach(33);
      Serial.print("Switch 1 turn on ...");
      for (pos = 0; pos <= 180; pos += 1) {
        myservo.write(pos);
        Serial.println(pos);
        delay(1);                       // waits 15ms for the servo to reach the position
      }
      for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
        myservo.write(pos);              // tell servo to go to position in variable 'pos'
        Serial.println(pos);
        delay(1);                       // waits 15ms for the servo to reach the position
      }
      myservo.detach();
      Blynk.virtualWrite(7, LOW);
    }
  }
  BLYNK_WRITE(V8)
  {
    int val = param.asInt();
    if (val == 1)
    {
      myservo.attach(32);
      Serial.print("Switch 1 turn on ...");
      for (pos = 0; pos <= 180; pos += 1) {
        myservo.write(pos);
        Serial.println(pos);
        delay(1);                       // waits 15ms for the servo to reach the position
      }
      for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
        myservo.write(pos);              // tell servo to go to position in variable 'pos'
        Serial.println(pos);
        delay(1);                       // waits 15ms for the servo to reach the position
      }
      myservo.detach();
      Blynk.virtualWrite(8, LOW);
    }
  }
  BLYNK_WRITE(V17)
  {
    int val = param.asInt();
    if (val == 1)
    {
      myservo.attach(21);
      Serial.print("Switch 1 turn on ...");
      for (pos = 0; pos <= 180; pos += 1) {
        myservo.write(pos);
        Serial.println(pos);
        delay(1);                       // waits 15ms for the servo to reach the position
      }
      for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
        myservo.write(pos);              // tell servo to go to position in variable 'pos'
        Serial.println(pos);
        delay(1);                       // waits 15ms for the servo to reach the position
      }
      myservo.detach();
      Blynk.virtualWrite(17, LOW);
    }
  }
  BLYNK_WRITE(V18)
  {
    int val = param.asInt();
    if (val == 1)
    {
      myservo.attach(18);
      Serial.print("Switch 1 turn on ...");
      for (pos = 0; pos <= 180; pos += 1) {
        myservo.write(pos);
        Serial.println(pos);
        delay(1);                       // waits 15ms for the servo to reach the position
      }
      for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
        myservo.write(pos);              // tell servo to go to position in variable 'pos'
        Serial.println(pos);
        delay(1);                       // waits 15ms for the servo to reach the position
      }
      myservo.detach();
      Blynk.virtualWrite(18, LOW);
    }
  }
  BLYNK_WRITE(V11)
  {
    int val = param.asInt();
    if (val == 1)
    {
      myservo.attach(15);
      Serial.print("Switch 1 turn on ...");
      for (pos = 0; pos <= 180; pos += 1) {
        myservo.write(pos);
        Serial.println(pos);
        delay(1);                       // waits 15ms for the servo to reach the position
      }
      for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
        myservo.write(pos);              // tell servo to go to position in variable 'pos'
        Serial.println(pos);
        delay(1);                       // waits 15ms for the servo to reach the position
      }
      myservo.detach();
      Blynk.virtualWrite(11, LOW);
    }
  }
  BLYNK_WRITE(V12)
  {
    int val = param.asInt();
    if (val == 1)
    {
      myservo.attach(2);
      Serial.print("Switch 1 turn on ...");
      for (pos = 0; pos <= 180; pos += 1) {
        myservo.write(pos);
        Serial.println(pos);
        delay(1);                       // waits 15ms for the servo to reach the position
      }
      for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
        myservo.write(pos);              // tell servo to go to position in variable 'pos'
        Serial.println(pos);
        delay(1);                       // waits 15ms for the servo to reach the position
      }
      myservo.detach();
      Blynk.virtualWrite(12, LOW);
    }
  }
  BLYNK_WRITE(V13)
  {
    int val = param.asInt();
    if (val == 1)
    {
      myservo.attach(4);
      Serial.print("Switch 1 turn on ...");
      for (pos = 0; pos <= 180; pos += 1) {
        myservo.write(pos);
        Serial.println(pos);
        delay(1);                       // waits 15ms for the servo to reach the position
      }
      for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
        myservo.write(pos);              // tell servo to go to position in variable 'pos'
        Serial.println(pos);
        delay(1);                       // waits 15ms for the servo to reach the position
      }
      myservo.detach();
      Blynk.virtualWrite(13, LOW);
    }
  }
  BLYNK_WRITE(V14)
  {
    int val = param.asInt();
    if (val == 1)
    {
      myservo.attach(5);
      Serial.print("Switch 1 turn on ...");
      for (pos = 0; pos <= 180; pos += 1) {
        myservo.write(pos);
        Serial.println(pos);
        delay(1);                       // waits 15ms for the servo to reach the position
      }
      for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
        myservo.write(pos);              // tell servo to go to position in variable 'pos'
        Serial.println(pos);
        delay(1);                       // waits 15ms for the servo to reach the position
      }
      myservo.detach();
      Blynk.virtualWrite(14, LOW);
    }
  }
  BLYNK_WRITE(V15)
  {
    int val = param.asInt();
    if (val == 1)
    {
      myservo.attach(22);
      Serial.print("Switch 1 turn on ...");
      for (pos = 0; pos <= 180; pos += 1) {
        myservo.write(pos);
        Serial.println(pos);
        delay(1);                       // waits 15ms for the servo to reach the position
      }
      for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
        myservo.write(pos);              // tell servo to go to position in variable 'pos'
        Serial.println(pos);
        delay(1);                       // waits 15ms for the servo to reach the position
      }
      myservo.detach();
      Blynk.virtualWrite(15, LOW);
    }
  }
  BLYNK_WRITE(V16)
  {
    int val = param.asInt();
    if (val == 1)
    {
      myservo.attach(23);
      Serial.print("Switch 1 turn on ...");
      for (pos = 0; pos <= 180; pos += 1) {
        myservo.write(pos);
        Serial.println(pos);
        delay(1);                       // waits 15ms for the servo to reach the position
      }
      for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
        myservo.write(pos);              // tell servo to go to position in variable 'pos'
        Serial.println(pos);
        delay(1);                       // waits 15ms for the servo to reach the position
      }
      myservo.detach();
      Blynk.virtualWrite(16, LOW);
    }
  }
  //In the loop function include Blynk.run() command.
  void loop()
  {
    Blynk.run();
  }
