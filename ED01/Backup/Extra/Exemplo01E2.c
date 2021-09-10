/*
 Exemplo01E2 - v0.0. - __ / __ / _____
 Author: 748377_Daniel_Valadares_De_Souza_Felix

 Para compilar em terminal (janela de comandos):
 Linux :  gcc -o Exemplo01E2     Exemplo01E2.c
 Windows: gcc -o Exemplo01E2.exe Exemplo01E2.c
 Para executar em terminal (janela de comandos):
 Linux : ./Exemplo01E2
 Windows:  Exemplo01E2
*/
// dependencias
#include "io.h" // para definicoes proprias ( na mesma pasta )
/*
 Funcao principal.
 @return codigo de encerramento
 @param argc - quantidade de parametros na linha de comandos
 @param argv - arranjo com o grupo de parametros na linha de comandos
*/
int main(int argc, char *argv[])
{
  // definir dado
  double raio   = 0;  // definir variavel real do raio de uma esfera
  double area   = 0;  // definir variavel real da area de uma esfera
  double volume = 0;  // definir variavel real da volume de uma esfera
                      // identificar
  printf("\n%s\n", "Exemplo01E2 - Programa = v0.0");
  printf("%s\n", "Autor: 748377_Daniel_Valadares_De_Souza_Felix");

  // ler do teclado o valor inteiro
  printf("\n\n%s", "Entrar com um valor real, equivalente ao volume de uma esfera: ");
  scanf("%lf", &volume);  // valor do raio

  // calculos
  volume = volume*2;
  raio   = cbrt(((volume)/((4*M_PI)/3)));
  area   = 4*M_PI*pow(raio, 2);

  // mostrar resultados do calculo
  printf("\n%s%lf%s\n\n", "Uma esfera com o dobro do valor de volume inserido, tem o volume equivalente a ", volume, ", e possui:");
  printf("\t%s%lf\n", "Uma raio igual a ", raio);
  printf("\t%s%lf\n", "Uma area de superficie igual a ", area);

  // encerrar
  printf("\n\nApertar ENTER para terminar.");
  fflush(stdin); // limpar a entrada de dados
  getchar();     // aguardar por ENTER6
  return (0);    // voltar ao SO (sem erros)
} // fim main( )
/*
---------------------------------------------- documentacao complementar
---------------------------------------------- notas / observacoes / comentarios
---------------------------------------------- previsao de testes
---------------------------------------------- historico
Versao Data Modificacao6
0.E1  __/__ teste de calculo com circunferencia
0.E2  __/__ teste de calculo com esfera
---------------------------------------------- testes
Versao Teste
0.E1 01. ( OK ) teste de calculo com circunferencia
0.E2 01. ( OK ) teste de calculo com esfera
*/