# culfw
Firmware development for busware.de radio devices

## Changes
* autostart wmbus s-mode reception on boot

## Compile
```
cd Devices/CUNX
make
```

## Upload
Put CUNX in bootloader mode:
* press button next to usb port while powering on
- or -
* send B01 via telnet 

```
make dfu
```
