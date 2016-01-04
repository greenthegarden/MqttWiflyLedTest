#ifndef MQTTWIFLYRELAYDUINO_NETWORK_CONFIG_H_
#define MQTTWIFLYRELAYDUINO_NETWORK_CONFIG_H_


#define USE_SECURE_NETWORK      true

// Wifi parameters
const char MY_SSID[]          = "videoAtHome";
#if USE_SECURE_NETWORK
const char MY_PASSPHRASE[]    = "Cambridge&";
boolean    mode               = true; //or WEP_MODE
#endif


#endif  /* MQTTWIFLYRELAYDUINO_NETWORK_CONFIG_H_ */

