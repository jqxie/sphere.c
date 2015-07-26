/* Name: Jessica Xie
 * This program reads in one double value, and prints out the volume and
 * surface area of the sphere whose radius is the value entered.
 */

#include<stdio.h>
#include<stdlib.h>
int main(void){
  const double pi = 3.141592654;
  double sa, volume, r;

  printf("Enter the radius of the sphere: ");
  scanf("%lf", &r);
  volume = (4.0/3.0)*pi*r*r*r;
  sa = 4*pi*r*r;
  printf("The volume is %f", volume);
  printf(" and the surface area is %f.\n", sa);
}
