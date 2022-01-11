/******************************************************************************


Joselyn Martinez Miranda.
1.- Imprimir menú 
github: https://github.com/JoselynMaM14/Ejercicios-en-C.git

El programa debe de estar comentado para tú “yo del futuro” 
• Realiza un menú númerico de opciones • Utiliza la instrucción if para cada opción 
• En cada opción se debe de imprimir el mensaje “has seleccionado la opción: #de opción”
***************************************************************************************/

#include <stdio.h>
void desplegarMenu(void);
int main()
{   int opcion; //declarar variables 
  do {
    desplegarMenu(); /* llama a la función para desplegar el menu*/
     scanf("%d", &opcion);
     
     if(opcion == 1){   // comparacion entre la variable de entrada y la opcion elegida
         printf("Has elegido la opcion: 1 \n");
     }
     
    if(opcion == 2){
         printf("Has elegido la opcion: 2 \n");
     }
     
     if(opcion == 3){
         printf("Has elegido la opcion: 3 \n");
     }
     

  }while (opcion != 0);
    return 0;
}
void desplegarMenu(void){
   printf("Postres \n");
   printf("1.Pastel Brownie\n");
   printf("2. Helado tres marias\n");
   printf("3. Pay de limon\n");
   printf("0. Salir del menú\n");
}