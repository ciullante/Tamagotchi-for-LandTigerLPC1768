#ifndef WRAPPER_H 
#define WRAPPER_H

/* Includes ------------------------------------------------------------------*/
#include "LPC17xx.h"
#include "../GLCD/GLCD.h"
#include "../timer/timer.h"
#include "../RIT/RIT.h"
#include <string.h>
#include <stdio.h>
#include "../TouchPanel/TouchPanel.h"

typedef enum { false, true } bool;


/*   														INTERFACE																							 */

void initGameTimers(void);
void startGame(void);
void checkJoyStick(void);
void updateTime(void);
void checkTouchPanel(void);


void animate(void);

void drawVolumeStatus(void);




#endif

