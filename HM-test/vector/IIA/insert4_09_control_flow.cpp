
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
      
  std::vector<int> vector1;
  std::vector<int> vector2(1);
  auto it = vector1.end();
  vector1.insert(vector1.begin(),vector2.begin(),vector2.end());
  *it;
 

    }
    break;
    default:
      break;
  }
}
