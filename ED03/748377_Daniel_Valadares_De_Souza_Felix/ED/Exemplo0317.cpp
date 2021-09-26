/*
 Exemplo0317 - v0.0. - __ / __ / _____
 Author: 748377_Daniel_Valadares_De_Souza_Felix
*/
// dependencias
#include "io.h" // para definicoes proprias

// method00 - nao faz nada
void method00()
{
    // nao faz nada
} // fim method00 ( )

// contar e mostrar uma quantidade de valores que forem multiplos de 5, e pertençam a um intervalo
void method0317()
{
    // definir dado
    int x = 0;
    int y = 0;
    int maior = 0;
    int menor = 0;
    int qnt = 0;
    int show = 0;
    int test = 0;
    int rpt = 0;

    // identificar
    IO_id("Exemplo0317 - v0.0");

    // ler quantidade do teclado
    qnt = IO_readint("Entrar com uma quantidade inteira de testes a serem feitos: ");
    IO_printf("\n");
    show = qnt;

    // ler valores do intervalo
    menor = IO_readint("Insira o menor limite inteiro do intervalo: ");
    maior = IO_readint("\nInsira o maior limite inteiro do intervalo: ");
    while (maior < menor)
    {
        IO_printf("ERRO: Valor conflitante inserido\n");
        maior = IO_readint("\nInsira o maior limite inteiro do intervalo: ");
    }

    // inicio teste variacao
    for (y = 0; y < qnt; y = y + 1)
    {
        // ler valor de teste
        test = IO_readint("\nInsira um valor inteiro a ser testado: ");

        // atualizar testes restantes
        show = show - 1;

        // mostrar numero faltante de testes
        if (show == 0)
        {
            IO_printf("Acabaram os testes\n");
        }
        else
        {
            IO_printf("Restam %d testes\n", show);
        }

        // testar se pertecente ao intervalo e multiplo de 5
        if (menor <= test && test <= maior && test % 5 == 0)
        {
            // contar repeticoes
            rpt = rpt + 1;
            // mostrar quantida atual de repeticoes
            IO_printf("Repeticoes: %d\n", rpt);
        }
    } // fim repetir
    // mostrar o resultado de repeticoes e seus valores
    IO_printf("\nNumero de multiplos de 5 dentro do intervalo: %d\n", rpt);

    // encerrar
    IO_pause("Apertar ENTER para continuar");
} // fim method0317 ( )

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
        IO_id("Exemplo0317 - Programa - v0.0");

        // ler do teclado
        IO_println("Opcoes");
        IO_println(" 0 - parar");
        IO_println(" 1 - contar e mostrar uma quantidade de valores que forem multiplos de 5, e pertençam a um intervalo");
        IO_println("");
        x = IO_readint("Entrar com uma opcao, inserindo seu valor: ");

        // testar valor
        switch (x)
        {
        case 0:
            method00();
            break;
        case 1:
            method0317();
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
a.) [10:80] 0
b.) [10:80] 10
c.) [10:80] 11
d.) [10:80] 15
e.) [10:80] 100
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
 0.12 __/__ contar minscolas
 0.13 __/__ alternativa
 0.14 __/__ contagem de simbolos
 0.15 __/__ contagem de digitos
 0.16 __/__ contagem de nao digitos e letras
 0.17 __/__ contagem de repeticoes em intervalo
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
 0.12 01. ( OK ) teste de contagem de letras minuscolas
 0.13 01. ( OK ) teste de alternativa de contagem de minuscolas
 0.14 01. ( OK ) teste de contagem de simbolos em uma palavra
 0.15 01. ( OK ) teste de contagem de digitos
 0.16 01. ( OK ) teste de contagem de nao digitos e letras
 0.17 01. ( OK ) teste de contagem de repeticoes em intervalo
*/
