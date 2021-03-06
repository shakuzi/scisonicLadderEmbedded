/*
/  Filename: Global.c	                                                    /
/  Feature:  					                                            /
/  Module:   MISC                                                           /
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

#include "Globals.h"
#include <stdio.h>
#include <string.h>

//----------------------------------------------------------------------
bool ProgrammingMode;
bool FlashIsProgrammed;
bool BusyFlag;

RecData RecvData;
SData SendData;
ADCChannels Channels;
uint32_t ProgLen;
uint32_t PageAddr;
bool ProgInited;
bool CareOuts;

uint8_t pageData[256];
uint16_t pageDataIndex; //при выполнении программы тут индекс начала программы на странице 1


//----------------------------------------------------------------------
void InitGlobals()
{
	ProgrammingMode = false;
	RecvData.len=0;
	SendData.len=0;
	memset(&Channels,0,sizeof(Channels));
	FlashIsProgrammed=false;
	BusyFlag=false;
	ProgInited=false;
	CareOuts=false;
	ProgLen=0;
	PageAddr=1;
}
//----------------------------------------------------------------------
//----------------------------------------------------------------------
//----------------------------------------------------------------------
//----------------------------------------------------------------------
//----------------------------------------------------------------------
//----------------------------------------------------------------------
//----------------------------------------------------------------------
//----------------------------------------------------------------------
//----------------------------------------------------------------------
//----------------------------------------------------------------------
//----------------------------------------------------------------------
//----------------------------------------------------------------------
//----------------------------------------------------------------------
//----------------------------------------------------------------------
//----------------------------------------------------------------------
//----------------------------------------------------------------------
//----------------------------------------------------------------------
//----------------------------------------------------------------------
