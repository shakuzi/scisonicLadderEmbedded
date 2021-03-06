/*
/  Filename: Flasher.h	                                                    /
/  Feature:      					                                        /
/  Module:   	                                                            /
/  Author:	 Mesaflix						                                /
/                                                                           /
/                                                                           /
/  ******************** Ltd. owns the copyright in this                     /
/  and associated documents and all rights are reserved.                    /
/  This document and associated documents must not be                       /
/  used for any purpose other than that for which they                      /
/  are supplied and must not be copied in whole or in                       /
/  part, or disclosed to others without the prior                           /
/  written consent of Mesaflix Ltd.  Any copy                   			/
/  of this document made by any method must also contain a                  /
/  copy of this legend.                                                     /
/                                                                           /
*/

#ifndef INC_FLASHER_H_
#define INC_FLASHER_H_
#include "main.h"
#include "Globals.h"

extern bool FlasherInit();

extern void PC_BuffProcessing(RecData * Recved);

extern bool TestFlash();

#endif /* INC_FLASHER_H_ */
