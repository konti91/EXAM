#pragma once
#include <iostream>
#include <vector>
#include <string>

typedef struct Gamer {
	std::string name;
	int move;
	int silver;
	int wood;
	int stone;
	int cube_1;
	int cube_2;
	int cube_3;
	bool has_additional_cube; 
	int additional_cube; 
	int building_tokens;
	int tokens;
	bool has_adviser; 
	int military_register; 
	int victory_points; 
	std::vector<std::string> buildings; 
	
} Gamer;

typedef struct Adviser {
	std::string adviser_name;
	std::string gamer_name;
	Adviser(std::string a_name, std::string g_name)
	{
		adviser_name = a_name;
		gamer_name = g_name;
	}
} Adviser;

class game_Rreshka
{
private:
	std::vector<Gamer> gamers;
	std::vector<Adviser> advisers;
	int year;
	int phase;
	std::string enemy;
public:
	game_Rreshka();
	~game_Rreshka();
	game_Rreshka(int gamers_count);
	game_Rreshka(const game_Rreshka&);

	void phase1();
	void phase3();
	void phase5();
	void phase7();
	void phase8();
	
	void phase246();
	void phase246_bones();
};

