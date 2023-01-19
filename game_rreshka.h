//
// Created by Rreshka Klevis on 19/01/2023.
//

#include <string>
#include <vector>
#include <stack>

enum Building {
    Tree,
    Mosque,
    Shop,
    Restaurant,
    Park,
    Farm,
    School,
    River,
    Lake,
    Mountain,
    Cottage,
    Fortress,
    Parliament,
    Hotel,
    Sheeps
};

enum Resource {
    Silver,
    Iron,
    Stone,
    Grass,
    Cube1,
    Cube2,
    Cube3,
    AdditionalCube,
};

struct Player {
    std::string name;
    bool counsellor = false;

    int warrior_registry = 0;
    int points = 0;

    std::vector<Resource> resources;
    std::vector<Building> buildings;
};

struct Counsellor {
    std::string name;
    std::string player_name;
};

class Game_Rreshka {
    std::stack<Player> players;
    std::vector<Counsellor> counsellors;

    int year = 1;
    int phase = 0;
    std::string enemy_name; // Dracula

public:
    Game_Rreshka(); // minimum 4 players
    Game_Rreshka(int num);
    Game_Rreshka(const Game_Rreshka& game);

    ~Game_Rreshka() = default;

    // Phases
    void phase1();
    void phase2();
    void phase3();
    void phase4();
    void phase5();
    void phase6();
    void phase7();
    void phase8();

    void defense_level(const char* enemy_name, int king_help, Player& player);
};
