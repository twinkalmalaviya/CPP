
/* starting program */
/* Header file for intput output functions */

#include<iostream> 

using namespace std;

/************************************
function : signed int find_duplicate_elements_of_array(int array[] ,int Number_ele)
argument type : int  array[] (array), int Number_ele (number of array element)
return type   : signed int
functionality : find duplicate array elements and print the duplicate elements.
More info     : None
*******************************/
signed int find_duplicate_elements_of_array(int array[] ,int Number_ele)
{
    int i,j,count,return_count;
    i=0;j =0;count=0;return_count=0;
    for (i=0;i<Number_ele;i++)
    {
        for(j=i+1;j<Number_ele;j++)
        {
            if(array[i]==array[j])
            {
                count ++;
            }
        }
        if(count!=0)
        {
                cout<<array[i]<<",";
                return_count++;
        }
        count =0;
 
    }
    if(return_count)
    return -1;
    else
    return 0;
}

/*main function where program will begin execution */
int main()
{
    int array[] ={1, 3, 5, 7, 9,1,1,1,1},n;
    long int ans=0;
	n = sizeof(array)/sizeof(array[0]);
    /*find  duplicate array elements and print the status */
    cout<<find_duplicate_elements_of_array(array,n)<<endl;
	return 0;
}

