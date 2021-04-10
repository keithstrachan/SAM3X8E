/*
  my_machine_map.h - driver code for Atmel SAM3X8E ARM processor, pin mappings compatible with Ramps-FD v1a board

  NOTE: board must be modified for 3.3V IO before use!

  Part of grblHAL

  Copyright (c) 2019-2021 Terje Io

  Mappings according to Re-ARM for NXP LPC1768

  Grbl is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  Grbl is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with Grbl.  If not, see <http://www.gnu.org/licenses/>.
*/

//#define BOARD_NAME "Ramps 1.6"
#define BOARD_NAME "RAMPS-FD v1 Rev A-07"


 // Define step pulse output pins.
#define X_STEP_PORT         PIOB
#define X_STEP_PIN          18  // Due Digital Pin 63
#define X_STEP_BIT          (1<<X_STEP_PIN)
#define Y_STEP_PORT         PIOB
#define Y_STEP_PIN          20   // Due Digital Pin 65
#define Y_STEP_BIT          (1<<Y_STEP_PIN)
#define Z_STEP_PORT         PIOB
#define Z_STEP_PIN          16  // Due Digital Pin 67
#define Z_STEP_BIT          (1<<Z_STEP_PIN)
#ifdef A_AXIS
#define A_STEP_PORT         PIOD
#define A_STEP_PIN          
#define A_STEP_BIT          (1<<A_STEP_PIN)
#endif
#ifdef B_AXIS
#define B_STEP_PORT         PIOC
#define B_STEP_PIN          
#define B_STEP_BIT          (1<<B_STEP_PIN)
#endif

// Define step direction output pins.
#define X_DIRECTION_PORT    PIOB
#define X_DIRECTION_PIN     17  // Due Digital Pin 62
#define X_DIRECTION_BIT     (1<<X_DIRECTION_PIN)
#define Y_DIRECTION_PORT    PIOB
#define Y_DIRECTION_PIN     19   // Due Digital Pin 64
#define Y_DIRECTION_BIT     (1<<Y_DIRECTION_PIN)
#define Z_DIRECTION_PORT    PIOB
#define Z_DIRECTION_PIN     15  // Due Digital Pin 66
#define Z_DIRECTION_BIT     (1<<Z_DIRECTION_PIN)
#ifdef A_AXIS
#define A_DIRECTION_PORT    PIOD
#define A_DIRECTION_PIN     
#define A_DIRECTION_BIT     (1<<A_DIRECTION_PIN)
#endif
#ifdef B_AXIS
#define B_DIRECTION_PORT    PIOC
#define B_DIRECTION_PIN     
#define B_DIRECTION_BIT     (1<<B_DIRECTION_PIN)
#endif

// Define stepper driver enable/disable output pin(s).
#define X_DISABLE_PORT      PIOC
#define X_DISABLE_PIN       15   // Due Digital Pin 48
#define X_DISABLE_BIT       (1<<X_DISABLE_PIN)
#define Y_DISABLE_PORT      PIOC
#define Y_DISABLE_PIN       17  // Due Digital Pin 46
#define Y_DISABLE_BIT       (1<<Y_DISABLE_PIN)
#define Z_DISABLE_PORT      PIOC
#define Z_DISABLE_PIN       19  // Due Digital Pin 44
#define Z_DISABLE_BIT       (1<<Z_DISABLE_PIN)
#ifdef A_AXIS
#define A_DISABLE_PORT      PIOA
#define A_DISABLE_PIN       
#define A_DISABLE_BIT       (1<<A_DISABLE_PIN)
#endif
#ifdef B_AXIS
#define B_DISABLE_PORT      PIOC
#define B_DISABLE_PIN       
#define B_DISABLE_BIT       (1<<B_DISABLE_PIN)
#endif

// Define homing/hard limit switch input pins.
#define X_LIMIT_PORT        PIOB
#define X_LIMIT_PIN         26  // Due Digital Pin 22
#define X_LIMIT_BIT         (1<<X_LIMIT_PIN)
#define Y_LIMIT_PORT        PIOA
#define Y_LIMIT_PIN         15   // Due Digital Pin 24
#define Y_LIMIT_BIT         (1<<Y_LIMIT_PIN)
#define Z_LIMIT_PORT        PIOD
#define Z_LIMIT_PIN         1  // Due Digital Pin 26
#define Z_LIMIT_BIT         (1<<Z_LIMIT_PIN)

// Define homing/hard limit switch input pins.
#define X_LIMIT_PORT_MAX    PIOD
#define X_LIMIT_PIN_MAX     9  // Due Digital Pin 30
#define X_LIMIT_BIT_MAX     (1<<X_LIMIT_PIN_MAX)
#define Y_LIMIT_PORT_MAX    PIOC
#define Y_LIMIT_PIN_MAX     6   // Due Digital Pin 38
#define Y_LIMIT_BIT_MAX     (1<<Y_LIMIT_PIN_MAX)
#define Z_LIMIT_PORT_MAX    PIOC
#define Z_LIMIT_PIN_MAX     2  // Due Digital Pin 34
#define Z_LIMIT_BIT_MAX     (1<<Z_LIMIT_PIN_MAX)

#ifndef MODBUS_ENABLE

// Define spindle enable and spindle direction output pins.
#define SPINDLE_ENABLE_PORT     PIOB
#define SPINDLE_ENABLE_PIN      25  // Due Digital Pin 2
#define SPINDLE_ENABLE_BIT      (1<<SPINDLE_ENABLE_PIN)
#define SPINDLE_DIRECTION_PORT  PIOD
#define SPINDLE_DIRECTION_PIN   8  // Due Digital Pin 12
#define SPINDLE_DIRECTION_BIT   (1<<SPINDLE_DIRECTION_PIN)

// Start of PWM & Stepper Enabled Spindle
#define SPINDLE_PWM_TIMER   (TC2->TC_CHANNEL[0])
#define SPINDLE_PWM_CCREG   2
#define SPINDLE_PWM_PORT    PIOD
#define SPINDLE_PWM_PIN     7  // Due Digital Pin 11
#define SPINDLE_PWM_BIT     (1<<SPINDLE_PWM_PIN)

#endif

// Define flood and mist coolant enable output pins.
#define COOLANT_FLOOD_PORT  PIOC
#define COOLANT_FLOOD_PIN   29  // Due Digital Pin 10
#define COOLANT_FLOOD_BIT   (1<<COOLANT_FLOOD_PIN)

// Define user-control CONTROLs (cycle start, reset, feed hold) input pins.
#define RESET_PORT          PIOC
#define RESET_PIN           24  // DUE Digital Pin 6
#define RESET_BIT           (1<<RESET_PIN)

#define FEED_HOLD_PORT      PIOC
#define FEED_HOLD_PIN       25   // DUE Digital Pin 5
#define FEED_HOLD_BIT       (1<<FEED_HOLD_PIN)

#define CYCLE_START_PORT    PIOC
#define CYCLE_START_PIN     28   // DUE Digital Pin 3
#define CYCLE_START_BIT     (1<<CYCLE_START_PIN)

/**/
