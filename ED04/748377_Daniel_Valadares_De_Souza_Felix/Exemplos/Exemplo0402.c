/*
 Exemplo0402 - v0.0. - __ / __ / _____
 Author: 748377_Daniel_Valadares_De_Souza_Felix

*/
// dependencias
#include "io.h" // para definicoes proprias
/**
 Method00 - nao faz nada.
*/
void method00()
{
    // nao faz nada
} // fim method00 ( )
/**
 Method01 - Repeticao para ler certa quantidade de valores.
*/
void method01()
{
    // definir dado
    int quantidade = 0;
    int valor = 0;
    int controle = 0;
    // identificar
    IO_id("Exemplo0402 - Method01 - v0.0");
    // ler do teclado
    quantidade = IO_readint("Entrar com uma quantidade: ");
    // repetir para a quantidade de vezes informada
    controle = 1;
    while (controle <= quantidade)
    {
        // ler valor do teclado
        valor = IO_readint(IO_concat(
            IO_concat("", IO_toString_d(controle)),
            ": "));
        // passar ao proximo valor
        controle = controle + 1;
    } // fim repetir
      // encerrar
    IO_pause("Apertar ENTER para continuar");
} // fim method01 ( )
/**
 Funcao para determinar se valor inteiro e' positivo.
 @return true, se positivo; false, caso contrario
 @param x - valor a ser testado
*/
bool positive(int x)
{
    // definir dado local
    bool result = false;
    // testar a condicao
    if (x > 0)
    {
        result = true;
    } // fim se
    return (result);
} // fim positive ( )
/**
 Method02 - Ler valores e contar positivos.
*/
void method02()
{
    // definir dado
    int quantidade = 0;
    int valor = 0;
    int controle = 0;
    int contador = 0;
    // identificar
    IO_id("EXEMPLO0402 - Method02 - v0.0");
    // ler do teclado
    quantidade = IO_readint("Entrar com uma quantidade: ");
    // repetir para a quantidade de vezes informada
    controle = 1;
    while (controle <= quantidade)
    {
        // ler valor do teclado
        valor = IO_readint(IO_concat(
            IO_concat("", IO_toString_d(controle)),
            ": "));
        // testar e contar se valor for positivo
        if (positive(valor))
        {
            contador = contador + 1;
        } // fim se
        // passar ao proximo valor
        controle = controle + 1;
    } // fim repetir
      // mostrar a quantidade de valores positivos
    IO_printf("%s%d\n", "Positivos = ", contador);
    // encerrar
    IO_pause("Apertar ENTER para continuar");
} // fim method02 ( )

/**
 Method03.
*/
void method03()
{
    // identificar
    IO_id("Exemplo0402 - Method03 - v0.0");
    // encerrar
    IO_pause("Apertar ENTER para continuar");
} // fim method03 ( )
/**
 Method04.
*/
void method04()
{
    // identificar
    IO_id("Exemplo0402 - Method04 - v0.0");
    // encerrar
    IO_pause("Apertar ENTER para continuar");
} // fim method04 ( )
/**
 Method05.
*/
void method05()
{
    // identificar
    IO_id("Exemplo0402 - Method05 - v0.0");
    // encerrar
    IO_pause("Apertar ENTER para continuar");
} // fim method05 ( )
/**
 Method06.
*/
void method06()
{
    // identificar
    IO_id("Exemplo0402 - Method06 - v0.0");
    // encerrar
    IO_pause("Apertar ENTER para continuar");
} // fim method06 ( )
/**
 Method07.
*/
void method07()
{
    // identificar
    IO_id("Exemplo0402 - Method07 - v0.0");
    // encerrar
    IO_pause("Apertar ENTER para continuar");
} // fim method07 ( )
/**
 Method08.
*/
void method08()
{
    // identificar
    IO_id("Exemplo0402 - Method08 - v0.0");
    // encerrar
    IO_pause("Apertar ENTER para continuar");
} // fim method08 ( )
/**
 Method09.
*/
void method09()
{
    // identificar
    IO_id("Exemplo0402 - Method09 - v0.0");
    // encerrar
    IO_pause("Apertar ENTER para continuar");
} // fim method09 ( )
/**
 Method10.
*/
void method10()
{
    // identificar
    IO_id("Exemplo0402 - Method10 - v0.0");
    // encerrar
    IO_pause("Apertar ENTER para continuar");
} // fim method10 ( )
/*
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
        IO_id("Exemplo0402 - Programa - v0.0");

        // ler do teclado
        IO_println("Opcoes");
        IO_println(" 0 - parar");
        IO_println(" 1 - Ler certa quantidade de valores");
        IO_println(" 2 - Ler valores e contar positivos");
        IO_println(" 3 - ");
        IO_println(" 4 - ");
        IO_println(" 5 - ");
        IO_println(" 6 - ");
        IO_println(" 7 - ");
        IO_println(" 8 - ");
        IO_println(" 9 - ");
        IO_println("10 - ");
        IO_println("");
        x = IO_readint("Entrar com uma opcao: ");

        // testar valor
        switch (x)
        {
        case 0:
            method00();
            break;
        case 1:
            method01();
            break;
        case 2:
            method02();
            break;
        case 3:
            method03();
            break;
        case 4:
            method04();
            break;
        case 5:
            method05();
            break;
        case 6:
            method06();
            break;
        case 7:
            method07();
            break;
        case 8:
            method08();
            break;
        case 9:
            method09();
            break;
        case 10:
            method10();
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
a.) -1
b.) 0
c.) 5 e { 1, 2, 3, 4, 5 }
---------------------------------------------- historico
Versao Data Modificacao
 0.1 __/__ esboco
 0.2 __/__ novas fucoes
---------------------------------------------- testes
Versao Teste
 0.1 01. ( OK ) identificacao de programa
 0.2 01. ( OK ) leitura de valores e determinar se positivos
*/