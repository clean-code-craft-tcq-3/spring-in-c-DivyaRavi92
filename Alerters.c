#include "Alerters.h"

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;


uint8 emailAlerter()
{
    printf("Max threshold exceeded\n");
    emailAlertCallCount = 1;
    return emailAlertCallCount;
}

uint8 ledAlertCallCount()
{
    printf("Max threshold exceeded\n");
    ledAlertCallCount = 1;
    return ledAlertCallCount;
}

