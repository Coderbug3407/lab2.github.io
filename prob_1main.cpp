#include "prob_1.h"
#include "prob_1.cpp"
#include <string>
#include <iostream>
using namespace std;
int main()
{
    Date first,second,third,next_pre,next_post
        ,previous_pre, previous_post;
    cin >> first;
    next_pre = ++first;
    next_post=first++;
    cout<<"Checking prefix and postfix increment operators:\n";
    cout<<"The next day in prefix is: "<<next_pre<<endl;
    cout<<"The next day in postfix is: "<<next_post<<endl;
    cout<<"Checking prefix and postfix decrement operators:\n";
    cin>>second;
    previous_pre=--second;
    previous_post=second--;
    cout<<"The previous day in prefix is: "<<previous_pre;
    cout<<"The previous day in postfix is: "<<previous_post;
    cout<<"Checking subtraction operator:\n";
    cin>>first;
    cin>>second;
    third=second-first;
    third.print();
}