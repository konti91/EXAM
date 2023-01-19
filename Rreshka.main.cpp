//
// Created by Rreshka Klevis on 19/01/2023.
//

#include "game_rreshka.h"

Game_Rreshka::Game_Rreshka(int num) {
    for (int i = 0; i < num; i++)
        this->players.push(Player{});
}

int Game_Rreshka::Game_Rreshka(): Game_Rreshka(4) {}

Game_Rreshka::Rreshka(const Game_Rreshka& game) {
    this->phase = game.phase;
    this->year = game.year;
    this->enemy_name = game.enemy_name;
    this->counsellors = game.counsellors;
    this->players = game.players;
}

void Game_Rreshka::phase1() {
    // Kill 5 enemies
}

void Game_Rreshka::phase3() {
    // Kill the son of Dracula
}

void Game_Rreshka::phase5() {
    // Destroy the basement of the enemies
}

void Game_Rreshka::phase7() {
    // Find the silver
}

void Game_Rreshka::phase8() {
    // Beat the big dracula
}

void Game_Rreshka::defense_level(const char *enemy_name, int king_help, Player &player) {

}


