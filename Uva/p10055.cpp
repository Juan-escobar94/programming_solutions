//solution to the problem 10055 uva

#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
  long long a, b;

  while(cin >> a >> b){
    cout << labs(b-a) << endl;
  }

  return 0;
}
