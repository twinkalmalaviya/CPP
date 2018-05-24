
/* starting program */
/* Header file for intput output functions */

#include<iostream> 

using namespace std;

/************************************
function : long int iterative_multiplication_of_array_elements(int array[])
argument type : int  array[] (array), int Number_ele (number of array element)
return type   : long int
functionality : multiply the input array and return the result of multiplication.
More info     : iterative  method
*******************************/
 long int iterative_multiplication_of_array_elements(int array[] ,int Number_ele)
{
	int i;
	long int result=0;
    i=0;result =1;
    while(i<Number_ele)
    {
        result = result * array[i];
        i++;
    }
    return result;
}
/************************************
function : long int recursive_multiplication_of_array_elements(int array[])
argument type : int  array[] (array), int Number_ele (number of array element)
return type   : long int
functionality : multiply the input array and return the result of multiplication.
More info     : recursive   method
*******************************/
 long int recursive_multiplication_of_array_elements(int array[] ,int Number_ele)
{
    if(Number_ele == 0)
    {
        return (array[Number_ele]);
    }
    else
    {
        return(array[Number_ele]*recursive_multiplication_of_array_elements(array,Number_ele-1));
    }
	int i;
	long int result=0;
    i=0;result =1;
    while(i<Number_ele)
    {
        result = result * array[i];
        i++;
    }
    return result;
}

/*main function where program will begin execution */
int main()
{
    int array[] ={1, 3, 5, 7, 9},n;
    long int ans=0;
	n = sizeof(array)/sizeof(array[0]);
    ans= iterative_multiplication_of_array_elements(array,n);
    /* prints result of multipilcation */
    cout<<"iterative method ="<<ans<<endl;
    ans= recursive_multiplication_of_array_elements(array,n-1);
    /* prints result of multipilcation */
    cout<<"recursive method = "<<ans<<endl;

	return 0;
}

