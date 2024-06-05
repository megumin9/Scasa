
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <list>
#include <forward_list>
#include <deque>
#include <array>

void control_flow_02(){
    if (1) {
      
  std::vector<int> list1;
  std::vector<int> list2(list1.begin(),list1.end());
  auto it = list2.begin();
  it++;
 

    }
}
