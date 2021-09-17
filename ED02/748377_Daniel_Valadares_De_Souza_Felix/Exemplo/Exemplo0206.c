/*
 Exemplo0206 - v0.0. - __ / __ / _____
 Author: 748377_Daniel_Valadares_De_Souza_Felix

 Para compilar em terminal (janela de comandos):

 Linux :  gcc -o exemplo0206     exemplo0206.c
 Windows: gcc -o exemplo0206.exe exemplo0206.c
 Para executar em terminal (janela de comandos):

 Linux : ./exemplo0206
 Windows:  exemplo0206
*/
// dependencias
#include "io.h" // para definicoes proprias
/*
 Funcao principal.
 @return codigo de encerramento
 @param argc - quantidade de parametros na linha de comandos
 @param argv - arranjo com o grupo de parametros na linha de comandos
*/
int main()
{
    // definir dado
    char x = '_'; // definir variavel com valor inicial
                  // identificar
    IO_id("EXEMPLO0206 - Programa - v0.0");
    // ler do teclado
    x = IO_readchar("Entrar com um caractere: ");
    // testar valor
    if (('a' <= x && x <= 'z') || // minuscula OU
        ('A' <= x && x <= 'Z'))   // maiuscula
    {
        IO_printf("%s (%c)\n", "Letra", x);
    }
    else
    {
        IO_printf("%s (%c)\n", "Valor diferente de letra", x);
    } // fim se
      // encerrar
    IO_pause("Apertar ENTER para terminar");
    return (0);
} // fim main( )
/*
---------------------------------------------- documentacao complementar
---------------------------------------------- notas / observacoes / comentarios
---------------------------------------------- previsao de testes
a.) a
b.) A
c.) 0
d.) #
---------------------------------------------- historico
Versao Data Modificacao
 0.1 __/__ esboco
 0.2 __/__ teste de if else
 0.3 __/__ teste com dois if else
 0.4 __/__ teste com intervalo de condicao
 0.5 __/__ teste de identificacao de caracter
 0.6 __/__ mudanca de identificacao de caracter
---------------------------------------------- testes
Versao Teste
 0.1 01. ( OK ) identificacao de programa
 0.2 01. ( OK ) modificacao com if else
 0.3 01. ( OK ) modificacao com dois if else
 0.4 01. ( OK ) teste de intervalo condicional
 0.5 01. ( OK ) teste de identificacao de caracter
 0.6 01. ( OK ) teste de diferenciacao de letras
*/