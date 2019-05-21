#include "secrets.h"

#define HOSTNAME "roomba-01" // e.g. roomba.local
#define BRC_PIN 14
#define ROOMBA_650_SLEEP_FIX 0

#define ADC_VOLTAGE_DIVIDER 44.551316985
//#define ENABLE_ADC_SLEEP

#define MQTT_SERVER "mqtt.atl.zombielinux.org"
#define MQTT_USER "will"
#define MQTT_COMMAND_TOPIC "roomba-01/command"
#define MQTT_STATE_TOPIC "roomba-01/state"
