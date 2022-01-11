/******************************************************************************

Joselyn Martinez Miranda.
2.1- Operaciones aritmeticas
github: https://github.com/JoselynMaM14/Ejercicios-en-C.git

El programa debe de estar comentado para tú “yo del futuro” 
• Declara una variable de tipo entero. Con valor asignado 
• Declara una variable de tipo decimal (float). Con valor asignado
• Con esas variables realiza las operaciones aritméticas básicas (suma, resta multiplicación y división). 
• Imprime el resultado de cada operación de manera ordenada
***************************************************************************************/

#include <stdio.h>

int main()
{  
    int a=8; // declaracion de variable y asignacion de vlaor
    float b=2.45;  
    
    float sum, res, mult, division; // varoable suqe guardaran el resultado
    
    //suma
    sum=a+b; //realizacion de operacion
    res= a-b;
    mult=a*b;
    division=a/b;
    
    printf("El resultado de la suma es: %f \n", sum);
    printf("El resultado de la resta es: %f \n", res);
    printf("El resultado de la multiplicacion es: %f \n", mult);
    printf("El resultado de la division es: %f \n", division);
    
    return 0;
}
