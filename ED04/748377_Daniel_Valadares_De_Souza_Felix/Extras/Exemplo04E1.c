/*
 Exemplo04E1 - v0.0. - __ / __ / _____
 Author: 748377_Daniel_Valadares_De_Souza_Felix

*/
// dependencias
#include "io.h" // para definicoes proprias

void method00()
{
    // nao faz nada
} // fim method00 ( )

/**
 Funcao para determinar se caractere e uma letra maiscula maior que K.
 @return numero de repeticoes
 @param x - cadeia a ser testada
*/
int countAlphanumeric(char x[])
{
    // definir dado local
    int tamanho = 0;
    int posicao = 0;
    int contar = 0;
    int testar = 0;
    char simbolo = '_';
    char registrar[STR_SIZE];
    strcpy(registrar, "");

    tamanho = strlen(x);
    // repetir em base no tamanho
    for (posicao = 0; posicao < tamanho; posicao = posicao + 1)
    {
        // isolar um simbolo por vez
        simbolo = x[posicao];

        // testar se maior que K
        if ((('a' <= simbolo && simbolo <= 'z') || ('A' <= simbolo && simbolo <= 'Z')) || ('0' <= simbolo && simbolo <= '9') || ' ')
        {
            // contar e mostrar quantidade contada
            contar = contar + 1;
            IO_printf("Repeticao: %d\n%d: [%c]\n\n", contar, posicao, simbolo);
            strcpy(registrar, IO_concat(registrar,
                              IO_concat(" [",
                              IO_concat(IO_toString_c(x[posicao]), "]"))));
        } // fim se
    }     // fim repetir
    // retornar valor recebido
    if (contar > 0)
    {
        IO_printf("Simbolos alfanumericos identificados:\n%s\n", registrar);
    }
    else
    {
        IO_printf("Nenhum simbolo alfanumerico identificado\n");
    }
    return (contar);
} // fim countAlphanumeric ( )

/**
 method04E1 - Contar e mostrar a quantidade de simbolos alfanumericos em multiplas cadeias de caracteres, incluindo espaco
*/
void method04E1()
{
    // definir dados
    chars palavra = IO_new_chars(STR_SIZE);
    chars palavraN = IO_new_chars(STR_SIZE);
    int casos = 0;
    int resultado = 0;
    int quantidade = 0;
    int cadeias = 0;

    // identificar
    IO_id("Exemplo04E1 - method04E1 - v0.0");

    // quantidade de cadeias a serem guardadas
    quantidade = IO_readint("Insira o numero de cadeia que serao inseridas: ");
    if (quantidade <= 0)
    {
        while (quantidade <= 0)
        {
            IO_printf("Erro: valor invalido colocado\n");
            quantidade = IO_readint("Insira o numero de cadeia que serao inseridas: ");
        }
    }

    // guardar as cadeias
    palavra = IO_readln("\nInsira uma cadeia de caracteres:");
    cadeias = cadeias + 1;

    // mostrar ocorrencias na primeira
    casos = countAlphanumeric(palavra);
    resultado = casos;
    
    // registrar outras cadeias
    while (cadeias < quantidade)
    {
        // nova cadeia
        palavraN = IO_readln("\nInsira uma cadeia de caracteres:");

        // mostrar ocorrencias nas outras
        casos = countAlphanumeric(palavraN);
        resultado = resultado + casos;

        // limpar cadeia
        strcpy(palavraN, "");

        // atualizar testes
        cadeias = cadeias + 1;
    }

    //mostrar resultados do calculo
    IO_printf("Quantidade de simbolos alfanumericos em todas as cadeias: %d\n", resultado);

    // encerrar
    IO_pause("Apertar ENTER para continuar");
} // fim method04E1 ( )

/**
 Funcao principal.
 @return codigo de encerramento
*/
int main()
{
    // definir dado
    int x = 0;
    // repetir até desejar parar
    do
    {
        // identificar
        IO_id("Exemplo04E1 - Programa - v0.0");

        // ler do teclado
        IO_println("Opcoes");
        IO_println(" 0 - parar");
        IO_println(" 1 - Contar e mostrar a quantidade de simbolos alfanumericos em multiplas cadeias de caracteres, incluindo espaco");
        IO_println("");
        x = IO_readint("Entrar com uma opcao: ");

        // testar valor
        switch (x)
        {
        case 0:
            method00();
            break;
        case 1:
            method04E1();
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
a.) [3] ABC abc 123
b.) [3] ABC !@# 123
c.) [3] !@# $%& <=>
---------------------------------------------- historico
Versao Data Modificacao
E.1 01. __/__ testes com IO_readln
---------------------------------------------- testes
Versao Teste
E.1 01. ( OK ) Contar e mostrar a quantidade de simbolos alfanumericos em multiplas cadeias de caracteres, incluindo espaco
 */