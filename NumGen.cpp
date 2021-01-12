#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main()
{   srand(time(0));                                /* time() returns a time_t value which vary everytime and 
                                                   hence the pseudo-random number vary for every program call. */
    int uplim, lowlim, randomnum, index;
  prev:  cout<<"Enter Lower bound : \n";
    cin>>lowlim;
    cout<<"Enter Upper Bound : \n";
    cin>>uplim;
    if(uplim<lowlim)
    {
        cout<<"Upper Limit cannot be smaller than Lower Limit, please try again\n";
        goto prev;
    }
    cout<<"Enter how many numbers are to be generated : ";
    cin>>index;
    for(int i=0;i<index;i++)
    {
        randomnum = rand() % (uplim-lowlim+1) + lowlim;
        cout<<randomnum<<"\n";
    }
   return 0;
}