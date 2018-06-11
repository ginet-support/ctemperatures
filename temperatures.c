#include <stdio.h>
#include <stdlib.h>

#include <float.h>

#include "Fahr2C.h"
#include "C2Fahr.h"


/* units Fahr celsius kelvin */
/* Noam Kloos 10 sept 2011 */

int main (int argc, char *argv[]) {

/*   float Celsius, Fahr; */

  float Celsius, Fahr, KelvinF;
  double Check;
  
  if (argc > 1) {

    Check = atof(argv[1]);

    if (Check > FLT_MAX)  {
	printf("Value out of bounds.\n");
	exit(-1);
    } 
    

  Celsius = (atof(argv[1]));
  Fahr = (atof(argv[1]));
  
  /* KelvinC = Celsius + 273.15; */ 
  KelvinF = Fahr2C(Fahr) + 273.15 ;

  if (KelvinF < 0) {
    printf("That is below absolute zero.\n");
      exit(-1);
  }


  printf("%4.2f degrees Fahrenheit is ",atof(argv[1]));
  printf("%4.2f degrees Celsius",Fahr2C(Fahr));
  printf(" which is %4.2f degrees Kelvin\n",Fahr2C(atof(argv[1])) + 273.15 );  
if (Celsius >= -273.15) {
      printf("%4.2f degrees Celsius is ",atof(argv[1]));
      printf("%4.2f degrees Fahrenheit",C2Fahr(Celsius));
      printf(" which is %4.2f degrees Kelvin\n",atof(argv[1]) + 273.15); 
   }

  
  }
  else {
    printf("No legal value entered\n");
 return -1;
  }   
  return 0;
}
