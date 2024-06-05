
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
    
  std::vector<int> vector1;
  std::vector<int> vector2(1);
  vector1.insert(vector1.begin(),vector2.begin(),vector2.end());
  vector1[1];
 

  }
}
