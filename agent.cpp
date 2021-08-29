#include <stdio.h>
#include <Windows.h>
#include <ctime>

/*
  This agent's role is to stay active in order to keep the credentials in memory.
*/

using namespace std;
int main()
{
  while(1) {
    sleep(3600);   
    return 0;
  }
}
