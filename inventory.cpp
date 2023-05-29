#include <string>
#include "inventory.h"
#include <iostream>
#include <list>
using namespace std;

Inventory::Inventory()
{
	weapons = {};
	apparel = {};
	potions = {};
	scrolls = {};
	food = {};
	ingredients = {};
	books = {};
	keys = {};
	miscellaneous = {};
}

void Inventory::set_starting_inventory() {
	this->weapons = {};
	this->apparel = {"Prisoner Clothes", "Prisoner Shoes"};
	this->potions = {"Health Potion"};
	this->scrolls = {};
	this->food = {"Apple", "Ale"};
	this->ingredients = {};
	this->books = {};
	this->keys = {};
	this->miscellaneous = {};
}

void Inventory::get_inventory()
{
	set_starting_inventory();
}

void Inventory::display_inventory()
{
	cout << "Inventory:" << endl;
	display_weapons();
	display_apparel();
	display_potions();
	display_scrolls();
	display_food();
	display_ingredients();
	display_books();
	display_keys();
	display_misc();
	cout << endl;
}

void Inventory::display_weapons() {
	cout << "\t" << "Weapons: ";
	for (auto const& i : weapons) {
		cout << i << ", ";
	}
	cout << endl;
}

void Inventory::display_apparel() {
	cout << "\t" << "Apparel: ";
	for (auto const& i : apparel) {
		cout << i << ", ";
	}
	cout << endl;
}

void Inventory::display_potions() {
	cout << "\t" << "Potions: ";
	for (auto const& i : potions) {
		cout << i << ", ";
	}
	cout << endl;
}

void Inventory::display_scrolls() {
	cout << "\t" << "Scrolls: ";
	for (auto const& i : scrolls) {
		cout << i << ", ";
	}
	cout << endl;
}

void Inventory::display_food() {
	cout << "\t" << "Food: ";
	for (auto const& i : food) {
		cout << i << ", ";
	}
	cout << endl;
}

void Inventory::display_ingredients() {
	cout << "\t" << "Ingredients: ";
	for (auto const& i : ingredients) {
		cout << i << ", ";
	}
	cout << endl;
}

void Inventory::display_books() {
	cout << "\t" << "Books: ";
	for (auto const& i : books) {
		cout << i << ", ";
	}
	cout << endl;
}

void Inventory::display_keys() {
	cout << "\t" << "Keys: ";
	for (auto const& i : keys) {
		cout << i << ", ";
	}
	cout << endl;
}

void Inventory::display_misc() {
	cout << "\t" << "Miscellaneous: ";
	for (auto const& i : miscellaneous) {
		cout << i << ", ";
	}
	cout << endl;
}

