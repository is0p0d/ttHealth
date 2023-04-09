/**********************************************************
 * Jim M                                       04.06.2023 *
 * driver.cpp - part of the ttHealth project.             *
 * 
 **********************************************************/
#include <Arduino.h>



void setup()
{
    //*********************************************************
    // PINMODE DESCRIPTIONS
    //*********************************************************
    // Pins D1, D0, and D2 are tied to the enable lines of the 
    // three 3-to-8 MUX chips.
    // Pin D1 handles LEDs 1-8
    // Pin D0 handles LEDs 9-16
    // Pin D2 handles LEDs 17-20
    // NOTE: The reason for this odd order of D1,D0,D2 is due to
    // the layout of the Arduino Nano's pin order with the prev-
    // iously mentioned pinouts being 1,2,5 respectively
    //
    // Pins D3, D4, and D5 (6,7,8 respectively) are the drivers 
    // of the bus that all of the inputs of the aforementioned
    // mux chips are connected to, with inputs 0,1,2 on each chip
    // being connected to D3, D4, and D5 in that order.
    //
    // The intention is to sync the enables of these mux chips
    // with the correct combination of inputs to make a visually
    // continuous (atleast to the human eye) health bar.
    pinMode(D1, OUTPUT); // pin 1
    pinMode(D0, OUTPUT); // pin 2
    pinMode(D2, OUTPUT); // pin 5
    pinMode(D3, OUTPUT); // pin 6
    pinMode(D4, OUTPUT); // pin 7
    pinMode(D5, OUTPUT); // pin 8
}

//*********************************************************
//* GLOBAL VARIABLES                                      *
//*********************************************************
// I don't like using global variables, but this for this
// application I think they'll be more cycle efficient than
// pointers.

int healthMax = 0,
    healthCurrent = 0,
    healthPercent = float(healthCurrent)/healthMax,
    barValue = healthPercent/5;

void loop()
{

    //*********************************************************
    //* HEALTH BAR LOGIC                                      *
    //*********************************************************
    // Writing this at 2am on a boeing 737-700 so this might 
    // be something to reconsider later on, 

}