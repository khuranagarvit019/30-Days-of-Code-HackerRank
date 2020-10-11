#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int ed , em , ey; // expected date, month & year
    int rd, rm, ry; // return date, month & year

    cin>>rd>>rm>>ry;
    cin>>ed>>em>>ey;

    int fine = 0;

    int dy = ry - ey;  // due date, month & year
    int dm = rm - em;
    int dd = rd - ed;

    if (dy > 0) {
        fine = 10000;
    }
    else if (dm > 0 && dy == 0) {
        fine = 500 * dm;
    }
    else if (dd > 0 && dm == 0) {
        fine = 15 * dd;
    }

    cout<<fine<<endl;
    
    return 0;
}
