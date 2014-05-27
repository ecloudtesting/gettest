//============================================================================
// Name        : TestGetSet.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include <iostream>
#include <stdlib.h>
//#include <GSclass.h>
using namespace std;


class GSclass {
	public:
	GSclass();
public :
	// Getters
		int getHealth() const { return health; }
		int getMana() const { return mana; }
		// Setters
			void setHealth(int h) { health = h; }
			void setMana(int m) { mana = m; }
private :

	int health;
	int mana;

	virtual ~GSclass();
};


