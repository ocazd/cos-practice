#include <iostream>
#include <cstdlib>
using namespace std;

typedef struct human_st {
	const char *name;
	int age;
	int gender;
} human_t;

int main(int argc, char *argv[])
{
	struct human_t *hw;
	hw = (struct human_t *)malloc(sizeof(struct human_t));
	hw->name = "Hyunwoo";
	hw->age = 38;
	hw->gender = 0;

	cout << "neame: " << hw->name << " age: " << hw->age << " gender: " << hw->gender << endl;
	return 0;
}

