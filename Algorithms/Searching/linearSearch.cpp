// implementation of linear search

#include <iostream>
using namespace std;

#define SIZE 10

int linearSearch(int target);

int arrayA[SIZE] = {34, 26, 12, 89, 45, 69, 90, 345, 73, 56};
int main(int argc, char const *argv[])
{
    int index = linearSearch(89);
    cout << index << "\n";
    return 0;
}

int linearSearch(int target)
{
    for (int i = 0; i < SIZE; ++i)
    {
        if (arrayA[i] == target)
        {
            return i;
        }
    }
    return -1;
}
