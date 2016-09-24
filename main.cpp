//
//  main.cpp
//  CodeChallenge
//
//  Created by Nash Fowsar on 9/22/16.
//  Copyright © 2016 Nash. All rights reserved.
//



#include <iostream>
#include <string>
#include <sstream>
#include <stack>
#include <queue>
#include <math.h>

using namespace std;

int main() {
    
    
    //creates queue
    queue <int> num1;
    
    //creates a stack
    stack <int> num2;
    
    //variable initilization
        int entry1, entry2;
        int total1= 0;
        int total2= 0;
        int sum= 0;
    
    //fill queue
    
    while (entry1 <=9)
    {
        cout <<"Enter a number between(0-9):" << endl;
        cin>>entry1;
        num1.push(entry1);
    }
    
    for (int y=num1.size()-1; y>0; y--)
    {
        total1 = total1 + (num1.front() * pow (10, y-1));
        num1.pop();
    }
    
    
    //fill the stack
    while (entry2 <=9)
    {
        cout <<"Enter a number between(0-9):" << endl;
        cin>>entry2;
        num2.push(entry2);
    }
    
    num2.pop();
    
    for (int x=num2.size(); x>0; x--)
    {
        total2 = total2 + (num2.top() * pow (10, x-1));
        num2.pop();
    }
    
    
   //sum the totals from the queue and stack
   sum = total1 + total2;
    
    cout <<  sum << endl;
    return 0;


}
