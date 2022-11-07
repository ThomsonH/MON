#ifndef _USER_H__
#define _USER_H__

#include "main.h"
#include "ILI9341.h"
#include "display.h"
#include "stdbool.h"

extern bool WRITE_FLAG;
extern int nCount;

void BtnPush(void);
void InterToString(uint32_t num);
void User_Display(void);


#endif // _USER_H__