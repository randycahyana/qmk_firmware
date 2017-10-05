## How to Build

* `make xd60:rnd`
* `sudo dfu-programmer atmega32u4 erase`
* `sudo dfu-programmer atmega32u4 flash .build/xd60_rnd.hex`
* `sudo dfu-programmer atmega32u4 start`
