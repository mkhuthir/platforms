#!/bin/sh
echo "Using esptool to detect connected ESP chips..."
echo "writing chip id to text file.."
esptool chip_id > esp_chip_id.txt
echo "writing flash id to text file.."
esptool flash_id > esp_flash_id.txt
echo "done.."

