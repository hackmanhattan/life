#ifndef _LIFE_H
#define _LIFE_H

#define RGB_DDR DDRB
#define RGB_PORT PORTB

#define OUTPUT_DDR DDRA
#define OUTPUT_PORT PORTA

#define RED_PIN 1
#define GREEN_PIN 2
#define BLUE_PIN 0
#define OUTPUT_PIN 7

#define LED_DDR DDRA
#define LED_PORT PORTA
#define LED_PIN 1

#define TOUCH_PORT PORTA
#define TOUCH_PIN 0
#define TOUCH_ADC 0

#define TOUCH_CALS 16
#define TOUCH_THRESHOLD 100
#define TOUCH_CAL_INTERVAL 100
#define TOUCH_MEASURES 8

#define NEIGHBOR_READINGS 256

#define LOOP_INTERVAL 50

#define NC_ADC 6

#define IN_PORT PORTA
#define IN1_ADC 2
#define IN2_ADC 3
#define IN3_ADC 4
#define IN4_ADC 5

#define TEMP_SAMPLES 5

#define TEMP_ADC 0b100010

#define PWM_BITS 8

#define NEIGHBORS 4

inline void led_on();
inline void led_off();

inline void timer_init();
inline void adc_init();
inline void touch_calibrate();
uint16_t touch_measure();
uint16_t touch_measure_one();
inline void seed();
void adc_channel(uint8_t channel);
uint16_t adc_get_raw();
uint8_t adc_get();

inline void read_neighbors();
uint8_t read_neighbor();

uint8_t rand_to_state(int r);
uint8_t adc_to_state(uint16_t a);

void advance_state();
void update_colors();

void blink(uint8_t times);

#endif
