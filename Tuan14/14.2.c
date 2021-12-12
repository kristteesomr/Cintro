#include <stdio.h>
typedef struct wt{
    int total_rain; // in mm
    int high_temp; // in celcius
    int low_temp;
} weather;

const int MONTHS = 12;
int main() {
    weather data[MONTHS];
    int i;
    char months [12][20]={"January", "February", "March", "April","May","June","July","August","September","October","November","December"};
    int total_rain = 0;
    int max_temp = data[0].high_temp;
    int max_month = months [0];
    int min_temp = data[0].low_temp;
    int min_month = months[0];
    // read input data for each month

    for (i = 0; i < MONTHS; i++) {
        printf("Weather Data for %s: \n", months[i]);
        do{
            printf("Total Rainfall (mm): "); 
            scanf("%d",&data[i].total_rain);
        } while (data[i].total_rain < 0);
        
        do{
            printf("High Temperature (C): "); 
            scanf("%d",&data[i].high_temp);
        } while (data[i].high_temp<=-40&&data[i].high_temp>=50);
    

        do{
            printf("  Low Temperature (C): "); 
            scanf("%d",&data[i].low_temp);
        } while (data[i].low_temp<=-40&&data[i].low_temp>=50);
       
       total_rain = total_rain + data[i].total_rain;

       if(data[i].high_temp>=data[i+1].high_temp){
           max_temp = data[i].high_temp;
           max_month = i;
       }

        if(data[i].low_temp<=data[i+1].low_temp){
           min_temp = data[i].low_temp;
           min_month = i;
       }
    }

    printf ("\nWeather Statistic for the Year:\n");
    printf ("  Total Rainfall: %d mm\n", total_rain);
    printf (" Monthly Rainfall: %2.3f mm\n", total_rain/MONTHS);
    printf (" Highest Temperature: %d °C in %s \n", max_temp, months[max_month]);
    printf (" Lowest Temperature:  %d °C in %s \n", min_temp, months[min_month]);
    return 0;
}
