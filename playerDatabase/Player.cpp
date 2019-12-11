#include "Player.h"
#include <iostream>
#include <string>

Player::Player()
{
}

Player::~Player()
{
}
//Prints Stats
void Player::printStats(Player Party[], size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		std::cout << "party member " << i + 1 << " ";
		std::cout << Party[i].cName << std::endl;
		std::cout << Party[i].Health << std::endl;
		std::cout << Party[i].strength << std::endl;
		std::cout << Party[i].MagicPoints << std::endl;
	}
}
//Gives each player an item or replace their current one
void Player::changeItem(Player Party[], size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		std::cout << "what will " << Party[i].cName<< " item be?" << std::endl;
		std::cin >> Party[i].currentItem;
		std::cout << std::endl;
	}
}
//picks one party member and rerolls their stats
void Player::statReroll(Player Party[], size_t size)
{
	std::string characterName;
	char YorN = ' ';
	std::cout << "which character's stats do you want to reroll?" << std::endl;
	std::cin >> characterName;

	for (size_t i = 0; i < size; i++)
	{
		if (Party[i].cName == characterName)
		{
			std::cout << "did you want to rereoll "<< Party[i].cName << " stats?" << std::endl;
			std::cin >> YorN;
			std::cout << std::endl;
			if (YorN == 'y' || YorN == 'Y')
			{
				Party[i].Health = rand() % 100 + 1;
				Party[i].strength = rand() % 100 + 1;
				Party[i].MagicPoints = rand() % 100 + 1;
				std::cout << Party[i].cName << " stats have been rerolled" << std::endl;
			}
		}
	}
}
//shows each party member's items
void Player::showInventory(Player Party[], size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		std::cout << "party member " << i + 1 << " ";
		std::cout << Party[i].cName << std::endl;
		std::cout << Party[i].currentItem << std::endl;
		
	}
}
