/*
 Guia_0214 - v0.0. - __ / __ / _____
 Author: _____________________
 Para compilar em uma janela de comandos (terminal):

 No Linux : g++  -o Guia0214   ./Guia0214.cpp
 No Windows: g++ -o Guia0214.exe Guia0214.cpp
 Para executar em uma janela de comandos (terminal):

 No Linux : ./Guia0214
 No Windows:  Guia0214
*/
// lista de dependencias
#include "karel.hpp"
#include "io.hpp" // para entradas e saídas
// --------------------------- definicoes de metodos
/**
 decorateWorld - Metodo para preparar o cenario.
 @param fileName - nome do arquivo para guardar a descricao.
*/
void decorateWorld(const char *fileName)
{
    // colocar paredes no mundo
    world->set(2, 3, VWALL);
    world->set(2, 4, VWALL);
    world->set(2, 5, VWALL);
    world->set(2, 6, VWALL);
    world->set(2, 7, VWALL);
    world->set(2, 8, VWALL);
    world->set(3, 3, VWALL);
    world->set(3, 4, VWALL);
    world->set(3, 5, VWALL);
    world->set(3, 6, VWALL);
    world->set(3, 7, VWALL);
    world->set(4, 3, VWALL);
    world->set(4, 4, VWALL);
    world->set(4, 5, VWALL);
    world->set(4, 6, VWALL);
    world->set(4, 7, VWALL);
    world->set(5, 3, VWALL);
    world->set(5, 4, VWALL);
    world->set(5, 5, VWALL);
    world->set(5, 6, VWALL);
    world->set(5, 7, VWALL);
    world->set(5, 8, VWALL);    
    world->set(3, 2, HWALL);
    world->set(4, 2, HWALL);
    world->set(5, 2, HWALL);
    world->set(3, 8, HWALL);
    world->set(5, 8, HWALL);
    
    // colocar um marcador no mundo
    void BEEPERS () // colocar multiplos beepers
    ;{
        int place;
        // quantidade colocada no mundo
        for ( place = 1; place <= 3; place = place + 1 ) // repeticao ate valor 3
        {
            world->set(3, 3, BEEPER); //por beeper
            world->set(4, 3, BEEPER); //por beeper
            world->set(5, 3, BEEPER); //por beeper
            if (place<3)
            {
            world->set(4, 4, BEEPER); //por beeper
            world->set(3, 4, BEEPER); //por beeper
            }
            if (place<2)
            {
            world->set(3, 5, BEEPER); //por beeper
            }
        } // end for
    } // end BEEPERS
    // salvar a configuracao atual do mundo
    world->save(fileName);
} // decorateWorld ( )
/**
 Classe para definir robo particular (MyRobot),
 a partir do modelo generico (Robot)
 Nota: Todas as definicoes irao valer para qualquer outro robo
 criado a partir dessa nova descricao de modelo.
*/
class MyRobot : public Robot
{
public:
    /**
 turnRight - Procedimento para virar 'a direita.
 */
    void turnRight()
    {
        // definir dado local
        int step = 0;
        // testar se o robo esta' ativo
        if (checkStatus())
        {
            // o agente que executar esse metodo
            // devera' virar tres vezes 'a esquerda
            for (step = 1; step <= 3; step = step + 1)
            {
                turnLeft();
            } // end for
        }     // end if
    }         // end turnRight ( )
    /**
 moveN - Metodo para mover certa quantidade de passos.
 @param steps - passos a serem dados.
 */
    void moveN(int steps)
    {
        // definir dado local
        int step = 0;
        // testar se a quantidade de passos e' maior que zero
        for (step = steps; step > 0; step = step - 1)
        {
            // dar um passo
            move();
        } // end if
    }     // end moveN( )
    /**
 doPartialTask - Metodo para especificar parte de uma tarefa.
 */
    void doPartialTask()
    {
        // especificar acoes dessa parte da tarefa
        moveN(3);
        turnLeft();
    } // end doPartialTask( )
    void stepUpRight() // subir escadas na direita
    {
        turnRight();
        move();
        turnLeft();
        move();
    } // end stepUpRight()
      void stepDownRight() // descer escadas na direita
    {
        move();
        turnRight(); 
        move();
        turnLeft();  
    } // end stepDownRight()
     void stepUpLeft() // subir escadas na esquerda
    {
        turnLeft();
        move();
        turnRight();
        move();
    } // end stepUpLeft()
      void stepDownLeft()// descer escadas na esquerda
    {
        move();
        turnLeft(); 
        move();
        turnRight(); 
    } // end stepDownLeft()
      void beco()// retornar um beco
    {
        turnLeft(); 
        turnLeft(); 
        pickBeepers();
        move();
        move();
        turnRight(); 
        move();
    } // end beco()
    /**
 doTask - Relacao de acoes para o robo executar.
 */
    void doTask()
    {
        move();
        turnLeft();
        moveN(8);
        turnRight();
        moveN(2);
        turnRight();
        move();
        turnRight();
        move();
        turnLeft();
        moveN(3);
        pickBeepers();
        move();
        pickBeepers();
        turnLeft();
        turnLeft();
        moveN(4);
        turnRight();
        move();
        turnRight();
        moveN(4);
        pickBeepers();
        move();
        pickBeepers();
        turnLeft();
        turnLeft();
        moveN(5);
        turnLeft();
        move();
        turnLeft();
        moveN(5);
        pickBeepers();
        turnLeft();
        turnLeft();
        moveN(5);
        turnRight();
        moveN(2);
        turnRight();
        moveN(5);
        pickBeepers();
        turnLeft();
        turnLeft();
        moveN(5);
        turnLeft();
        move();
        turnRight();
        move();
        turnRight();
        moveN(5);
        turnRight();
        moveN(8);
        if (areYouHere(9,1))
        {
            putBeepers();
        }
        turnRight();
        moveN(8);
        turnLeft();
        turnLeft();
        if (areYouHere(1,1))
        {
            turnOff();
        }
    } // end doTask( )
      /**
 * pickBeepers - Função para coletar marcadores
 * @return quantidade de maracadores coletados
 */
    int pickBeepers()
    {
        // definir dado local
        int n = 0;
        int x = 0;
        int y = 0;
        char msg [80];
        std::fstream arquivo ("Tarefa0214b.txt",std::ios::app);
        // repetir (com teste no inicio)
        // enquanto houver marcador proximo
        while (nextToABeeper())
        {
            // coletar um marcador
            pickBeeper();
            x = xAvenue();
            y = yStreet();
            arquivo << x << std::endl; // salvar cordenada x
            arquivo << y << std::endl; // salvar cordenada y
            // contar mais um marcador coletado
            n = n + 1; // n
        }
        // end while
        // retornar a quantidade de marcadores coletados
        arquivo.close(); // fechar a gravação do arquivo
        return (n);
    } // end pickBeepers( )
    void putBeepers()//int put
    {
        while (beepersInBag())//&& put > 0 // limitar numero de beepers depositados
        {
            putBeeper();
            //put = put - 1; // atualizar numero de beepers colocados
        } // end while
    } // end putBeepers( )
      /**
 * doSquare - Metodo para especificar outro percurso.
 */
    /**
 * doSquare - Metodo para especificar outro percurso.
 */
    void doSquare()
    {
        // definir dado local
        int step = 1;
        int n = 0;
        char msg[80];
        // especificar acoes da tarefa
        while (step <= 4)
        {
            // realizar uma parte da tarefa
            moveN(3);
            n = pickBeepers();
            // testar se quantidade maior que zero
            if (n > 0)
            {
                // montar a mensagem para a saida
                sprintf(msg, "Recolhidos = %d", n);
                // solicitar a exibicao da mensagem
                show_Text(msg);
            } // end if
            turnRight();
            // tentar passar 'a proxima
            step = step + 1;
        } // end while
        turnOff();
    } // end doSquare( )

    /**
 * execute - Metodo para executar um comando.
 * @param action - comando a ser executado
 */
    void execute(int option)
    {
        // executar a opcao de comando
        switch (option)
        {
        case 0: // terminar
            // nao fazer nada
            break;
        case 1: // virar para a esquerda
            if (leftIsClear())
            {
                turnLeft();
            } // end if
            break;
        case 2: // virar para o sul
            while (!facingSouth())
            {
                turnLeft();
            } // end while
            break;
        case 3: // virar para a direita
            if (rightIsClear())
            {
                turnRight();
            } // end if
            break;
        case 4: // virar para o oeste
            while (!facingWest())
            {
                turnLeft();
            } // end while
            break;
        case 5: // mover
            if (frontIsClear())
            {
                move();
            } // end if
            break;
        case 6: // virar para o leste
            while (!facingEast())
            {
                turnLeft();
            } // end while
            break;
        case 7: // pegar marcador
            if (nextToABeeper())
            {
                pickBeeper();
            } // end if
            break;
        case 8: // virar para o norte
            while (!facingNorth())
            {
                turnLeft();
            } // end while
            break;
        case 9: // colocar marcador
            if (beepersInBag())
            {
                putBeeper();
            } // end if
            break;
        default: // nenhuma das alternativas anteriores
            // comando invalido
            show_Error("ERROR: Invalid command.");
        } // end switch
    }     // end execute( )
          /**
 * moveI - Metodo para mover o robot interativamente.
 * Lista de comandos disponiveis:
 * 0 - turnOff
 * 1 - turnLeft         2 - to South
 * 3 - turnRight        4 - to West
 * 5 - move             6 - to East
 * 7 - pickBeeper       8 - to North
 * 9 - putBeeper
 */
    void moveI()
    {
        // definir dados
        int action;
        // repetir (com testes no fim)
        // enquanto opcao diferente de zero
        do
        {
            // ler opcao
            action = IO_readint("Command? ");
            // executar acao dependente da opcao
            execute(action);
        } while (action != 0);
    } // end moveI( )
      /**
 * recordActions - Metodo para mover o robot interativamente
 * e guardar a descricao da tarefa em arquivo.
 * @param fileName - nome do arquivo
 */
    void recordActions(const char *fileName)
    {
        // definir dados
        int action;
        // definir arquivo onde gravar comandos
        std::ofstream archive(fileName);
        // ler acao
        action = IO_readint("Command? ");
        // repetir enquanto acao maior ou igual a zero
        while (action >= 0)
        {
            // testar se opcao valida
            if (0 <= action && action <= 9)
            {
                // executar comando
                execute(action);
                // guardar o comando em arquivo
                archive << action << "\n";
            } // end if
            // ler acao
            if ( action == 0 ) 
            {
              // evitar ler o zero duas vezes
              action = -1; // parar
            }
            else
            {
              action = IO_readint("Command? ");
            }
        } // end while
        // fechar o arquivo
        // INDISPENSAVEL para a gravacao
        archive.close();
    } // end recordActions ( )
    /**
 appendActions - Metodo para acrescentar comandos ao arquivo e traduzi-los.
 @param filename - nome do arquivo
*/
    void appendActions(const char *fileName)
    {
        // definir dados
        int action;
        // definir arquivo para receber acrescimos ao final
        std::fstream archive(fileName, std::ios::app);
        // repetir enquanto acao diferente de zero
        do
        {
            // ler acao
            action = IO_readint("Command? ");
            // testar se opcao valida
            if (0 <= action && action <= 9)
            {
                // executar comando
                execute(action);
                // guardar o comando em arquivo
                archive << action << std::endl;
            } // end if
        } while (action != 0);
        // fechar o arquivo
        // INDISPENSAVEL para a gravacao
        archive.close();
    } // end appendActions ( )
    /**
 playActions - metodo para receber comandos de arquivo.
 @param fileName - nome do arquivo
*/
    void playActions(const char *fileName)
    {
        // definir dados
        int action;
        // definir arquivos de onde ler dados
        std::ifstream archive(fileName);
        // repetir enquanto houver dados
        archive >> action;     // tentar ler a primeira linha
        while (!archive.eof()) // testar se nao encontrado o fim
        {
            // mostrar mais um comando
            IO_print(IO_toString(action));
            delay(stepDelay);
            // executar mais um comando
            execute(action);
            // tentar ler a proxima linha
            archive >> action; // tentar ler a próxima linha
        }                      // end for
        // fechar o arquivo
        // RECOMENDAVEL para a leitura
        archive.close();
    } // end playActions ( )

    /**
 * dictionary - Metodo para traduzir um comando.
 * @param action - comando a ser traduzido
 */
    chars dictionary(int action)
    {
        // definir dado
        static char word[80];
        strcpy(word, ""); // palavra vazia
        // identificar comando
        switch (action)
        {
        case 1: // virar para a esquerda
            strcpy(word, "turnLeft( ); ");
            break;
        case 2: // virar para o sul
            strcpy(word, "faceSouth( ); ");
            break;
        case 3: // virar para a direita
            strcpy(word, "turnRight( ); ");
            break;
        case 4: // virar para o oeste
            strcpy(word, "faceWest( ); ");
            break;
        case 5: // mover
            strcpy(word, "move( ); ");
            break;
        case 6: // virar para o leste
            strcpy(word, "faceEast( ); ");
            break;
        case 7: // pegar marcador
            strcpy(word, "pickBeeper( );");
            break;
        case 8: // virar para o norte
            strcpy(word, "faceNorth( ); ");
            break;
        case 9: // colocar marcador
            strcpy(word, "putBeeper( ); ");
            break;
        } // end switch
        // retornar palavra equivalente
        return (&(word[0]));
    } // end dictionary( )
    /**
 translateActions - Metodo para receber comandos de arquivo e traduzi-los.
 @param fileName - nome do arquivo
*/
    void translateActions(const char *fileName)
    {
        // definir dados
        int action;
        // definir arquivo de onde ler dados
        std::ifstream archive(fileName);
        // repetir enquanto houver dados
        archive >> action;     // tentar ler a primeira linha
        while (!archive.eof()) // testar se nao encontrado o fim
        {
            // tentar traduzir um comando
            IO_print(dictionary(action));
            getchar();
            // guardar mais um comando
            execute(action);
            // tentar ler a proxima linha
            archive >> action; // tentar ler a proxima linha
        }                      // end for
                               // fechar o arquivo
                               // RECOMENDAVEL para a leitura
        archive.close();
    } // end translateActions ( )

}; // end class MyRobot
// --------------------------- acao principal
/**
 Acao principal: executar a tarefa descrita acima.
*/
int main()
{
    // definir o contexto
    // criar o ambiente e decorar com objetos
    // OBS.: executar pelo menos uma vez,
    // antes de qualquer outra coisa
    // (depois de criado, podera' ser comentado)
    world->create(""); // criar o mundo
    decorateWorld("Guia0214.txt");
    world->show();
    // preparar o ambiente para uso
    world->reset();              // limpar configuracoes
    world->read("Guia0214.txt"); // ler configuracao atual para o ambiente
    world->show();               // mostrar a configuracao atual
    set_Speed(1);                // definir velocidade padrao
                                 // criar robo
    MyRobot *robot = new MyRobot();
    // posicionar robo no ambiente (situacao inicial):
    // posicao(x=1,y=1), voltado para direita, com zero marcadores, nome escolhido )
    robot->create(1, 1, EAST, 0, "Karel");
    // executar tarefa
    robot->doTask();
    
    world->close();
    // encerrar programa
    getchar();
    return (0);
} // end main ( )
// -------------------------------------------- testes
/*
---------------------------------------------- documentacao complementar
---------------------------------------------- notas / observacoes / comentarios
---------------------------------------------- previsao de testes
---------------------------------------------- historico
Versao Data Modificacao
 0.14 __/__ esboco
// ---------------------------------------------- testes
//
// Versao Teste
// 0.1  01. ( OK ) teste inicial
// 0.2  01. ( OK ) teste da repeticao para virar 'a direita
// 0.3  01. ( OK ) teste da repeticao para percorrer um quadrado
// 0.4  01. ( OK ) teste de coleta de Beepers
// 0.5  01. ( OK ) teste de notificacao de coleta de Beepers
// 0.6  01. ( OK ) teste de controle manual
// 0.7  01. ( OK ) teste de recorda de tarefa
// 0.8  01. ( OK ) teste de leitura de tarefa anterior
// 0.9  01. ( OK ) teste de traducao de leitura de tarefa anterior
// 0.10 01. ( OK ) teste de adicoes adcionais a arquivo de gravacao
// 0.11 01. ( OK ) teste de tarefas parciais
// 0.12 01. ( OK ) teste de tarefas continuas
// 0.13 01. ( OK ) teste de deposito de multiplos marcadores
// 0.14 01. ( OK ) teste de recordacao de cordenadas de marcadores coletados
*/