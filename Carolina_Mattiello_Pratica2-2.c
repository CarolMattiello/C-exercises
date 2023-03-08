//Carolina Silveira Mattielllo
//01 de dezembro de 2022
//Este programa a media geometrica e harmonica de 3 valores dado pelo usuario

#include <stdio.h>
#include <math.h>

int main (void)
{
  float val1, val2, val3; //Declarando variaveis de entrada
  float m_geom, m_harm; //Declarando variaveis de saida

  printf("Entre com os 3 numeros: ");
  scanf ("%f %f %f", &val1, &val2, &val3);

  //printf("Valor 1: %f Valor 2: %f Valor 3 %f ", val1, val2, val3);

  m_geom = pow ((val1 * val2 * val3),(1.0/3.0));
  m_harm = 3 / ((1/val1) + (1/val2) + (1/val3));

  printf("A media harmonica vale %f \n", m_harm);
  printf("A media geometrica vale %f \n", m_geom);

  return 0;
}
