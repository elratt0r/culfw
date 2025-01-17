/* Copyright Rudolf Koenig, 2008.
   Released under the GPL Licence, Version 2
   Inpired by the MyUSB USBtoSerial demo, Copyright (C) Dean Camera, 2008.
*/

#include <avr/io.h>
#include <string.h>

#include "culfw.h"
#include "board.h"
#include "display.h"
#include "rf_receive.h"

#ifdef HAS_MBUS
#include "rf_mbus.h"
#endif

void setup() {
  DS_P(PSTR("auto start rf_mbus"));
  DNL();
  // enable wmbus S-MODE
  rf_mbus_func("brs");
  // enable RSSI
  set_txreport("X21");
}

void loop() {
}
