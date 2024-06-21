// Muthanna Alwahash
// Nov 2023

#include <Arduino.h>

void setup() {
	Serial.begin(115200);
}

void loop() {

	Serial.printf("Chip model \t= %s\n", ESP.getChipModel());
	Serial.printf("Revision \t= %d\n"  , ESP.getChipRevision());
	Serial.printf("No of cores \t= %d\n",ESP.getChipCores());

	delay(3000);

}