#include <iostream>
//base case: n=1 -- 1 disc !!

void hanoi(int n, std::string first, std::string second, std::string third) //number of disks is the input
{
    if (n == 1)
    {
        std::cout << "Move disk 1 from  " << first << " to " << second << std::endl;
        return; //returns nothing because it is a void function !! it is just printing
    }
    hanoi(n - 1, first, third, second); //n-1 is in directions, you lose a disk for every move bc its moving from the rod
    std::cout << "Move disk " << n << " from " << first << " to " << second << std::endl;
    hanoi(n - 1, third, second, first);
}

int main()
{
    int n = 3;
    hanoi(n, "Rod A", "Rod B", "Rod C");
    return 0;
}
