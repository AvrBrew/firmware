
This is a fork of the main source code repository for the firmware on the BrewPi brewing temperature controller. It is designed solely for the Arduino controller (although it still contains spark specific code) and will build with Atmel Studio 7.

## Building the firmware for Arduino
To build the firmware for Arduino, you will have to use [Atmel Studio](http://www.atmel.com/microsite/atmel_studio/). The repo includes an Atmel studio project.

The project assumes that there are Arduino tools at C:\Program Files (x86)\Arduino. If you have these installed at another location then you will need to change the Post-build event command line to use the correct path for the nm tool. This can be set in the Project properties.

## Changelog
A list of the changes per release can be found in the CHANGELOG file.


## Licence
Unless stated elsewhere, file headers or otherwise, all files herein are licensed under an GPLv3 licence. For more information, please read the LICENSE file.
