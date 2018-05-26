#include <iostream>
#include <sstream>
#include <vector>

using namespace std;               //Might fail if input is not given in exactly the same format as in the task

void quick_sort(int[],int,int);
int partition(int[],int,int);

int main() 

{
    string line;
    int curr,num,l,A[9999];
    vector<int> vec;

    cin>>curr;
    vec.push_back(curr);
	cin.ignore();
	getline(cin,line);
    istringstream sin(line);
    while(sin>>num)
     vec.push_back(num);

	l=vec.size();
    
	for(int i=0;i<l;i++)
	A[i]=vec[i];
	
	quick_sort(A,0,l-1);
	
	
	for(int i=0;i<l;i++)
    { if(A[i]>=curr)
	   cout<<A[i]<<" ";
	}
	for(int i=l-1;i>=0;i--)
    { if(A[i]<curr)
	   cout<<A[i]<<" ";
    }
    cout<<"\nTotal Distance: "<<(2*A[l-1]-A[0]-curr);

}

void quick_sort(int a[],int l,int u)
{
    int j;
    if(l<u)
    {
        j=partition(a,l,u);
        quick_sort(a,l,j-1);
        quick_sort(a,j+1,u);
    }

}
 
int partition(int a[],int l,int u)
{
    int v,i,j,temp;
    v=a[l];
    i=l;
    j=u+1;
    
    do
    {
        do
            i++;
            
        while(a[i]<v&&i<u);
        
        do
            j--;
        while(v<a[j]);
        
        if(i<j)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }while(i<j);
    
    a[l]=a[j];
    a[j]=v;
    
    return(j);
}

