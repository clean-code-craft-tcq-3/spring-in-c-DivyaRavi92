#include <stdio.h>


int emailAlerter(void);
int ledAlerter(void);
typedef void (*alerter_funcptr)();


extern int emailAlertCallCount;
extern int ledAlertCallCount;
