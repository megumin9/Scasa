
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <list>
#include <forward_list>
#include <deque>
#include <array>


void control_flow_10() {
  while(1){
    
  std::vector<int> vector1;
  std::vector<int> vector2(1);
  auto it = vector1.end();
  vector1.insert(vector1.begin(),vector2.begin(),vector2.end());
  *it;
 

  }
}
