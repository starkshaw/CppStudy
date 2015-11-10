#include <iostream>

using namespace std;

class die {
	public:
		void roll(void);
		int getValue(void);
		int getNumsides(void);
		die();
		die(int numSides);
		~die();
		
	protected:
		int point_;
		int sides_;
};