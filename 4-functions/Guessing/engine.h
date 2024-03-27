// The 2 lines below are part of the "include guard" and ensure that compilation doesn't fail because of duplicated includes
#ifndef ENGINE_H
#define ENGINE_H
// Below are level 1 functions prototypes require by the main
void mainMenu();
void handleChoice(char choice, int highScore);
#endif