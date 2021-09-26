/*
 Exemplo0311 - v0.0. - __ / __ / _____
 Author: 748377_Daniel_Valadares_De_Souza_Felix
*/
// dependencias
#include "io.h" // para definicoes proprias

// method00 - nao faz nada
void method00()
{
    // nao faz nada
} // fim method00 ( )

// methodo01 - mostra as letras minuscolas
void method0311()
{
    // definir dado
    int x = 0;
    int y = 0;

    char palavra[STR_SIZE];
    int tamanho = 0;

    // identificar
    IO_id("Exemplo0311 - v0.0");

    // ler do teclado
    IO_printf("Entrar com uma palavra: ");
    scanf("%s", palavra);

    // repetir para cada letra
    tamanho = strlen(palavra);

    // inicio teste variacao
    for (y = 0; y < tamanho; y = y + 1)
    {
        if ('a' <= palavra[y] && palavra[y] <= 'z')
        {
            // mostrar valor atual
            IO_printf("%d: [%c]\n", y, palavra[y]);
        }
    } // fim repetir

    // encerrar
    IO_pause("Apertar ENTER para continuar");
    getchar();
} // fim method0311 ( )

/*
 Funcao principal.
*/
int main()
{
    // definir dado
    int x = 0; // definir variavel com valor inicial
               // repetir até desejar parar
    do
    {
        // identificar
        IO_id("Exemplo0311 - Programa - v0.0");

        // ler do teclado
        IO_println("Opcoes");
        IO_println(" 0 - parar");
        IO_println(" 1 - mostrar letras minuscolas em uma palavra");
        IO_println("");
        x = IO_readint("Entrar com uma opcao, inserindo seu valor: ");

        // testar valor
        switch (x)
        {
        case 0:
            method00();
            break;
        case 1:
            method0311();
            break;
        default:
            IO_pause("ERRO: Valor invalido.");

        } // fim escolher
    } while (x != 0);
    // encerrar
    IO_pause("Apertar ENTER para terminar");
    return (0);
} // fim main( )
/*
---------------------------------------------- documentacao complementar
---------------------------------------------- notas / observacoes / comentarios
---------------------------------------------- previsao de testes
a.) AbCdE
b.) ABC
c.) abc
d.) 123
---------------------------------------------- historico
Versao Data Modificacao
 0.1  __/__ esboco
 0.2  __/__ alternativa
 0.3  __/__ outra alternativa
 0.4  __/__ alternatva com for
 0.5  __/__ outra alternatva com for
 0.6  __/__ versao com char
 0.7  __/__ versao crescente
 0.8  __/__ limite
 0.9  __/__ alternativa de limite
 0.10 __/__ alternativa com confirmacao
 0.11 __/__ exibir minuscolas
---------------------------------------------- testes
Versao Teste
 0.1  01. ( OK ) identificacao de programa
 0.2  01. ( OK ) forma alternativa de identificacao de programa
 0.3  01. ( OK ) outra forma alternativa de identificacao de programa
 0.4  01. ( OK ) forma com for
 0.5  01. ( OK ) alternativa com for
 0.6  01. ( OK ) teste com char
 0.7  01. ( OK ) teste de char crescente
 0.8  01. ( OK ) teste de limite
 0.9  01. ( OK ) alternativa de limite
 0.10 01. ( OK ) alternativa de limite com confirmacao
 0.11 01. ( OK ) teste de leitura de letras minuscolas
*/
