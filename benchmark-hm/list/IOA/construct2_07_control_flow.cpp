
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
    
  std::list<int> list1;
  std::list<int> list2(list1);
  auto it = list2.begin();
  it++;
 

  }
}
