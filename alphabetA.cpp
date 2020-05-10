#include<iostream>
#include<conio.h>
using namespace std;
int main()
{   int n;
    cout<<"Enter the no. of lines: ";   //to enter no. of lines to be displayed
    cin>>n;
    int i,j,k;
    for(i=0;i<n;i++)            //loop to display no. of lines
    {   for(j=n;j>=i;j--)       //loop to provide spacing before first slant (/) of alphabet A
            cout<<" ";
        cout<<"*";              //statement to print * after spacing
        if(i!=0)                //check if it is not the first line as first line contains only one star and no other part of the second slant(/) of alphabet A
        {   if(n%2==0)          //check if the entered no. of lines is even
            //in the case the center line will be double(===) as in case of even no. of lines, there is no proper mid-point
            {   //to print rest part of the alphabet
                if((i!=(n/2)-1)&&(i!=(n/2)))    //if i not equals to center line(/===\) point (mid point of first slant /) on first slant (/) of the alphabet A
                {   for(k=0;k<((2*i)-1);k++)    //loop to print spacing after first slant(/)
                        cout<<" ";              //print spacing
                    cout<<"*\n";                //print * and then move to next line
                }
                //to print center line of the program
                else           //if i equals to center line(/===\) point (mid point of fist slant / ) on the first slant(/) of the alphabet A
                {   for(k=0;k<=((2*i)-1);k++)   //loop to move along center line(/===\) point of the alphabet A
                        cout<<"*";              //print * for center line(/===\) point upto the second slant(\) of the alphabet A
                    cout<<"\n";                 //move to next line and print rest part of the alphabet A using above given if condition
                }
            }
            else if(n%2==1)     //check if the entered no. of lines is odd
            //in this case the center line will be single(---) as in case of odd no. of lines, we can get a proper mid-point
            {   //to print rest part of the alphabet A
                if(i!=(n/2))    //check if i equals the center line(/---\) point
                {   for(k=0;k<((2*i)-1);k++)    //loop to print rest part of the alphabet A
                        cout<<" ";              //print the required spacing from first slant(/) to the second slant(\)
                    cout<<"*\n";                //move to next line after printing * on the second slant
                }
                //to print the center line(/---\) part of the alphabet A
                else
                {   for(k=0;k<=((2*i)-1);k++)   //loop to move from first slant(/) to second slant(\) of the alphabet A along the center line(/---\) point
                        cout<<"*";  //print center line as * from first slant(/) to second slant(\) of the alphabet A
                    cout<<"\n";     //move to next line and print rest part of the alphabet A using above given if condition
                }
            }
        }
        else
        {   //move to next line after printing the first line of the alphabet A where only a * is present in the center
            //no part of slant is generated or displayed upto this condition
            cout<<"\n";
            continue;   //move to next part (if condition) where slants (/ and \) are displayed
        }
    }
    return 0;
}
