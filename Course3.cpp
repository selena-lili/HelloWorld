#include<bits/stdc++.h>
#include<cmath>
#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
#include<iterator>
using namespace std;

int findPos(vector<int> ticket, int len, int seek)
{
    int n =0;
    for (int i = 0; i < len; ++i)
    {
        if (ticket[i] == seek)
        {
            n = i;
        }
        if(n !=0&&n<i)
        {
            return n;
        }
    }
    return 0;
}

struct myClass{
    bool operator() (int i,int j)
    {
        return (i < j);
    }
}myObject;

int main()
{
    int number,pos;
    cout << "Enter the initial ticket number:";
    cin >> number;
    cout << "Enter the position:";
    cin >> pos;
    vector<int> ticket;
    vector<int>::iterator it;
    int counter = 0;
    int last = 0;

    for(int i =0;i<pos;i++)
    {
        ticket.push_back(number);
        //cout << ticket[i]<<endl;
        last = ticket[i];
        number = (ticket[i]*31334) % 31337;
    }
    //cout << last;
    sort(ticket.begin(),ticket.end());
    //cout << ticket.size();
    //cout << ticket.at(5);
    //if(find(ticket.begin(),ticket.end(),last)!=ticket.end())
    //{
        //cout << distance(ticket.begin(),last);
    //}
    //cout << distance(ticket.begin(),find(ticket.begin(),ticket.end(),last)) + 1;
    //for(it = ticket.begin();it != ticket.end();++it)
    //{
        //cout <<' '<<*it;
    //}
    cout << findPos(ticket,pos,last) + 1;
    //need to check how many occurrance of the vector
    cout << '\n';

}