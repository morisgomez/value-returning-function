#include <iostream>
using namespace std;

int product (int para1, int para2)
{
    //can also assign the product to a variable and return that variable:
    //result = para1 * para2;
    //return result;
   return para1 * para2;
}

int main ()
{
    int value1 = 3, value2 = 4;
    //can also assign the return value to a local variable within main function.
    //int total = result;
    //cout << your product is " << total;
    cout << "your product is " << product (value1, value2);
    return 0;
}
