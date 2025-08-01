/*
 Exemplo0410 - v0.0. - __ / __ / _____
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
    IO_id("Exemplo0410 - Method01 - v0.0");
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
    IO_id("Exemplo0410 - Method02 - v0.0");
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
 Funcao para determinar se valor inteiro pertence a intervalo aberto.
 @return true, se pertencer; false, caso contrario
 @param x - valor a ser testado
*/
bool belongsTo(int x, int inferior, int superior)
{
    // definir dado local
    bool result = false;
    // testar a condicao
    if (inferior < x && x < superior)
    {
        result = true;
    } // fim se
    return (result);
} // fim belongsTo ( )
/**
 Method03 - Ler valores e contar positivos menores que 100.
*/
void method03()
{
    // definir dado
    int quantidade = 0;
    int valor = 0;
    int controle = 0;
    int contador = 0;
    // identificar
    IO_id("Exemplo0410 - Method03 - v0.0");
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
        if (belongsTo(valor, 0, 100))
        {
            contador = contador + 1;
        } // fim se
        // passar ao proximo valor
        controle = controle + 1;
    } // fim repetir
      // mostrar a quantidade de valores positivos
    IO_printf("%s%d\n", "Positivos menores que 100 = ", contador);
    // encerrar
    IO_pause("Apertar ENTER para continuar");
} // fim method03 ( )
/**
 Funcao para determinar se valor inteiro e' par.
 @return true, se par; false, caso contrario
 @param x - valor a ser testado
*/
bool even(int x)
{
    // definir dado local
    bool result = false;
    // testar a condicao ( resto inteiro (%) da divisao por 2 igual a zero )
    if (x % 2 == 0)
    {
        result = true;
    } // fim se
    return (result);
} // fim even ( )
/**
 Method04 - Ler valores e contar positivos menores que 100 e pares.
*/
void method04()
{
    // definir dado
    int quantidade = 0;
    int valor = 0;
    int controle = 0;
    int contador = 0;
    // identificar
    IO_id("Exemplo0410 - Method04 - v0.0");
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
        // testar e contar se valor for positivo menor que 100 e par
        if (belongsTo(valor, 0, 100) && even(valor))
        {
            contador = contador + 1;
        } // fim se
        // passar ao proximo valor
        controle = controle + 1;
    } // fim repetir
      // mostrar a quantidade de valores positivos
    IO_printf("%s%d\n", "Positivos menores que 100 e pares = ", contador);
    // encerrar
    IO_pause("Apertar ENTER para continuar");
} // fim method04 ( )
/**
 Method05 - Ler valores e contar positivos menores que 100 e pares (alternativo).
*/
void method05()
{
    // definir dado
    int quantidade = 0;
    int valor = 0;
    int controle = 0;
    int contador = 0;
    bool ok = false;
    // identificar
    IO_id("Exemplo0410 - Method05 - v0.0");
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
        // testar e contar se valor for positivo menor que 100 e par
        ok = belongsTo(valor, 0, 100);
        ok = ok && even(valor);
        if (ok)
        {
            contador = contador + 1;
        } // fim se
        // passar ao proximo valor
        controle = controle + 1;
    } // fim repetir
      // mostrar a quantidade de valores positivos
    IO_printf("%s%d\n", "Positivos menores que 100 e pares = ", contador);
    // encerrar
    IO_pause("Apertar ENTER para continuar");
} // fim method05 ( )
/**
 Funcao para determinar se caractere e' letra minuscula.
 @return true, se par; false, caso contrario
 @param x - valor a ser testado
*/
bool isLowerCase(char x)
{
    // definir dado local
    bool result = false;
    // testar a condicao
    if ('a' <= x && x <= 'z')
    {
        result = true;
    } // fim se
    return (result);
} // fim isLowerCase ( )
/**
 Method06 - Ler palavra e contar letras minusculas.
*/
void method06()
{
    // definir dado
    chars palavra = IO_new_chars(STR_SIZE);
    int tamanho = 0;
    int posicao = 0;
    char simbolo = '_';
    int contador = 0;
    // identificar
    IO_id("Exemplo0410 - Method06 - v0.0");
    // ler do teclado
    palavra = IO_readstring("Entrar com uma palavra: ");
    // determinar a quantidade de simbolos na palavra
    tamanho = strlen(palavra);
    // repetir para a quantidade de vezes informada
    for (posicao = 0; posicao < tamanho; posicao = posicao + 1)
    {
        // isolar um simbolo por vez
        simbolo = palavra[posicao];
        // testar e contar se caractere e' letra minuscula
        if (isLowerCase(simbolo))
        {
            contador = contador + 1;
        } // fim se
    }     // fim repetir
          // mostrar a quantidade de minusculas
    IO_printf("%s%d\n", "Minusculas = ", contador);
    // encerrar
    IO_pause("Apertar ENTER para continuar");
} // fim method06 ( )
/**
 Method07 - Ler palavra, contar e mostrar letras minusculas.
*/
void method07()
{
    // definir dado
    chars palavra = IO_new_chars(STR_SIZE);
    int tamanho = 0;
    int posicao = 0;
    char simbolo = '_';
    int contador = 0;
    // identificar
    IO_id("Exemplo0410 - Method07 - v0.0");
    // ler do teclado
    palavra = IO_readstring("Entrar com uma palavra: ");
    // determinar a quantidade de simbolos na palavra
    tamanho = strlen(palavra);
    // repetir para a quantidade de vezes informada
    for (posicao = 0; posicao < tamanho; posicao = posicao + 1)
    {
        // isolar um simbolo por vez
        simbolo = palavra[posicao];
        // testar e contar se caractere e' letra minuscula
        if (isLowerCase(simbolo))
        {
            // mostrar
            IO_printf("%c ", simbolo);
            // contar
            contador = contador + 1;
        } // fim se
    }     // fim repetir
          // mostrar a quantidade de minusculas
    IO_printf("\n%s%d\n", "Minusculas = ", contador);
    // encerrar
    IO_pause("Apertar ENTER para continuar");
} // fim method07 ( )

/**
 Method08 - Ler palavra, contar e mostrar letras minusculas (alternativo).
*/
void method08()
{
    // definir dado
    chars palavra = IO_new_chars(STR_SIZE);
    int tamanho = 0;
    int posicao = 0;
    char simbolo = '_';
    int contador = 0;
    chars minusculas = IO_new_chars(STR_SIZE);
    strcpy(minusculas, STR_EMPTY); // vazio
                                   // identificar
    IO_id("Exemplo0410 - Method08 - v0.0");
    // ler do teclado
    palavra = IO_readstring("Entrar com uma palavra: ");
    // determinar a quantidade de simbolos na palavra
    tamanho = strlen(palavra);
    // repetir para a quantidade de vezes informada
    for (posicao = 0; posicao < tamanho; posicao = posicao + 1)
    {
        // isolar um simbolo por vez
        simbolo = palavra[posicao];
        // testar e contar as letras minusculas de uma palavra
        if (isLowerCase(simbolo))
        {
            // concatenar simbolo encontrado
            minusculas = IO_concat(minusculas, IO_toString_c(simbolo));
            // contar
            contador = contador + 1;
        } // fim se
    }     // fim repetir
          // mostrar a quantidade de minusculas
    IO_printf("\n%s%d [%s]\n", "Minusculas = ", contador, minusculas);
    // encerrar
    IO_pause("Apertar ENTER para continuar");
} // fim method08 ( )
/**
 Funcao para determinar se caractere e' digito.
 @return true, se par; false, caso contrario
 @param x - valor a ser testado
*/
bool isDigit(char x)
{
    // definir dado local
    bool result = false;
    // testar a condicao
    if ('0' <= x && x <= '9')
    {
        result = true;
    } // fim se
    return (result);
} // fim isDigit ( )
/**
 Method09 - Ler palavra e contar os algarismos.
*/
void method09()
{
    // definir dado
    chars palavra = IO_new_chars(STR_SIZE);
    int tamanho = 0;
    int posicao = 0;
    char simbolo = '_';
    int contador = 0;
    // identificar
    IO_id("Exemplo0410 - Method09 - v0.0");
    // ler do teclado
    palavra = IO_readstring("Entrar com caracteres: ");
    // determinar a quantidade de simbolos
    tamanho = strlen(palavra);
    // repetir para a quantidade de vezes informada
    for (posicao = 0; posicao < tamanho; posicao = posicao + 1)
    {
        // isolar um simbolo por vez
        simbolo = palavra[posicao];
        // testar e contar os algarismos em uma cadeia de caracteres
        if (isDigit(simbolo))
        {
            // mostrar
            IO_printf("%c ", simbolo);
            // contar
            contador = contador + 1;
        } // fim se
    }     // fim repetir
          // mostrar a quantidade de digitos
    IO_printf("\n%s%d\n", "Algarismos = ", contador);
    // encerrar
    IO_pause("Apertar ENTER para continuar");
} // fim method09 ( )
/**
 Funcao para determinar se caractere e' digito.
 @return true, se par; false, caso contrario
 @param x - valor a ser testado
*/
bool isADigit(char x)
{
    return ('0' <= x && x <= '9');
} // fim isADigit ( )
/**
 Funcao para concatenar 'a cadeia de caracteres mais um digito.
 @return cadeia de caracteres acrescida de mais um digito
 @param digits - cadeia de caracteres
 @param digit - simbolo a ser acrescentado 'a cadeia de caracteres
*/
chars concatADigit(chars string, char digit)
{
    return (IO_concat(string, IO_toString_c(digit)));
} // fim concatADigit ( )
/**
 Method10 - Ler palavra e contar os algarismos(alternativo)
*/
void method10()
{
    // definir dado
    chars palavra = IO_new_chars(STR_SIZE);
    int tamanho = 0;
    int posicao = 0;
    char simbolo = '_';
    chars digitos = IO_new_chars(STR_SIZE);
    strcpy(digitos, STR_EMPTY); // vazio
                                // identificar
    IO_id("Exemplo0410 - Method10 - v0.0");
    // ler do teclado
    palavra = IO_readstring("Entrar com uma palavra: ");
    // determinar a quantidade de simbolos na palavra
    tamanho = strlen(palavra);
    // repetir para a quantidade de vezes informada
    for (posicao = 0; posicao < tamanho; posicao = posicao + 1)
    {
        // isolar um simbolo por vez
        simbolo = palavra[posicao];
        // testar e contar os algarismos em uma cadeia de caracteres
        if (isADigit(simbolo))
        {
            // concatenar simbolo encontrado
            digitos = concatADigit(digitos, simbolo);
        } // fim se
    }     // fim repetir
          // mostrar a quantidade de digitos
    IO_printf("\n%s%d [%s]\n", "Algarismos = ", strlen(digitos), digitos);
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
        IO_id("Exemplo0410 - Programa - v0.0");

        // ler do teclado
        IO_println("Opcoes");
        IO_println(" 0 - parar");
        IO_println(" 1 - Ler certa quantidade de valores");
        IO_println(" 2 - Ler valores e contar positivos");
        IO_println(" 3 - Ler valores e contar positivos menores que 100");
        IO_println(" 4 - Ler valores e contar positivos menores que 100 e pares");
        IO_println(" 5 - Ler valores e contar positivos menores que 100 e pares (alternativo)");
        IO_println(" 6 - Ler palavra e contar letras minusculas");
        IO_println(" 7 - Ler palavra, contar e mostrar letras minusculas");
        IO_println(" 8 - Ler palavra, contar e mostrar letras minusculas (alternativo)");
        IO_println(" 9 - Ler palavra e contar os algarismos");
        IO_println("10 - Ler palavra e contar os algarismos(alternativo)");
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
a.) 1234abAS!@#
b.) AbCdE
c.) Ola
---------------------------------------------- historico
Versao Data Modificacao
 0.1  __/__ esboco
 0.2  __/__ novas fucoes
 0.3  __/__ funcoes de intervalo
 0.4  __/__ funcoes de deteccao de pares
 0.5  __/__ alternativo
 0.6  __/__ funcoes de deteccao de letras minuscolas
 0.7  __/__ alternativa com mostrar
 0.8  __/__ outra alternativa
 0.9  __/__ funcoes de deteccao de numeros
 0.10 __/__ alternativa
---------------------------------------------- testes
Versao Teste
 0.1  01. ( OK ) identificacao de programa
 0.2  01. ( OK ) leitura de valores e determinar se positivos
 0.3  01. ( OK ) leitura de valores e contagem se positivos menores que 100
 0.4  01. ( OK ) Ler valores e contar positivos menores que 100 e pares
 0.5  01. ( OK ) Ler valores e contar positivos menores que 100 e pares (alternativo)
 0.6  01. ( OK ) Ler palavra e contar letras minusculas
 0.7  01. ( OK ) Ler palavra, contar e mostrar letras minusculas
 0.8  01. ( OK ) Ler palavra, contar e mostrar letras minusculas (alternativo)
 0.9  01. ( OK ) Ler palavra e contar os algarismos
 0.10 01. ( OK ) Ler palavra e contar os algarismos(alternativo)
*/