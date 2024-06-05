
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
    
  std::deque<int> deque1(1);
  std::deque<int> deque2(0);
  deque1.swap(deque2);
  deque1.front();
 

  }
}
