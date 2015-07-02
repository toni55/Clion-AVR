#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    DDRD |= 1 << PD7;

    while (1) {
        PORTD ^= 1 << PD7;
        _delay_ms(1000);

    }
}
