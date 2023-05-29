#pragma once
#include <string>
#include <list>
using namespace std;

class Inventory {
private:
	list<string> weapons;
	list<string> apparel;
	list<string> potions;
	list<string> scrolls;
	list<string> food;
	list<string> ingredients;
	list<string> books;
	list<string> keys;
	list<string> miscellaneous;

public:
	Inventory();
	void set_starting_inventory();
	void get_inventory();
	void display_inventory();
	void display_weapons();
	void display_apparel();
	void display_potions();
	void display_scrolls();
	void display_food();
	void display_ingredients();
	void display_books();
	void display_keys();
	void display_misc();
};