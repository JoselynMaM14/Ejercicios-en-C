/******************************************************************************

Joselyn Martinez Miranda.
2.2- Operaciones aritmeticas
github: https://github.com/JoselynMaM14/Ejercicios-en-C.git

El programa debe de estar comentado para tú “yo del futuro” 
Modifica el programa para que ahora el usuario pueda introducir los valores. Cuidado con las divisiones.

***************************************************************************************/

#include <stdio.h>

int main()
{  

    float a, b;   // declaracion de variable y asignacion de vlaor
    float sum, res, mult, division; // varoable suqe guardaran el resultado
    
    printf("Operaciones aritmeticas con 2 numeros \n");
    printf("Ingrese el primer numero  ");
    scanf(" %f", &a);
    printf("Ingrese el segundo numero ");
    scanf(" %f", &b);
    
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
