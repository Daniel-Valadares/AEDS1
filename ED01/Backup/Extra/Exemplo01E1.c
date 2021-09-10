/*
 Exemplo01E1 - v0.0. - __ / __ / _____
 Author: 748377_Daniel_Valadares_De_Souza_Felix

 Para compilar em terminal (janela de comandos):
 Linux :  gcc -o Exemplo01E1     Exemplo01E1.c
 Windows: gcc -o Exemplo01E1.exe Exemplo01E1.c
 Para executar em terminal (janela de comandos):
 Linux : ./Exemplo01E1
 Windows:  Exemplo01E1
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
  double raio   = 0;  // definir variavel real do raio de uma circunferencia
  double area   = 0;  // definir variavel real da area de uma circunferencia
                      // identificar
  printf("\n%s\n", "Exemplo01E1 - Programa = v0.0");
  printf("%s\n", "Autor: 748377_Daniel_Valadares_De_Souza_Felix");

  // ler do teclado o valor inteiro
  printf("\n\n%s", "Entrar com um valor real, equivalente a area de uma circunferencia: ");
  scanf("%lf", &area);  // valor do raio

  // calculos
  area = area/2;
  raio = sqrt((area/M_PI));

  // mostrar resultados do calculo
  printf("\n%s%lf%s\n\n", "Uma circunferencia com metade do valor da area inserida, tem a area equivalente a ", area, ", e possui:");
  printf("\t%s%lf", "Uma raio igual a ", raio);


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
---------------------------------------------- testes
Versao Teste
0.E1 01. ( OK ) teste de calculo com circunferencia
*/