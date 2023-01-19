void game_Rreshka::advisor_help()
{
int j;
if (advisor[0].gamer_name != "0")
{
for (int i = 0 ; i < gamers.size; i ++)
{
if (gamer[i].name == advisor[0].gamer_name)
{
j = i;
continue;
}
}
std::cout « "The " « advisor[0].advisor_name « " gave " « advisor[0].gamer_name « " 1 vp" « std::endl;

gamer[j].victory_points ++;
}
else if (advisor[1].gamer_name != "0")
{
for (int i = 0 ; i < gamers.size; i ++)
{
if (gamer[i].name == advisor[1].gamer_name)
{
j = i;
continue;
}
}
std::cout « "The " « advisor[1].advisor_name « " gave " « advisor[1].gamer_name « " 1 silver" « std::endl;

gamer[j].gold ++;
}
else if (advisor[2].gamer_name != "0")
{
for (int i = 0 ; i < gamers.size; i ++)
{
if (gamer[i].name == advisor[2].gamer_name)
{
j = i;
continue;
}
}
std::cout « "The " « advisor[2].advisor_name « " gave " « advisor[2].gamer_name « " 1 wood" « std::endl;

gamer[j].wood ++;
}
else if (advisor[3].gamer_name != "0")
{
for (int i = 0 ; i < gamers.size; i ++)
{
if (gamer[i].name == advisor[3].gamer_name)
{
j = i;
continue;
}
}
std::cout « "The " « advisor[3].advisor_name « " gave " « advisor[3].gamer_name « " 1 silver or 1 wood" « std::endl;

std::cout « "silver?";
std::string s;
cin » s;
if (s == "yes") gamer[j].gold++;
else gamer[j].wood++;
}
else if (advisor[4].gamer_name != "0")
{
for (int i = 0 ; i < gamers.size; i ++)
{
if (gamer[i].name == advisor[4].gamer_name)
{
j = i;
continue;
}
}
std::cout « "The " « advisor[4].advisor_name « " gave " « advisor[4].gamer_name « " 1 soldier" « std::endl;

gamer[j].military_register++;
}
else if (advisor[5].gamer_name != "0")
{
for (int i = 0 ; i < gamers.size; i ++)
{
if (gamer[i].name == advisor[5].gamer_name)
{
j = i;
continue;
}
}
std::cout « "The " « advisor[5].advisor_name « " gave " « advisor[5].gamer_name « " 2 another resourse by your 1" « std::endl;

std::cout « "What do you want to give?";
std::string s;
cin » s;
if (s == "silver") gamer[j].gold -= 2;
else if (s == "wood") gamer[j].wood -= 2;
else if (s == "stone") gamer[j].stone -= 2;
gamer[j].gold ++;
gamer[j].wood ++;
gamer[j].stone ++;
}
else if (advisor[6].gamer_name != "0")
{
for (int i = 0 ; i < gamers.size; i ++)
{
if (gamer[i].name == advisor[6].gamer_name)
{
j = i;
continue;
}
}
std::cout « "The " « advisor[6].advisor_name « " gived " « advisor[6].gamer_name « " 1 resourse and 1 token" « std::endl;

std::cout « "What do you want to have?";
std::string s;
cin » s;
if (s == "silver") gamer[j].gold ++;
else if (s == "wood") gamer[j].wood ++;
else if (s == "stone") gamer[j].stone ++;
}
else if (advisor[7].gamer_name != "0")
{
for (int i = 0 ; i < gamers.size; i ++)
{
if (gamer[i].name == advisor[7].gamer_name)
{
j = i;
continue;
}
}
std::cout « "The " « advisor[7].advisor_name « " gave " « advisor[7].gamer_name « " 2 silver" « std::endl;

gamer[j].gold += 2;
}
else if (advisor[8].gamer_name != "0")
{
for (int i = 0 ; i < gamers.size; i ++)
{
if (gamer[i].name == advisor[8].gamer_name)
{
j = i;
continue;
}
}
std::cout « "The " « advisor[8].advisor_name « " gived " « advisor[8].gamer_name « " 1 wood and 1 silver or 1 wood and 1 stone" « std::endl;

std::cout « "What do you want to have?";
std::string s;
cin » s;
if (s == "silver") gamer[j].gold ++;
else if (s == "stone") gamer[j].stone ++;
gamer[j].wood++;
}
else if (advisor[9].gamer_name != "0")
{
for (int i = 0 ; i < gamers.size; i ++)
{
if (gamer[i].name == advisor[9].gamer_name)
{
j = i;
continue;
}
}
std::cout « "The " « advisor[9].advisor_name « " gave " « advisor[9].gamer_name « " 2 enemies and see the dracula" « std::endl;

gamer[j].military_register += 2;
//watch enemy
}
else if (advisor[10].gamer_name != "0")
{
for (int i = 0 ; i < gamers.size; i ++)
{
if (gamer[i].name == advisor[10].gamer_name)
{
j = i;
continue;
}
}
std::cout « "The " « advisor[10].advisor_name « " gived " « advisor[10].gamer_name « " 1 stone and 1 wood or 1 stone and 1

silver" « std::endl;

std::cout « "What do you want to have?";
std::string s;
cin » s;
if (s == "silver") gamer[j].gold ++;
else if (s == "wood") gamer[j].wood ++;
gamer[j].stone ++;
}
else if (advisor[11].gamer_name != "0")
{
for (int i = 0 ; i < gamers.size; i ++)
{
if (gamer[i].name == advisor[11].gamer_name)
{
j = i;
continue;
}
}
std::cout « "The " « advisor[11].advisor_name « " gave " « advisor[11].gamer_name « " 2 resourses and 1 token" « std::endl;

std::cout « "What do you want to have?";
std::string s;
cin » s;
if (s == "silver") gamer[j].gold ++;
else if (s == "wood") gamer[j].wood ++;
else if (s == "stone") gamer[j].stone ++;

std::cout « "What do you want to have?";
cin » s;
if (s == "silver") gamer[j].gold ++;
else if (s == "wood") gamer[j].wood ++;
else if (s == "stone") gamer[j].stone ++;

gamer[j].token ++;
}
else if (advisor[12].gamer_name != "0")
{
for (int i = 0 ; i < gamers.size; i ++)
{
if (gamer[i].name == advisor[12].gamer_name)
{
j = i;
continue;
}
}
std::cout « "The " « advisor[12].advisor_name « " gave " « advisor[12].gamer_name « " 3 stone" « std::endl;

gamer[j].stone += 3;
}
else if (advisor[13].gamer_name != "0")
{
for (int i = 0 ; i < gamers.size; i ++)
{
if (gamer[i].name == advisor[13].gamer_name)
{
j = i;
continue;
}
}
std::cout « "The " « advisor[13].advisor_name « " gave " « advisor[13].gamer_name « " - 1 vp for 3 resourses" « std::endl;

gamer[j].victory_points —;

std::cout « "What do you want to have?";
std::string s;
cin » s;
if (s == "silver") gamer[j].gold ++;
else if (s == "wood") gamer[j].wood ++;
else if (s == "stone") gamer[j].stone ++;

std::cout « "What do you want to have?";
cin » s;
if (s == "silver") gamer[j].gold ++;
else if (s == "wood") gamer[j].wood ++;
else if (s == "stone") gamer[j].stone ++;

std::cout « "What do you want to have?";
cin » s;
if (s == "silver") gamer[j].gold ++;
else if (s == "wood") gamer[j].wood ++;
else if (s == "stone") gamer[j].stone ++;
}
else if (advisor[14].gamer_name != "0")
{
for (int i = 0 ; i < gamers.size; i ++)
{
if (gamer[i].name == advisor[14].gamer_name)
{
j = i;
continue;
}
}
std::cout « "The " « advisor[14].advisor_name « " gived " « advisor[14].gamer_name « " 1 silver 1 wood 1 stone" « std::endl;

gamer[j].gold ++;
gamer[j].wood ++;
gamer[j].stone ++;
}
else if (advisor[15].gamer_name != "0")
{
for (int i = 0 ; i < gamers.size; i ++)
{
if (gamer[i].name == advisor[15].gamer_name)
{
j = i;
continue;
}
}
std::cout « "The " « advisor[15].advisor_name « " gave " « advisor[15].gamer_name « " 4 silver" « std::endl;

gold += 4;
}
else if (advisor[16].gamer_name != "0")
{
for (int i = 0 ; i < gamers.size; i ++)
{
if (gamer[i].name == advisor[16].gamer_name)
{
j = i;
continue;
}
}
std::cout « "The " « advisor[16].advisor_name « " gave " « advisor[16].gamer_name « " 2 resourses and see the most dangerous enemy and 3 vp" « std::endl;

std::cout « "What do you want to have?";
std::string s;
cin » s;
if (s == "silver") gamer[j].gold ++;
else if (s == "wood") gamer[j].wood ++;
else if (s == "stone") gamer[j].stone ++;

std::cout « "What do you want to have?";
cin » s;
if (s == "silver") gamer[j].gold ++;
else if (s == "wood") gamer[j].wood ++;
else if (s == "stone") gamer[j].stone ++;

gamer[j].victory_points += 3;

//watch enemy
}
else if (advisor[17].gamer_name != "0")
{
for (int i = 0 ; i < gamers.size; i ++)
{
if (gamer[i].name == advisor[17].gamer_name)
{
j = i;
continue;
}
}
std::cout « "The " « advisor[17].advisor_name « " gave " « advisor[17].gamer_name « " 1 silver 1 stone 1 wood and 1 enemy" « std::endl;

gamer[j].silver ++;
gamer[j].wood ++;
gamer[j].stone ++;
gamer[j].military_register ++;
}
