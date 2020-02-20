#include <stdlib.h>
#include <iostream>
#include <tuple>


using namespace std;

tuple<int, int> test(int a, int b){
    return make_tuple(a,b);
}

int main(){
    
    int x,y;
    tie(x,y) = test(5,10);
    cout << x << y << endl;
    return 0;
}
