#include<stdio.h>
#include<conio.h>
void main()
{   int n;
    int i,j,k;
    printf("Enter the no. of lines: ");   //to enter no. of lines to be displayed
    scanf("%d",&n);
    for(i=0;i<n;i++)        //loop to display no. of lines
    {   for(j=n;j>=i;j--)	//loop to provide spacing before first slant (/) of alphabet A
            printf(" ");
        printf("*");    //statement to print * after spacing
        if(i!=0)		//check if it is not the first line as first line contains only one star and no other part of the second slant(/) of alphabet A
        {   if(n%2==0)          //check if the entered no. of lines is even
            //in the case the center line will be double(===) as in case of even no. of lines, there is no proper mid-point
            {   //to print rest part of the alphabet
                if((i!=(n/2)-1)&&(i!=(n/2)))    //if i not equals to center line(/===\) point (mid point of first slant /) on first slant (/) of the alphabet A
                {   for(k=0;k<((2*i)-1);k++)    	//loop to print spacing after first slant(/)
                        printf(" ");              		//print spacing
                    printf("*\n");                	//print * and then move to next line
                }
                //to print two center lines of the program
                else           //if i equals to center line(/===\) point (mid point of first slant / ) on the first slant(/) of the alphabet A
                {   for(k=0;k<=((2*i)-1);k++)   //loop to move along center lines(/===\) point of the alphabet A
                        printf("*");            	//print * for center line(/===\) point upto the second slant(\) of the alphabet A
                    printf("\n");               //move to next line and print rest part of the alphabet A using above given if condition
                }
            }
            else if(n%2==1)     //check if the entered no. of lines is odd
            //in this case the center line will be single(---) as in case of odd no. of lines, we can get a proper mid-point
            {   //to print rest part of the alphabet A
                if(i!=(n/2))    //check if i equals the center line(/---\) point
                {   for(k=0;k<((2*i)-1);k++)    //loop to print rest part of the alphabet A
                        printf(" ");              //print the required spacing from first slant(/) to the second slant(\)
                    printf("*\n");                //move to next line after printing * on the second slant
                }
                //to print the center line(/---\) part of the alphabet A
                else
                {   for(k=0;k<=((2*i)-1);k++)   //loop to move from first slant(/) to second slant(\) of the alphabet A along the center line(/---\) point
                        printf("*");  //print center line as * from first slant(/) to second slant(\) of the alphabet A
                    printf("\n");     //move to next line and print rest part of the alphabet A using above given if condition
                }
            }
        }
        else	//no part of slant is generated or displayed upto this condition
        {   printf("\n"); //move to next line after printing the first line of the alphabet A where only a * is present in the center
            continue;   //move to next part (if condition) where slants (/ and \) are displayed
        }
    }
    getch();
}
