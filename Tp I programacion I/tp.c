#include <stdio.h>
#include <stdlib.h>

/** \brief Recibe 2 numeros, realiza su suma y retorna el resultado.
 *
 * \param float x es el primer numero ingresado y recibe el valor que se le ingrese.
 * \param float y es el segundo numero ingresado y recibe el valor que se le ingrese.
 * \return el float return retorna la suma de ambos("x" e "y").
 *
 */
float suma(float x,float y)
{
 return x+y;
}

/** \brief Recibe 2 numeros, realiza su resta y retorna el resultado.
 *
 * \param float x es el primer numero ingresado y recibe el valor que se le ingrese.
 * \param float y es el segundo numero ingresado y recibe el valor que se le ingrese.
 * \return el float return retorna la resta de ambos("x" e "y").
 *
 */
float resta(float x,float y)
{
return x-y;
}

/** \brief Recibe 2 numeros, realiza su division y retorna el resultado.
 *
 * \param float x es el primer numero ingresado y recibe el valor que se le ingrese.
 * \param float y es el segundo numero ingresado y recibe el valor que se le ingrese.
 * \return el float return retorna el resultado de la division de ambos("x" e "y")
 *
 */
float division(float x,float y)
{
return x/y;
}

/** \brief Recibe 2 numeros, realiza su suma y retorna el resultado.
 *
 * \param float x es el primer numero ingresado y recibe el valor que se le ingrese.
 * \param float y es el segundo numero ingresado y recibe el valor que se le ingrese.
 * \return el float return retorna el resultado de la multiplicacion de ambos("x" e "y").
 *
 */
float mult(float x,float y)
{
return x*y;
}

 /** \brief Recibe el primer numero ingresado(Que seria "A"), y devuelve el factoreo del mismo.
  *
  * \param int x recibe el entero del primer numero ingresado
  * \return retorna el numero ingresado factoreado
  *
  */
int fact(int x)
{
 int factoreo;

 if(x==1)
  {
    return 1;
  }
  else
  {
    factoreo=x*fact(x-1);
    return (factoreo);
  }
}



