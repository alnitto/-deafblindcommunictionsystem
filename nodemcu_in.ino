#include <ESP8266WiFi.h>
#include <ESP8266HTTPClient.h>
 
const char* ssid = "Danjo";
const char* password = "Openadaa";
const int PIN1 = 16;
const int PIN2= 5;
const int PIN3 = 4;
const int PIN4 = 0;
const int PIN5 = 2;
const int PIN6 = 14;
const int PIN7 = 12;
const int PIN8 = 13;
const int PIN9 = 15;
 int p1= LOW;
 int p9= LOW;
 int p3=LOW;
 int p2= LOW;
 int p4= LOW;
 int p5=LOW;
 int p6= LOW;
 int p7= LOW;
 int p8=LOW;
    HTTPClient http; 
 
void setup () {
 
  Serial.begin(9600);
  WiFi.begin(ssid, password);

    pinMode(PIN1, INPUT_PULLUP);
    pinMode(PIN2, INPUT_PULLUP);
    pinMode(PIN3, INPUT_PULLUP);
    pinMode(PIN4, INPUT_PULLUP);
    pinMode(PIN5, INPUT_PULLUP);
    pinMode(PIN6, INPUT_PULLUP);
    pinMode(PIN7, INPUT_PULLUP);
    pinMode(PIN8, INPUT_PULLUP);
    pinMode(PIN9, INPUT_PULLUP);
    
  while (WiFi.status() != WL_CONNECTED) {
 
    delay(1000);
    Serial.print("Connecting..");
 
  }Serial.print("Connected");
 
 
}
 
void loop() {
 
  if (WiFi.status() == WL_CONNECTED) { //Check WiFi connection status
 
 //Declare an object of class HTTPClient
 if ((digitalRead(PIN1)==LOW)&&(p1== LOW)){
  p1=HIGH;
    Serial.println("1 is high");
    http.begin("http://192.168.43.198/1/y");  //Specify request destination
    int httpCode = http.GET();   
    Serial.println(httpCode);//Send the request
 
    if (httpCode > 0) { //Check the returning code
 
      String payload = http.getString();   //Get the request response payload
      Serial.println(payload);                     //Print the response payload
 
    }
 
    http.end(); }  //Close connection
    if ((digitalRead(PIN1)==HIGH)&&(p1==HIGH)){ 
      p1=LOW;
      Serial.println("1 is low");
    http.begin("http://192.168.43.198/1/n");  //Specify request destination
   int httpCode = http.GET();                                                                  //Send the request
     Serial.println(httpCode);//Send the request

    if (httpCode > 0) { //Check the returning code
 
      String payload = http.getString();   //Get the request response payload
      Serial.println(payload);                     //Print the response payload
 
    }
 
    http.end();  } //Close connection
if ((digitalRead(PIN2)==LOW)&&(p2== LOW)){ 
  p2=HIGH;
  Serial.println("2 is high");
    http.begin("http://192.168.43.198/2/y");  //Specify request destination
    int httpCode = http.GET();                                                                  //Send the request
     Serial.println(httpCode);//Send the request

    if (httpCode > 0) { //Check the returning code
 
      String payload = http.getString();   //Get the request response payload
      Serial.println(payload);                     //Print the response payload
 
    }
 
    http.end();   }//Close connection
    if ((digitalRead(PIN2)==HIGH)&&(p2== HIGH)){ 
      p2=LOW;
      Serial.println("2 is low");
 http.begin("http://192.168.43.198/2/n");  //Specify request destination
   int httpCode = http.GET();                                                                  //Send the request
     Serial.println(httpCode);//Send the request

    if (httpCode > 0) { //Check the returning code
 
      String payload = http.getString();   //Get the request response payload
      Serial.println(payload);                     //Print the response payload
 
    }
 
    http.end();  } //Close connection

    if ((digitalRead(PIN3)==LOW)&&(p3== LOW)){
  p3=HIGH;
    Serial.println("3 is high");
    http.begin("http://192.168.43.198/3/y");  //Specify request destination
    int httpCode = http.GET();   
    Serial.println(httpCode);//Send the request
 
    if (httpCode > 0) { //Check the returning code
 
      String payload = http.getString();   //Get the request response payload
      Serial.println(payload);                     //Print the response payload
 
    }
 
    http.end(); }  //Close connection
    if ((digitalRead(PIN3)==HIGH)&&(p3==HIGH)){ 
      p3=LOW;
      Serial.println("2 is low");
    http.begin("http://192.168.43.198/3/n");  //Specify request destination
   int httpCode = http.GET();                                                                  //Send the request
     Serial.println(httpCode);//Send the request

    if (httpCode > 0) { //Check the returning code
 
      String payload = http.getString();   //Get the request response payload
      Serial.println(payload);                     //Print the response payload
 
    }
 
    http.end();  } //Close connection

    if ((digitalRead(PIN4)==LOW)&&(p4== LOW)){
  p4=HIGH;
    Serial.println("4 is high");
    http.begin("http://192.168.43.198/4/y");  //Specify request destination
    int httpCode = http.GET();   
    Serial.println(httpCode);//Send the request
 
    if (httpCode > 0) { //Check the returning code
 
      String payload = http.getString();   //Get the request response payload
      Serial.println(payload);                     //Print the response payload
 
    }
 
    http.end(); }  //Close connection
    if ((digitalRead(PIN4)==HIGH)&&(p4==HIGH)){ 
      p4=LOW;
      Serial.println("4 is low");
    http.begin("http://192.168.43.198/4/n");  //Specify request destination
   int httpCode = http.GET();                                                                  //Send the request
     Serial.println(httpCode);//Send the request

    if (httpCode > 0) { //Check the returning code
 
      String payload = http.getString();   //Get the request response payload
      Serial.println(payload);                     //Print the response payload
 
    }
 
    http.end();  } //Close connection
    if ((digitalRead(PIN5)==LOW)&&(p5== LOW)){
  p5=HIGH;
    Serial.println("5 is high");
    http.begin("http://192.168.43.198/5/y");  //Specify request destination
    int httpCode = http.GET();   
    Serial.println(httpCode);//Send the request
 
    if (httpCode > 0) { //Check the returning code
 
      String payload = http.getString();   //Get the request response payload
      Serial.println(payload);                     //Print the response payload
 
    }
 
    http.end(); }  //Close connection
    if ((digitalRead(PIN5)==HIGH)&&(p5==HIGH)){ 
      p5=LOW;
      Serial.println("5 is low");
    http.begin("http://192.168.43.198/5/n");  //Specify request destination
   int httpCode = http.GET();                                                                  //Send the request
     Serial.println(httpCode);//Send the request

    if (httpCode > 0) { //Check the returning code
 
      String payload = http.getString();   //Get the request response payload
      Serial.println(payload);                     //Print the response payload
 
    }
 
    http.end();  } //Close connection
    if ((digitalRead(PIN6)==LOW)&&(p6== LOW)){
  p6=HIGH;
    Serial.println("6 is high");
    http.begin("http://192.168.43.198/6/y");  //Specify request destination
    int httpCode = http.GET();   
    Serial.println(httpCode);//Send the request
 
    if (httpCode > 0) { //Check the returning code
 
      String payload = http.getString();   //Get the request response payload
      Serial.println(payload);                     //Print the response payload
 
    }
 
    http.end(); }  //Close connection
    if ((digitalRead(PIN6)==HIGH)&&(p6==HIGH)){ 
      p6=LOW;
      Serial.println("6 is low");
    http.begin("http://192.168.43.198/6/n");  //Specify request destination
   int httpCode = http.GET();                                                                  //Send the request
     Serial.println(httpCode);//Send the request

    if (httpCode > 0) { //Check the returning code
 
      String payload = http.getString();   //Get the request response payload
      Serial.println(payload);                     //Print the response payload
 
    }
 
    http.end();  } //Close connection
    if ((digitalRead(PIN7)==LOW)&&(p7== LOW)){
  p7=HIGH;
    Serial.println("7 is high");
    http.begin("http://192.168.43.198/7/y");  //Specify request destination
    int httpCode = http.GET();   
    Serial.println(httpCode);//Send the request
 
    if (httpCode > 0) { //Check the returning code
 
      String payload = http.getString();   //Get the request response payload
      Serial.println(payload);                     //Print the response payload
 
    }
 
    http.end(); }  //Close connection
    if ((digitalRead(PIN7)==HIGH)&&(p7==HIGH)){ 
      p7=LOW;
      Serial.println("7 is low");
    http.begin("http://192.168.43.198/7/n");  //Specify request destination
   int httpCode = http.GET();                                                                  //Send the request
     Serial.println(httpCode);//Send the request

    if (httpCode > 0) { //Check the returning code
 
      String payload = http.getString();   //Get the request response payload
      Serial.println(payload);                     //Print the response payload
 
    }
 
    http.end();  } //Close connection
    if ((digitalRead(PIN8)==LOW)&&(p8== LOW)){
  p8=HIGH;
    Serial.println("8 is high");
    http.begin("http://192.168.43.198/8/y");  //Specify request destination
    int httpCode = http.GET();   
    Serial.println(httpCode);//Send the request
 
    if (httpCode > 0) { //Check the returning code
 
      String payload = http.getString();   //Get the request response payload
      Serial.println(payload);                     //Print the response payload
 
    }
 
    http.end(); }  //Close connection
    if ((digitalRead(PIN8)==HIGH)&&(p8==HIGH)){ 
      p8=LOW;
      Serial.println("8 is low");
    http.begin("http://192.168.43.198/8/n");  //Specify request destination
   int httpCode = http.GET();                                                                  //Send the request
     Serial.println(httpCode);//Send the request

    if (httpCode > 0) { //Check the returning code
 
      String payload = http.getString();   //Get the request response payload
      Serial.println(payload);                     //Print the response payload
 
    }
 
    http.end();  } //Close connection

    if ((digitalRead(PIN9)==LOW)&&(p9== LOW)){
  p9=HIGH;
    Serial.println("9 is high");
    http.begin("http://192.168.43.198/9/y");  //Specify request destination
    int httpCode = http.GET();   
    Serial.println(httpCode);//Send the request
 
    if (httpCode > 0) { //Check the returning code
 
      String payload = http.getString();   //Get the request response payload
      Serial.println(payload);                     //Print the response payload
 
    }
 
    http.end(); }  //Close connection
    if ((digitalRead(PIN9)==HIGH)&&(p9==HIGH)){ 
      p9=LOW;
      Serial.println("9 is low");
    http.begin("http://192.168.43.198/9/n");  //Specify request destination
   int httpCode = http.GET();                                                                  //Send the request
     Serial.println(httpCode);//Send the request

    if (httpCode > 0) { //Check the returning code
 
      String payload = http.getString();   //Get the request response payload
      Serial.println(payload);                     //Print the response payload
 
    }
 
    http.end();  } //Close connection
 
 
  }
 
 
}
