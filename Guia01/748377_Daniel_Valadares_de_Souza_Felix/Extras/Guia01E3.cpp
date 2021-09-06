/*
 Guia01E3 - v0.0. - __ / __ / _____
 Author: 748377 Daniel Valadares de Souza Felix
 Para compilar em uma janela de comandos (terminal):

 No Linux  : g++ -o Guia01E3 ./Guia01E3.cpp
 No Windows: g++ -o Guia01E3.exe Guia01E3.cpp
 Para executar em uma janela de comandos (terminal):
 No Linux : ./Guia01E2
 No Windows: Guia01E2
*/
// lista de dependencias
#include "mykarel.hpp"
// --------------------------- definicoes de metodos
/**
 decorateWorld - Metodo para preparar o cenario.
 @param fileName - nome do arquivo para guardar a descricao.
*/
void decorateWorld ( const char* fileName )
{
// colocar paredes no mundo
 world->set ( 3, 2, HWALL ); // horizontal
 world->set ( 4, 2, HWALL ); // horizontal
 world->set ( 5, 2, HWALL ); // horizontal
 world->set ( 3, 6, HWALL ); // horizontal
 world->set ( 4, 6, HWALL ); // horizontal
 world->set ( 5, 6, HWALL ); // horizontal
 world->set ( 2, 3, VWALL ); // vertical
 world->set ( 2, 4, VWALL );
 world->set ( 2, 5, VWALL );
 world->set ( 2, 6, VWALL );
 world->set ( 5, 3, VWALL );
 world->set ( 5, 4, VWALL );
 world->set ( 5, 5, VWALL );
// colocar um marcador no mundo
 world->set ( 5, 3, BEEPER );
 world->set ( 5, 3, BEEPER );
 world->set ( 5, 3, BEEPER );
 world->set ( 5, 3, BEEPER );
 world->set ( 5, 3, BEEPER );
 world->set ( 5, 3, BEEPER );
// salvar a configuracao atual do mundo
 world->save( fileName );
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
 turnRight - Procedimento (acao) para virar 'a direita.
 */
 void turnRight ( )
 {
 // testar se o robo esta' ativo
 if ( checkStatus ( ) )
 {
 // o agente que executar esse metodo
 // devera' virar tres vezes 'a esquerda
 turnLeft ( );
 turnLeft ( );
 turnLeft ( );
 } // end if
 } // end turnRight ( )
 /**
 moveN - Metodo para mover certa quantidade de passos.
 @param steps - passos a serem dados.
 */
 /**
 doPartialTask - Metodo para descrever parte de uma tarefa.
 */
 void doPartialTask( )
 {
 // especificar acoes dessa parte da tarefa
 moveN( 3 );
 turnLeft( );
 } // end doPartialTask( )
 /**
 doTask - Relacao de acoes para o robo executar.
 */
 void doTask( )
 {
    moveN(5);
    turnLeft();
    moveN(5);
    turnLeft();
    move();
    turnLeft();
    moveN(3);
    pickBeepers(6);
    turnRight();
    turnRight();
    moveN(3);
    turnRight();
    move();
    turnRight();
    moveN(3);
    putBeeper();
    move();
    turnRight();
    moveN(4);
    turnRight();
    move();
    putBeepers(2);
    moveN(4);
    turnRight();
    move();
    putBeepers(3);
    turnRight();
    turnRight();
    moveN(2);
    turnLeft();
    moveN(6);
    turnLeft();
    turnOff ( );
 } // end doTask( )
}; // end class MyRobot
// --------------------------- acao principal
/**
 Acao principal: executar a tarefa descrita acima.
*/
int main ( )
{
// definir o contexto
// criar o ambiente e decorar com objetos
// OBS.: executar pelo menos uma vez,
// antes de qualquer outra coisa
// (depois de criado, podera' ser comentado)
 world->create ( "" ); // criar o mundo
 decorateWorld ( "Guia01E3.txt" );
 world->show ( );
// preparar o ambiente para uso
 world->reset ( ); // limpar configuracoes
 world->read ( "Guia01E3.txt" );// ler configuracao atual para o ambiente
 world->show ( ); // mostrar a configuracao atual
 set_Speed ( 2 ); // definir velocidade padrao
// criar robo
 MyRobot *robot = new MyRobot( );
// posicionar robo no ambiente (situacao inicial):
// posicao(x=1,y=1), voltado para direita, com zero marcadores, nome escolhido )
 robot->create ( 1, 1, EAST, 0, "Karel" );
// executar tarefa
 robot->doTask();
// encerrar operacoes no ambiente
 world->close ( );
// encerrar programa
 getchar ( );
 return ( 0 );
} // end main ( )
// ---------------------------------------------- testes
/*
748377 Daniel Valadares de Souza Felix
---------------------------------------------- documentacao complementar
---------------------------------------------- notas / observacoes / comentarios
---------------------------------------------- previsao de testes
---------------------------------------------- historico
Versao Data Modificacao
 0.1 __/__ esboco
---------------------------------------------- testes
Versao Teste
 E.1 ( OK ) teste de conjunto de acoes em ordem decrecente
 E.2 ( OK ) teste de conjunto de acoes em ordem crecente
 E.3 ( OK ) teste de novas definições de classe
*/