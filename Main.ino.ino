/*  Keypadtest.pde
 *
 *  Demonstrate the simplest use of the  keypad library.
 *
 *  The first step is to connect your keypad to the
 *  Arduino  using the pin numbers listed below in
 *  rowPins[] and colPins[]. If you want to use different
 *  pins then  you  can  change  the  numbers below to
 *  match your setup.
 *
 */
#include <Keypad.h>

double liters_entered = 0;
const byte ROWS = 4; // Four rows
const byte COLS = 4; // Three columns
// Define the Keymap
char keys[ROWS][COLS] = {
  {'3','6','9','X'},
  {'2','5','8','X'},
  {'1','4','7','X'},
  {'X','X','X','L'}
};
// Connect keypad ROW0, ROW1, ROW2 and ROW3 to these Arduino pins.
byte rowPins[ROWS] = { 2, 3, 4, 5 };
// Connect keypad COL0, COL1 and COL2 to these Arduino pins.
byte colPins[COLS] = { 6,7,8,9 }; 

// Create the Keypad
Keypad kpd = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );

#define ledpin 13
#define motorpin 6
//LiquidCrystal lcd(12, 11, 5, 4, 3, 2);


void setup()
{
  pinMode(ledpin,OUTPUT);
  digitalWrite(ledpin, HIGH);
  Serial.begin(9600);

   // set up the LCD's number of columns and rows:
//  lcd.begin(16, 2);
}

void loop()
{
  char key = kpd.getKey();

  if(key)  // Check for a valid key.
  {
    Serial.print("Key Value : ");
    Serial.println(key);
  }
}
    /*switch (key)
    {
      case '*':
        //clear
        liters_entered = 0;
        break;
      case '#':
        digitalWrite(motorpin, HIGH);
        break;
      default:
        // print on the first line and first column
        lcd.setCursor(0, 0);
        //print value/amount entered on to lcd
        lcd.print(key);
    }
  } 
  
}
*/


