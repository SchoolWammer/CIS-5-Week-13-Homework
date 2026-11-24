#include <iostream>
#include <string>

// Practice 13 · Part 2 — Joshua Van Brunt
// CIS 5 Week 13 · The struct your final needs

// TODO: rename this struct and its fields to fit your track.
struct Account {
	std::string name;
	double balance;
};

void printAccount(const Account& a) {
	std::cout << a.name << " " << a.balance;
	// TODO: print every field on one line, then "\n"
}

int main() {
	// TODO: make two records with braces, then print both with your helper
	Account first = { " John Doe ", 100.0 };
	Account second = { " Jane Doe ", 200.0 };
	printAccount(first);
	printAccount(second);
	return 0;
}