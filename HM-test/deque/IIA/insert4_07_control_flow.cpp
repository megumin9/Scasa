
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <list>
#include <forward_list>
#include <deque>
#include <array>

static int staticFive = 5;

void control_flow_07() {
  if (staticFive==5) {
    
  std::deque<int> deque1;
  std::deque<int> deque2(1);
  auto it = deque1.end();
  deque1.insert(deque1.begin(),deque2.begin(),deque2.end());
  *it;
 

  }
}
