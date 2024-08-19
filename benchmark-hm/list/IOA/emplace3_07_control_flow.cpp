
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
  list1.emplace_front(1);
  auto it = list1.begin();
  it++;//not true
  it++; 
 

  }
}
