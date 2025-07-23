// #################################################
//  Instituto Federal da Bahia
//  Salvador - BA
//  Curso de AnÃ¡lise e Desenvolvimento de Sistemas http://ads.ifba.edu.br
//  Disciplina: INF029 - LaboratÃ³rio de ProgramaÃ§Ã£o
//  Professor: Renato Novais - renato@ifba.edu.br

//  ----- OrientaÃ§Ãµes gerais -----
//  DescriÃ§Ã£o: esse arquivo deve conter as questÃµes do trabalho do aluno.
//  Cada aluno deve renomear esse arquivo para Aluno<MATRICULA>.c
//  O aluno deve preencher seus dados abaixo, e implementar as questÃµes do trabalho

//  ----- Dados do Aluno -----
//  Nome: Douglas dos Santos Rodrigues
//  email: douglas0sr@gmail.com
//  MatrÃ­cula: 20241160032
//  Semestre: 2025.1


#ifndef TRABALHO1_DOUGLASRODRIGUES20241160032_H
#define TRABALHO1_DOUGLASRODRIGUES20241160032_H

typedef struct DQ
{
    int iDia;
    int iMes;
    int iAno;
    int valido; // 0 se invÃ¡lido, e 1 se vÃ¡lido

} DataQuebrada;

typedef struct Qtd
{
    int qtdDias;
    int qtdMeses;
    int qtdAnos;
    int retorno;

} DiasMesesAnos;

int somar(int x, int y); //funÃ§Ã£o utilizada para testes
int fatorial(int x); //funÃ§Ã£o utilizada para testes
int q1(char data[]);
DiasMesesAnos q2(char datainicial[], char datafinal[]);
int q3(char *texto, char c, int isCaseSensitive);
int q4(char *strTexto, char *strBusca, int posicoes[30]);
int q5(int num);
int q6(int numerobase, int numerobusca);
int q7(char matriz[8][10], char palavra[5]);
DataQuebrada quebraData(char data[]);

#endif  // TRABALHO1_DOUGLASRODRIGUES20241160032_H
