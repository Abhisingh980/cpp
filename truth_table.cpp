#include<iostream>
#include<math.h>
#include<vector>

using namespace std;

int dec_to_bin(int dec)
{
	int bin=0,i=0;
	while(dec)
	{
		bin += pow(10,i) * (dec%2);
		dec=dec/2;
		i++;
	}
	return bin;
}


int main()
{
	
int i,j,n,bin,c=0,k,val,p;

vector<char> binary;

printf("Please enter the number of variables : ");
scanf("%d",&n);

for(i=0;i<pow(2,n);i++)
{
	
	bin = dec_to_bin(i);
	for(int k=0;k<n;k++)
	{
	    val = bin % 10;
	    bin = bin / 10;
	    if(val==0)
	    {
		   binary.push_back('T');
	    }
	    else
		{
	       binary.push_back('F');
	    }
	}
	for(auto i = binary.rbegin(); i != binary.rend(); i++)
	{
		cout << " " << *i;
	}
	printf("\n");
	binary.clear();
}
	
return 0;
}

