#include "stats.h"

extern int emailAlerter();
extern int ledAlerter();

struct Stats compute_statistics(const float* numberset, int setlength) {
    struct Stats s;
    float avg = 0.0;
    if(setlength == 0)
    {
        s.average = NAN;
        s.min = NAN;
        s.max = NAN;
    }
    else
    {
        s.average = avg/setlength;
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
    }
   

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


