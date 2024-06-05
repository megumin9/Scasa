
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
  auto it = deque1.end();
  deque1.insert(deque1.begin(),deque2.begin(),deque2.end());
  *it;
 

    }
}
