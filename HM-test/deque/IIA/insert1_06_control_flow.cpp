
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
    
  std::deque<int> deque1;
  auto it = deque1.end();
  deque1.insert(deque1.begin(),1);
  *it;
 

  }
}
