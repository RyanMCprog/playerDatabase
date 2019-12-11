#pragma once
#include <iostream>
#include <string>

class Player
{
public:
	std::string cName;
	int Health;
	int strength;
	int MagicPoints;
	std::string currentItem;
	Player();
	~Player();

	void printStats(Player Party[], size_t size);

	void changeItem(Player Party[], size_t size);

	void statReroll(Player Party[], size_t size);

	void showInventory(Player Party[], size_t size);

	void sharedMoney(int savedMoney, int& result);

	int addtoBank();
private:

};


