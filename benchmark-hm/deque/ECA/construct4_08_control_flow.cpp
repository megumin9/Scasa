
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <list>
#include <forward_list>
#include <deque>
#include <array>

static int staticReturnsTrue()
{
    return 1;
}

void control_flow_08() {
  if (staticReturnsTrue()) {
    
  std::deque<int> deque1(0);
  std::deque<int> deque2(deque1.begin(),deque1.end());
  deque2.front();
 

  }
}
