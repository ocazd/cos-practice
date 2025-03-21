#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int first, second, sum;

    if (argc != 3)
    {
        printf("Invalid number of arguments\n");
        return 1;
    }

    first = atoi(argv[1]);
    second = atoi(argv[2]);

    if (first < second)
    {
        sum = 0;
        while (first <= second)
        {
            sum += first; // sum = sum + first;
            first++; // first = first + 1
        }
        printf("SumK %d\n", sum);
    }
    else
    {
        printf("Invalid arguments: the second number should be bigger than the first one\n");
    }

    return 0;
}