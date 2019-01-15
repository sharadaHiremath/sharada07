#include<iostream>
using namespace std;
void bin_to_dec(int n)
{
	int num=n;
    int decimal=0;
    int base=1;
    int temp=num;
    while(temp)
    {
        int last_digit=temp%10;
        temp=temp/10;

        decimal += last_digit*base;

        base=base*2;
    }

    cout<<"The decimal is: "<<decimal;
}
//conversion01
void dec_to_binary(int n)
{
	int binary[1000];
    int i=0;
    while(n>0)
    {
		binary[i]=n%2;
        n=n/2;
        i++;
    }
    cout<<"The binary number is";
    for (int j=i-1;j>=0;j--)
        {
			cout<<binary[j];
		}
		cout<<"\n\n\n";
}

int main()
{
	int x;
	do
	{
	cout<<"Enter 1 to covert a decimal number to binary\n"<<"Enter 2 to covert binary number to decimal\n";
	cin>>x;
	switch(x)
	{
		case 1:
		int n;
		cout<<"Enter the decimal number you want to covert: ";
		cin>>n;
		dec_to_binary(n);
		break;
		case 2:
		int n1;
		cout<<"Enter the binary number you want to covert :";
		cin>>n1;
		bin_to_dec(n1);
		break;
		default :
		break;
	}
	}
	while(x!=3);

}

