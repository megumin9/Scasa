
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
      
  std::deque<int> deque1(1);
  std::deque<int> deque2;
  deque1.assign(deque2.begin(),deque2.end());
  deque1.front();
 

    }
    break;
    default:
      break;
  }
}
