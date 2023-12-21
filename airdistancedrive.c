
#include<math.h>
#include<stdio.h>
int main(){
 double airDistance;
 double originLatitude,originLongitude;
 double destinationLatitude,destinationLongitude;
 printf("Enter the Latitude and Longitude of Origin(latitude,longitude): ");
 scanf("%lf,%lf",&originLatitude,&originLongitude);
 printf("Enter the Latitude and Longitude of Destination(latitude,longitude): ");
 scanf("%lf,%lf",&destinationLatitude,&destinationLongitude);
 airDistance = getAirDistance(originLatitude,originLongitude,destinationLatitude,destinationLongitude);
 printf("Air Distance  = %0.2lf\n Km",airDistance);
 printf("\n");
 

 
 double percentVelocity, time;
 printf("Enter the time observed it rest in year: ");
 scanf("%lf",&time);
 printf("Enter the Velocity of the object scale[0,1]: ");
 scanf("%lf",&percentVelocity);
 lorentzTimeDilation(time, percentVelocity);
 printf("the time dilation = %0.2lf year\n",lorentzTimeDilation(time, percentVelocity));

}