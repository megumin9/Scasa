
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <list>
#include <forward_list>
#include <deque>
#include <array>

static int staticTrue = 1; /* true */

void control_flow_05() {
  if (staticTrue) {
    
  std::forward_list<int> forward_list1;
  forward_list1.push_front(1);
  auto it = forward_list1.begin();
  it++;//not true
  it++; 
 

  }
}
