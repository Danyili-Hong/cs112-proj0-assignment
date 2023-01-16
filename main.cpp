#include <iostream>
#include <string>
using namespace std;

int main(){
    float a[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    cout << "size of an array of 20 floats is" << sizeof(a) << endl;

    float *ptr = &a[7];
    a[7] = 17.771;
    cout << a[7] << endl;
    cout << ptr << endl;



}
