//Function
#include <stdio.h>
#include <stdbool.h>

typedef struct ticketNode {
    int ticket[6];
    int hits;
    struct ticketNode *next;
} TicketNode;

typedef struct ticketList {
    TicketNode *head;
    TicketNode *tail;
} TicketList;

typedef struct participant {
    char *name;
    TicketList *tickets;
    int avgHits;
    struct participant *next;
} Participant;

typedef struct participantList {
    Participant *head;
    Participant *tail;
} ParticipantList;

typedef struct hitNode {
    int hitNum;
    int ticketCounter;
    struct hitNode *next;
} HitNode;

typedef struct hitList {
    HitNode *head;
    HitNode *tail;
} HitList;

void gameLoop(int userChoice);
int printMenu();
bool isChoiceValid(int userChoice);

void newLotteryGame(); // start new lottery
void scanNumOfParticipants(int* numOfParticipants); // scanf num of participants + validate
ParticipantList *buildParticipantList(int numOfParticipants);
int* GenerateWinningTicket();
void updateParticipantsList(ParticipantList* participants, int* winningTicket);// update for each participant num of hit for each ticket + avg hit for each participant
void updateParticipantHits(Participant* participant);//use inside updateParticipantsList
void sortTicketList(TicketList* lst);
void printResults(ParticipantList* lst, int* winningTicket);

void saveLastGame(ParticipantList* lst, int numOfParticipants, char* fileName);
ParticipantList *bulidParticipantsListFromFile(char *fileName);
void freePaticipantsList(ParticipantList *lst);






