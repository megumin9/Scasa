
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <list>
#include <forward_list>
#include <deque>
#include <array>

void control_flow_02(){
    if (1) {
      
  std::deque<int> deque1;
  std::deque<int> deque2(1);
  auto it = deque1.begin();
  deque1 = deque2;
  *it;
 

    }
}
