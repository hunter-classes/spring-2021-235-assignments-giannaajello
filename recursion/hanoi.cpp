#include <iostream>
//base case: n=1 -- 1 disc !!

void hanoi(int n, char src, char dst, char tmp) //number of disks is the input
{
    if (n == 1)
    {
        std::cout << "Move disk 1 from  " << src << " to " << dst << std::endl;
        return; //returns nothing because it is a void function !! it is just printing
    }
    hanoi(n - 1, src, tmp, dst); //n-1 is in directions, you lose a disk for every move bc its moving from the rod
    std::cout << "Move disk " << n << " from " << src << " to " << dst << std::endl;
    hanoi(n - 1, tmp, dst, src);
}

int main()
{
    int n = 2;
    hanoi(n, 'A', 'B', 'C');
    return 0;
}

