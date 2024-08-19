
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
  deque1.assign(deque2.begin(),deque2.end());
  deque1[1];
 

    }
}
