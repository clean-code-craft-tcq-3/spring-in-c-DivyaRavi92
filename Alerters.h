#include <stdio.h>


uint emailAlerter(void);
uint ledAlerter(void);
typedef void (*alerter_funcptr)();


extern int emailAlertCallCount;
extern int ledAlertCallCount;
