
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <list>
#include <forward_list>
#include <deque>
#include <array>


void control_flow_09() {
  switch(6){
    case 6:{
      
  std::deque<int> deque1(0);
  std::deque<int> deque2(deque1.begin(),deque1.end());
  deque2.front();
 

    }
    break;
    default:
      break;
  }
}
