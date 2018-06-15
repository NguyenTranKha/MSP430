/*
 * ConfirmUart.h
 *
 *  Created on: 15 Jun 2018
 *      Author: TechMaster
 */

#ifndef CONFIRMUART_H_
#define CONFIRMUART_H_

//Include library
#include "msp430g2553.h"

//value


//function
void ConfirmUart();
void UartSendChar(char *Char);
void UartSendString();
char *UartReceiveString();


#endif /* CONFIRMUART_H_ */
