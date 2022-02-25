#include "Alerters.h"

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;


int emailAlerter()
{
    printf("Max threshold exceeded\n");
    emailAlertCallCount = 1;
    return emailAlertCallCount;
}

int ledAlerter()
{
    printf("Max threshold exceeded\n");
    ledAlertCallCount = 1;
    return ledAlertCallCount;
}
