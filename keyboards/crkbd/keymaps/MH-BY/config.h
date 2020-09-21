/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

//#define USE_MATRIX_I2C

/* Select hand configuration */

#define MASTER_LEFT
// #define MASTER_RIGHT
// #define EE_HANDS

#define SSD1306OLED

#define USE_SERIAL_PD2

#define TAPPING_FORCE_HOLD
#define TAPPING_TERM 200
//#define TAP_HOLD_CAPS_DELAY 80

#ifdef RGBLIGHT_ENABLE
    #undef RGBLED_NUM
    #define RGBLIGHT_ANIMATIONS
    #define RGBLED_NUM 27
    #define RGBLIGHT_LIMIT_VAL 120
    #define RGBLIGHT_HUE_STEP 10
    #define RGBLIGHT_SAT_STEP 17
    #define RGBLIGHT_VAL_STEP 17
#endif

#define MK_KINETIC_SPEED 	//Enable kinetic mode
#define MOUSEKEY_DELAY	 8	//Delay between pressing a movement key and cursor movement
#define MOUSEKEY_INTERVAL	8	//time between cursor movements in milliseconds
#define MOUSEKEY_MOVE_DELTA	 25	//Step size for accelerating from initial to base speed
#define MOUSEKEY_INITIAL_SPEED  100	//Initial speed of the cursor in pixel per second
#define MOUSEKEY_BASE_SPEED	 1000 //Maximum cursor speed at which acceleration stops
#define MOUSEKEY_DECELERATED_SPEED	 400	//Decelerated cursor speed
#define MOUSEKEY_ACCELERATED_SPEED	 3000	//Accelerated cursor speed
#define MOUSEKEY_WHEEL_INITIAL_MOVEMENTS  16	//initial number of movements of the mouse wheel
#define MOUSEKEY_WHEEL_BASE_MOVEMENTS	 32	//Maximum number of movements at which acceleration stops
#define MOUSEKEY_WHEEL_ACCELERATED_MOVEMENTS 48	//Accelerated wheel movements
#define MOUSEKEY_WHEEL_DECELERATED_MOVEMENTS 8	//Decelerated wheel movements
