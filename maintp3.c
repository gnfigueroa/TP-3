/* Programa imprime tabla de Fahrenheit a Celsius 
utilizando funcion getcelsius() para obtener temperatura en Celsius
Gabriel Nicolas Figueroa
26 de abril del 2015
*/


#include <stdio.h>


const int LOWER = 0; 
const int UPPER = 300;
const int STEP = 20; 

float getcelsius(int fahr);    

int main(void)
{
int fahr;

for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)

    printf("%3d %6.1f\n", fahr, getcelsius(fahr));
    
    return 0;
}

float getcelsius(int fahr)
{
    float celsius;
    
    celsius = (5.0/9.0)*(fahr-32);
   
    return celsius;
}    
