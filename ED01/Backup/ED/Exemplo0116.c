/*
 Exemplo0116 - v0.0. - __ / __ / _____
 Author: 748377_Daniel_Valadares_De_Souza_Felix

 Para compilar em terminal (janela de comandos):
 Linux :  gcc -o Exemplo0116     Exemplo0116.c
 Windows: gcc -o Exemplo0116.exe Exemplo0116.c
 Para executar em terminal (janela de comandos):
 Linux : ./Exemplo0116
 Windows:  Exemplo0116
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
  double lado      = 0;  // definir variavel real da base de um triangulo
  double altura    = 0;  // definir variavel real da altura de um triangulo
  double area      = 0;  // definir variavel real da area de um triangulo
  double perimetro = 0;  // definir variavel real do perimetro de um triangulo
                         // identificar
  printf("\n%s\n", "Exemplo0116 - Programa = v0.0");
  printf("%s\n", "Autor: 748377_Daniel_Valadares_De_Souza_Felix");

  // ler do teclado o valor inteiro
  printf("\n\n%s", "Entrar com um valor real, equivalente ao lado de um triangulo equilatero: ");
  scanf("%lf", &lado);   // valor da base


  // calculos
  lado = lado/5;
  altura    = (sin (M_PI/3)*(lado));
  area      = ((lado*altura)/2);
  perimetro = (lado*3);

  // mostrar resultados do calculo
  printf("\n%s%lf%s\n\n", "Um triangulo equilatero com um quito do valor do lado inserido, tem seu lado equivalente a ", 
          lado, ", e possui:");
  printf("\t%s%lf\n", "Uma altura de ", altura);
  printf("\t%s%lf\n", "Uma area de ", area);
  printf("\t%s%lf\n", "E um perimetro de ", perimetro);

  // encerrar
  printf("\n\nApertar ENTER para terminar.");
  fflush(stdin); // limpar a entrada de dados
  getchar();     // aguardar por ENTER
  return (0);    // voltar ao SO (sem erros)
} // fim main( )
/*
---------------------------------------------- documentacao complementar
---------------------------------------------- notas / observacoes / comentarios
---------------------------------------------- previsao de testes
---------------------------------------------- historico
Versao Data Modificacao6
0.1  __/__ esboco
0.2  __/__ mudanca de versao para double
0.3  __/__ mudanca de versao para char
0.4  __/__ mudanca de versao para bool
0.5  __/__ mudanca de versao para string
0.6  __/__ mudanca de versao para multiplos int
0.7  __/__ mudanca de versao para pow
0.8  __/__ adaptação de versao para biblioteca string.h
0.9  __/__ adaptação de versao para printf
0.10 __/__ adaptação de versao para biblioteca io.h
0.11 __/__ teste de calculo com quadrado
0.12 __/__ mudança de teste de calculo com quadrado
0.13 __/__ teste de calculo com retangulo
0.14 __/__ mudança de teste de calculo com retangulo
0.15 __/__ teste de calculo com triangulo
0.16 __/__ mudança de teste de calculo com triangulo
---------------------------------------------- testes
Versao Teste
0.1  01. ( OK ) identificacao de programa leitura e exibicao de inteiro
0.2  01. ( OK ) identificacao de programa com double
0.3  01. ( OK ) identificacao de programa com char
0.4  01. ( OK ) identificacao de programa com bool
0.5  01. ( OK ) identificacao de programa com string
0.6  01. ( OK ) identificacao de programa com multiplos int
0.7  01. ( OK ) identificacao de programa com pow
0.8  01. ( OK ) identificacao de programa com biblioteca string.h
0.9  01. ( OK ) identificacao de programa com printf
0.10 01. ( OK ) identificacao de programa com biblioteca io.h
0.11 01. ( OK ) teste de calculo da terca parte de um quadrado
0.12 01. ( OK ) teste de calculo do perimetro e da area de um quadrado
0.13 01. ( OK ) teste de calculo da quarta parte de um retangulo
0.14 01. ( OK ) teste de calculo do perimetro e da area de um retangulo
0.15 01. ( OK ) teste de calculo com triangulo
0.16 01. ( OK ) teste de calculo da altura, do perimetro e da area de um triangulo
*/