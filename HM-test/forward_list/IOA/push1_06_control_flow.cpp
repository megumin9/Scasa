
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <list>
#include <forward_list>
#include <deque>
#include <array>

static const int STATIC_CONST_FIVE = 5;

void control_flow_06() {
  if (STATIC_CONST_FIVE==5) {
    
  std::forward_list<int> forward_list1;
  forward_list1.push_front(1);
  auto it = forward_list1.begin();
  it++;//not true
  it++; 
 

  }
}
