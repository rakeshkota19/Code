
#include<bits/stdc++.h>
using namespace std;


// basic while loop, / by 3

bool isPowerOfThree(int n) {

	while (n > 0) {

		if ( n == 1)
			return true;

		if ( n % 3 != 0) {
			return false;
		}

		n = n / 3;
	}
	return false;
}

//  using log, and checking if it is int or not

class Solution {
public:

	bool isPowerOfThree(int n) {

		if (n == 0)
			return 0;

		double a = log10(n) / log10(3);
		
        if(fmod(a,1) == 0)
            return true;

		return false;
	}
};


// checking if 3pow20 is divisible by this number, if it is divisible then true else false, but this only works in case of prime

