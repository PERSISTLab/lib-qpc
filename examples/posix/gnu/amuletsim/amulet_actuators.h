/*****************************************************************************
* Model: amulet_actuators.qm
* File:  ./amulet_actuators.h
*
* This code has been generated by QM tool (see state-machine.com/qm).
* DO NOT EDIT THIS FILE MANUALLY. All your changes will be lost.
*
* This program is open source software: you can redistribute it and/or
* modify it under the terms of the GNU General Public License as published
* by the Free Software Foundation.
*
* This program is distributed in the hope that it will be useful, but
* WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
* or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
* for more details.
*****************************************************************************/
/* @(/3/1) .................................................................*/
#ifndef amulet_actuators_h
#define amulet_actuators_h

#include "qp_port.h"
#include "amulet.h"
#include "amulet_api.h"


enum AmuletActuatorsSignals {
    LEDON_SIG = Q_USER_SIG,
    LEDOFF_SIG,
    DISPLAY_MESSAGE_SIG
};

/* @(/2/0) .................................................................*/
typedef struct AmuletActuatorsEvtTag {
/* protected: */
    QEvt super;

/* public: */
    uint8_t led_id;
    uint8_t * message;
    uint8_t message_len;
    uint8_t * authorization;
} AmuletActuatorsEvt;


/* @(/1/2) .................................................................*/
void AmuletActuators_ctor(void);

extern QActive * const AO_AmuletActuators;


#endif                    /* amulet_actuators_h */
