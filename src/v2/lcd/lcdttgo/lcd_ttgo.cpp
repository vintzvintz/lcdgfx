/*
    MIT License

    Copyright (c) 2022, Alexey Dynda

    Permission is hereby granted, free of charge, to any person obtaining a copy
    of this software and associated documentation files (the "Software"), to deal
    in the Software without restriction, including without limitation the rights
    to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
    copies of the Software, and to permit persons to whom the Software is
    furnished to do so, subject to the following conditions:

    The above copyright notice and this permission notice shall be included in all
    copies or substantial portions of the Software.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
    IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
    FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
    AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
    LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
    OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
    SOFTWARE.
*/

<<<<<<< HEAD
#if defined(CONFIG_ARDUINO_SPI_AVAILABLE) && defined(CONFIG_ARDUINO_SPI_ENABLE)

#include "lcd_wio.h"
#include "SPI.h"

DisplayTTGO_135x240x16::DisplayTTGO_135x240x16()
    : DisplayST7789_135x240x16_CustomSPI<ArduinoSpi>(71Ul, 70Ul, PIN_SPI3_SS, 70Ul, 20000000, &SPI3)
{
}

void DisplayWioTerminal_320x240x16::begin()
{
    DisplayILI9341_240x320x16_CustomSPI<ArduinoSpi>::begin();
    this->getInterface().setRotation(1);
}

void DisplayWioTerminal_320x240x16::end()
{
    DisplayILI9341_240x320x16_CustomSPI<ArduinoSpi>::end();
}

=======
#if defined(__XTENSA__) || defined(__linux__)

#include "lcd_ttgo.h"

DisplayTTGO_135x240x16::DisplayTTGO_135x240x16()
    : DisplayST7789_135x240x16_SPI(23, {-1, {5}, 16, 0, 18, 19})
{
}

>>>>>>> 6861f88623bd05e6b024d7601253d5c1cbad735d
#endif

/**
 * @}
 */
