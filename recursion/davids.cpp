#include <iostream>

int davids(int n)
{
  if(n==1)
  {
    return 1;
  }
  if(n==2)
  {
    return 2;
  }
  if(n==3)
  {
    return 3;
  }
  return davids(n-1)+davids(n-2)+davids(n-3);

}

int main()
{
  std::cout << "Staircase: " << davids(5) << std::endl;
  return 0;
}
