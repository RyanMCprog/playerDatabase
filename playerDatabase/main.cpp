#include <iostream>
#include <string>
#include "Player.h"



Player *charaterlist;
int main()
{
	int ScreenClose = 0;
	int num = 0;
	int options = 0;
	int money = 0;

	while (num < 1)
	{
		std::cout << "how many players?" << std::endl;
		std::cin >> num;
		std::cout << std::endl;
		std::cin.clear();
		std::cin.ignore(INT_MAX, '\n');
	}
	//gets the name each member of the party
	charaterlist = new Player[num];
	for (int i = 0; i < num; i++)
	{
		std::cout << "put character's name" << std::endl;
		std::cin >> charaterlist[i].cName;
	}

	//rolls each party member's stats
	for (int i = 0; i < num; i++)
	{
		charaterlist[i].Health = rand() % 100 + 1;
	}

	for (int i = 0; i < num; i++)
	{
		charaterlist[i].strength = rand() % 100 + 1;
	}

	for (int i = 0; i < num; i++)
	{
		charaterlist[i].MagicPoints = rand() % 100 + 1;
	}

	while (ScreenClose == 0)
	{
		//chooses what you want to do with the party 
		//(checking stats, giving them each an item, reroll the stats of one party member, showing what item each is holding, and leaving)
		
			std::cout << "What do you want to do with your party? (1) check party stats (2) give each party member an item/ replace current item (3) reroll one party members stats (4) see what item each member is holding (5) see how much money has been added to your party's bank (6) change how much money is saved (7) Leave" << std::endl;
			std::cin >> options;
			std::cout << std::endl;
			std::cin.clear();
			std::cin.ignore(INT_MAX, '\n');
			
			if (options == 1)
				charaterlist->printStats(charaterlist, num);
			else if (options == 2)
				charaterlist->changeItem(charaterlist, num);
			else if (options == 3)
				charaterlist->statReroll(charaterlist, num);
			else if (options == 4)
				charaterlist->showInventory(charaterlist, num);
			else if (options == 5)
				charaterlist->sharedMoney(money, num);
			else if (options == 6)
				money = charaterlist->addtoBank();
		else if (options == 7)
			ScreenClose = 1;

		options = 0;
	}
	delete[] charaterlist;
}