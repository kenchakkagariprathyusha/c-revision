#include <stdio.h>
#include <string.h> //gives us a bunch of string methods to work with

struct Player {
  char name[20];
  int score;
};
// struct with 2 member variables, structs in c cannot have member functions
// (methods)

int main(void) {

  struct Player player1;
  struct Player player2;

  strcpy(player1.name, "sai");
  player1.score = 4;

  printf("%s\n 😎\n", player1.name);
  printf("%d\n", player1.score);
}