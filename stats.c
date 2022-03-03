#include "stats.h"

extern int emailAlerter();
extern int ledAlerter();

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;
struct Stats compute_statistics(const float* numberset, int setlength) {
    struct Stats s;
    float avg = 0.0;
    if(setlength == 0)
    {
        s.average = __FLT_HAS_QUIET_NAN__;
        s.min = __FLT_HAS_QUIET_NAN__;
        s.max = __FLT_HAS_QUIET_NAN__;
    }
    s.min = numberset[0];
    s.max = numberset[0];
    for(int i = 0; i < setlength; i++ )
    {
        avg += numberset[i];
        if (s.min > numberset[i]) 
        {
            s.min = numberset[i];
        }
        if (s.max < numberset[i]) 
        {
            s.max = numberset[i];
        }

    }
    s.average = avg/setlength;

    return s;
    
}

void check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats)
{
    if(computedStats.max > maxThreshold)
    {
        
        emailAlertCallCount = alerters[0]();
        ledAlertCallCount = alerters[1]();
        
    }
}


