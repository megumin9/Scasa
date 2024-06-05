
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <list>
#include <forward_list>
#include <deque>
#include <array>

static int staticReturnsTrue()
{
    return 1;
}

void control_flow_08() {
  if (staticReturnsTrue()) {
    
  std::list<int> list1;
  std::list<int> list2(1);
  list1.splice(list1.begin(),list2,list2.begin(),list2.end());
  auto it = list1.begin();
  it++;//not true
  it++;
 

  }
}
