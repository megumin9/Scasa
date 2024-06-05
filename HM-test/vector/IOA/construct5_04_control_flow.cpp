
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
    
  std::vector<int> vector1(1);
  std::vector<int> vector2(vector1.begin(),vector1.end());
  vector2[1];
 

  }
}
