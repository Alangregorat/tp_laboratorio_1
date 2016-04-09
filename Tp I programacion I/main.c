#include <stdio.h>
#include <stdlib.h>
#include "tp.h"

int main()

{
 int opcion,flag1=0,flag2=0;
 float num1,num2;
 char seguir;

  do
    {

        printf("Tp calculadora de alan\n\n");

       printf("1.- Ingrese el 1er operando[A= %.2f]\n",num1);
       printf("2.- Ingrese el 2do operando[B= %.2f]\n",num2);
       printf("3.- Calcular la suma de los numeros\n");
       printf("4.- Calcular la resta de los numeros\n");
       printf("5.- Calcular la division de los numeros\n");
       printf("6.- Calcular la multiplicacion  de los numeros\n");
       printf("7.- Calcular el factorial  de los numeros\n");
       printf("8.- calcular todas las operaciones\n");
       printf("9.- Salir\n");

       scanf("%d",&opcion);

        // verifica que solo se pueda ingresar entre 1 y 9 en el menu.
       while(opcion<1 || opcion>9)
       {
         printf("Error, La opcion que ingreso es incorrecta, escriba del 1-9 solamente");
         scanf("%d",&opcion);
       }

       switch(opcion)
       {
        case 1:
            printf("A continuacion ingrese el primer numero: ");
            scanf("%f",&num1);
            flag1=1;
            system("cls");
            break;

        case 2:
            printf("Ingrese el segundo numero: \n");
            scanf("%f",&num2);
            flag2=1;
           // system("pause");
            system("cls");
            break;

        case 3:
            system("cls");
             //Verifica que se haya ingresado el primer y segundo operando.
             //Si no fueron escritos, pide cual es el operando que falta, lo toma y despues continua la operacion.
            while(flag1==0 || flag2==0)
            {
             printf("Dato faltante, ingrese el numero que falta.\n");
             if(flag1==0)
             {
               printf("El numero que falta es el primer operando. \nPor favor ingreselo para continuar la operacion: ");
                scanf("%f",&num1);
                flag1=1;
             }
             if(flag2==0)
             {
                printf("El numero que falta es el segundo operando,\nPor favor ingreselo para continuar la operacion: ");
                scanf("%f",&num2);
                flag2=1;
             }
            }
            printf("La suma es: %.2f\n",suma(num1,num2));
            system("pause");
            system("cls");
            break;

        case 4:
             system("cls");
            while(flag1==0 || flag2==0)
            {
             printf("Dato faltante, ingrese el numero que falta.\n");
             if(flag1==0)
             {
               printf("El numero que falta es el primer operando. \nPor favor ingreselo para continuar la operacion: ");
                scanf("%f",&num1);
                flag1=1;
             }
             if(flag2==0)
             {
                printf("El numero que falta es el segundo operando,\nPor favor ingreselo para continuar la operacion: ");
                scanf("%f",&num2);
                flag2=1;
             }
            }
            printf("La resta es: %.2f\n",resta(num1,num2));
            system("pause");
            system("cls");
            break;

        case 5:
             system("cls");
             //En el caso que el segundo operando no haya sido escrito,le dice al usuario que falta ese dato.
             //Lo pide y completa la operacion.
            while(flag2==0)
            {
                printf("El numero que falta es el segundo operando.\nNo se puede completar la operacion ya que no se puede dividir por cero.\nPor favor ingrese el numero por el cual tiene que ser dividido ");
                scanf("%f",&num2);
                flag2=1;
            }
            printf("El resultado de la division es: %.2f\n",division(num1,num2));
            system("pause");
            system("cls");
            break;

        case 6:
             system("cls");
            while(flag1==0 || flag2==0)
            {
             printf("Dato faltante, ingrese el numero que falta.\n");
             if(flag1==0)
             {
               printf("El numero que falta es el primer operando. \nPor favor ingreselo para continuar la operacion: ");
                scanf("%f",&num1);
                flag1=1;
             }
             if(flag2==0)
             {
                printf("El numero que falta es el segundo operando,\nPor favor ingreselo para continuar la operacion: ");
                scanf("%f",&num2);
                flag2=1;
             }
            }
            printf("El resultado de la multiplicacion es: %.2f\n",mult(num1,num2));
            system("pause");
            system("cls");
            break;

        case 7:
             system("cls");

            while(flag1==0)
            {
             printf("Dato faltante, ingrese el numero que falta.\n");
             if(flag1==0)
             {
               printf("El numero que falta es el primer operando. \nPor favor ingreselo para continuar la operacion: ");
                scanf("%f",&num1);
                flag1=1;
               }
              }


            printf("El resultado del factorial del primer numero es: %.2d\n",fact(num1));
            system("pause");
            system("cls");
            break;
        case 8:
             system("cls");
            while(flag1==0 || flag2==0)
            {
             printf("Dato faltante, ingrese el numero que falta.\n");
             if(flag1==0)
             {
               printf("El numero que falta es el primer operando. \nPor favor ingreselo para continuar la operacion: ");
                scanf("%f",&num1);
                flag1=1;
             }
             if(flag2==0)
             {
                printf("El numero que falta es el segundo operando,\nPor favor ingreselo para continuar la operacion: ");
                scanf("%f",&num2);
                flag2=1;
             }
            }
            printf("Los resultados de las cuentas son: \n La suma:%.2f \n La resta:%.2f \n La division:%.2f \n La multiplicacion:%.2f \n Y el factoreo del primer numero: %d \n",suma(num1,num2),resta(num1,num2),division(num1,num2),mult(num1,num2),fact(num1));
            system("pause");
            system("cls");
            break;
        case 9:


            printf("Esta seguro que desea salir? s/n \n\n");
            fflush(stdin);
            scanf("%c",&seguir);
            system("cls");


           while(seguir!= 's' && seguir!= 'n')
            {
             fflush(stdin);
             printf("Error de caracter.Ingrese s/n\n");
             scanf("%c",&seguir);
            }
          }

    }while(seguir!='s');

printf("Gracias por usarme :)");
return 0;

}
