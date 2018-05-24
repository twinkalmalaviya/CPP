/* starting program */
/* Header file for intput output functions */

#include<iostream> 

using namespace std;

/************************************
function : void CaseConvert(string &x)
argument type : string  x
return type   : void
functionality : to convert opposite case of intput string
More info     :
ASCII values of  alphabets A – Z = 65 to 90 and  a – z = 97 to 122
the delta values of uper and lower case = a - A  = 32. 
*******************************/
void CaseConvert(string &x)
{
    int lenght,i;
    lenght = x.length();

    i=0;
    while(x[i])
    {
        if((x[i]>= 65) && (x[i]<=90))
        {
            x[i]=x[i]+32;
        }
       else if((x[i]>= 97) && (x[i]<=122))
        {
            x[i]=x[i]-32;
        }
        i++;
    }
}
/*main function where program will begin execution */
int main()
{
    string string_1 = "Twinkal HELLO" ;
    CaseConvert(string_1);
    cout<<string_1<<endl;
	/* prints any string */
	cout<<"Hello Twinkal"<<endl;
	cout<<"Best luck with C++";
	cout<<endl<<"i hope you will do go"<<endl;
	return 0;
}
