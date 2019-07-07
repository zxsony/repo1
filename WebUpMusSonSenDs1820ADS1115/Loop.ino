
void loop(void){
//if (!ledSensorState){
// watchdogCount = 0; 
//}
  watchdogCount = 0;
  if (digitalRead(button) == LOW){while(1){}};
  #ifdef ledblink
    digitalWrite(ledCurrent, HIGH);
    delay(1);
    digitalWrite(ledCurrent, LOW);
    delay(1);
  #endif 


  if (ultrasonicEn){
    averageUltrasonic();
    CheckUltrasonic(); 
  }
  #ifdef IRSensorEn
    CheckIRSensor();
  #endif 
  //
  if (sensorEn){
    //ledSensorValue = analogRead(sensorPin);
    ReadLedSensor();
    CheckLedSensor();
  }
  //
  if (TempEn){
    DsRead ();
    DsTempCalc(); 
//DallRead( flagDallRead*1000 );
  }

  if (ntpEn){ 
    updateCurrentDateTime() ;
//    testByte = timeM;
    CheckTimeEvents();
    //WIFIcheck();
    checkNtpUpdate();
    }
  
  #ifdef ADS1115
    ADC1115Read ();
  #endif
  
  #ifdef AM2320
    AM23020Read ();
  #endif

  //Serial.println(day);
   
  GetServerIndex();

  GetXmlData();
  
  server.handleClient();

  delay(10);
} 
