// Code version
#define FIRMWARE_VERSION "v1"

// WiFi Credentials
#define WIFI_SSID     "Corporativo"
#define WIFI_PASSWORD "wlancticorp1*"

// MQTT Broker address/port
#define MQTT_SERVER_ADDRESS "10.100.40.2"
#define MQTT_SERVER_PORT    1883

// MQTT Broker credentials
#define MQTT_CLIENT_ID "RTBME-01"
#define MQTT_USERNAME  "yb55cuegcydkundaapsl"
#define MQTT_PASSWORD  "vfh6962d2ghwg28314l7"

// OTA credentials
#define OTA_PASSWORD "Teste@55"

// BME280 I2C pins
#define BME_SDA_PIN 0
#define BME_SCL_PIN 2

// NTP server address
#define NTP_SERVER "ntp.cti.gov.br"

// Size of JSON message buffer, for MQTT
#define MSG_BUFFER_SIZE	100

// MQTT Topics
#define MQTT_TELEMETRY_TOPIC "v1/devices/me/telemetry"
#define MQTT_ATTRIBUTE_TOPIC "v1/devices/me/attributes"
