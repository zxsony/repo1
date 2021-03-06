
void GetXmlData (void){
  xmlData = "<?xml version='1.0' ?><main><device>";
  xmlData += deviceId;
  xmlData += "</device>";
  
  xmlData += "<ver>";
  xmlData += ver;
  xmlData += "</ver>";

  xmlData += "<mp3En>";
  xmlData += mp3En;
  xmlData += "</mp3En>";

  xmlData += "<tempEn>";
  xmlData += tempEn;
  xmlData += "</tempEn>";

  xmlData += "<ultrasonicEn>";
  xmlData += ultrasonicEn;
  xmlData += "</ultrasonicEn>";

  xmlData += "<analogSensorEn>";
  xmlData += analogSensorEn;
  xmlData += "</analogSensorEn>";

  xmlData += "<ntpEn>";
  xmlData += ntpEn;
  xmlData += "</ntpEn>";

  xmlData += "<IRSensorEn>";
  xmlData += IRSensorEnVar;
  xmlData += "</IRSensorEn>";

  xmlData += "<ledblink>";
  xmlData += ledblink;
  xmlData += "</ledblink>";

  xmlData += "<localIP>";
  xmlData += WiFi.localIP().toString();;
  xmlData += "</localIP>";

  xmlData += "<RSSI>";
  xmlData += (long)WiFi.RSSI();;
  xmlData += "</RSSI>";

  xmlData += "<ntpRegion>";
  xmlData += ntpRegion;
  xmlData += "</ntpRegion>";

  xmlData += "<UT>";
  xmlData += millis()/1000;
  xmlData += "</UT>";

  xmlData += "<CTD>";
  xmlData += currentTimeDeviceString;
  xmlData += "</CTD>";

  xmlData += "<iRSensorOnCounter>";
  xmlData += iRSensorOnCounter;
  xmlData += "</iRSensorOnCounter>";

  xmlData += "<ultrasonicOnCounter>";
  xmlData += ultrasonicOnCounter;
  xmlData += "</ultrasonicOnCounter>";

  xmlData += "<ultrasonicValue>";
  xmlData += ultrasonicValue;
  xmlData += "</ultrasonicValue>";

  xmlData += "<switchOnCounter>";
  xmlData += switchOnCounter;
  xmlData += "</switchOnCounter>";

  xmlData += "<analogSensorValue>";
  xmlData += analogSensorValue;
  xmlData += "</analogSensorValue>";

  xmlData += "<dsTemp1>";
  xmlData += dsTemp1;
  xmlData += "</dsTemp1>";

  xmlData += "<dsTemp2>";
  xmlData += dsTemp2;
  xmlData += "</dsTemp2>";


  if (am2320En){
  xmlData += "<am2320h>";
  xmlData += am2320h;
  xmlData += "</am2320h>";
    
  xmlData += "<am2320t>";
  xmlData += am2320t;
  xmlData += "</am2320t>";
  }

  #ifdef ADS1115
  xmlData += "<Gas>";
  xmlData += float((adc0 * 0.1875)/1000);
  xmlData += "</Gas>";

  xmlData += "<DGa>";
  xmlData += float((adc1 * 0.1875)/1000);
  xmlData += "</DGa>";

  xmlData += "<v33>";
  xmlData += float((adc2 * 0.1875)/1000);
  xmlData += "</v33>";

  xmlData += "<v50>";
  xmlData += float((adc3 * 0.1875)/1000);
  xmlData += "</v50>";
  #endif
  

  xmlData += "</main>";
}
