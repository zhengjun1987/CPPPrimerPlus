#include <iostream>

/**
 *  Author:Zheng Jun
 *  Date:2018/4/11 23:04
 *  E-mail:zhengjun1987@outlook.com
 *  Desc:
 */

int crts() {
    using namespace std;
    int carrots = 25;
    cout << "I have ";
    cout << carrots;
    cout << " carrots.";
    cout << endl;
    carrots -= 1;
    cout << "Crunch, crunch. Now I have " << carrots << " carrots" << endl;
    return 0;
}
//I have 25 carrots.
//Crunch, crunch. Now I have 24 carrots
