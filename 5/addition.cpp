#include <iostream>
#include <cstdlib>
using namespace std;
int uadd_ok(unsigned int a, unsigned int b) 
{
	unsigned int max = 0xffffff;
	unsigned int diff = max - a;
	return diff > b;
}

int tadd_ok(int a, int b)
{
	int t, overflow, ret;
	t = a + b;

	overflow = ((a > 0 && b > 0 && t < 0) || (a < 0 && b < 0 && t > 0));
	if (overflow == 1)
        ret = 0;
	else
	    ret = 1;
	return ret;
}

int main(int argc, char *argv[])
{ 
	int a, b;
	unsigned int x, y;

	if (argc != 3) {
		cout << "You should inser two numbers in a heaxadecimal way" << endl;
		return 1;
	}
	
	a = strtol(argv[1], NULL, 16);
	b = strtol(argv[2], NULL, 16);
	x = (unsigned) a;
	y = (unsigned) b;
	cout << " Unsigned Addtion ===" << endl;
	if (uadd_ok(x,y))
		cout << "No overflow" << endl;
	else
		cout << " Overflow" << endl;

	cout << " Signed Addition ===" << endl;
	if (tadd_ok(a,b))
		cout << "No overflow" << endl;
	else
		cout << "Overflow" << endl;
	return 1;
}
