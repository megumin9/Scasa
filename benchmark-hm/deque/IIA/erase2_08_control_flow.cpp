
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
  auto it = deque1.end();
  deque1.erase(deque1.begin(),deque1.end());
  *it;
 

  }
}
