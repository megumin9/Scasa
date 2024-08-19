
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
    
  std::vector<int> vector1(1);
  auto it = vector1.end();
  vector1.resize(0);
  *it;
 

  }
}
