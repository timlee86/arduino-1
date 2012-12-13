#ifndef LEDPATTERN_H
#define LEDPATTERN_H
#include <Arduino.h>

namespace Patt {
    enum Pattern { OFF, ON, CIRCULAR, BACK_AND_FORTH, FLASHING};
}

class LEDGroup {
public:
    LEDGroup(int pins[], size_t len) {
        memcpy(this->pins, pins, len * sizeof(pins[0]));
        this->len = len;
    }
    void runPattern(Patt::Pattern patt, unsigned long changeTime = 500/*, bool fade = false*/) {
        unsigned long curTime = millis();

        static unsigned long lastTime = 0;

        switch(patt) {
        case Patt::OFF:
            for (size_t i=0; i<len; i++) {
                digitalWrite(pins[i], LOW);
            }
            break;
        case Patt::ON:
            for (size_t i=0; i<len; i++) {
                digitalWrite(pins[i], HIGH);
            }
            break;
        case Patt::CIRCULAR:
        {
            if (curTime - lastTime >= changeTime) {
                static size_t whichPin = 0;
                for (size_t i=0; i<len; i++) {
                    if (i == whichPin) {
                        digitalWrite(pins[i], HIGH);
                    }
                    else {
                        digitalWrite(pins[i], LOW);
                    }
                }
                if (whichPin >= len) whichPin = 0;
                else                 whichPin++;
            }
            break;
        }
        case Patt::BACK_AND_FORTH:
        {
            if (curTime - lastTime >= changeTime) {
                static size_t whichPin = 0;
                static bool forward = true;
                for (size_t i=0; i<len; i++) {
                    if (i == whichPin) {
                        digitalWrite(pins[i], HIGH);
                    }
                    else {
                        digitalWrite(pins[i], LOW);
                    }
                }
                if (whichPin >= len) forward = false;
                else if (whichPin <= 0) forward = true;
                whichPin += forward? +1 : -1;
            }
            break;
        }
        case Patt::FLASHING:
        {
            if (curTime - lastTime >= changeTime) {
                static bool on = true;
                for (size_t i=0; i<len; i++) {
                    digitalWrite(pins[i], on);
                }
                on = !on;
            }
            break;
        }
        }
        lastTime = curTime;
    }
private:
    int pins[];
    size_t len;
};
#endif //LEDPATTERN_H
