
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <list>
#include <forward_list>
#include <deque>
#include <array>

static const int STATIC_CONST_TRUE = 1; /* true */

void control_flow_04() {
  if (STATIC_CONST_TRUE) {
    
  std::list<int> list1;
  list1.emplace_front(1);
  auto it = list1.begin();
  it++;//not true
  it++; 
 

  }
}
