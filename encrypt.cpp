#include<iostream>
#include<cstring>

using namespace std;

int main()

{int l,x,n,k,i,j=0;
 char A[999][999],B[999][999];
 
 cin>>n>>k;
 
 cin.ignore();
 for (i=0;i<n;i++)
 cin.getline(A[i],999);
 
 for (i=0;i<n;i++)
 cin.getline(B[i],999);
  
 
 for(i=0;i<n;i++)
  {l=strlen(A[i]);
   
   for(j=0;j<l;j++)
   {x=A[i][j];
    
	if(64<x&&x<91)
    {
	 if(x+k>90)
      A[i][j]=64+(x+k-90);
	 
	 else
	 A[i][j]=x+k;
	}
	
	if(96<x&&x<123)
	{
	 if(x+k>122)
	  A[i][j]=96+(x+k-122);
	 
	 else 
	 A[i][j]=x+k; 
	}
    
   }
  }
 
 for(i=0;i<n;i++)
  {l=strlen(B[i]);
   
   for(j=0;j<l;j++)
   {x=B[i][j];
    
	if(64<x&&x<91)
    {
	 if(x-k<65)
      B[i][j]=91-(65-x+k);
	 
	 else
	  B[i][j]=x-k;
	}
	
	if(96<x&&x<123)
	{
	 if(x-k<97)
	  B[i][j]=123-(97-x+k);
	 
	 else 
	  B[i][j]=x-k; 
	}
    
   }
  }
 
 
 for(i=0;i<n;i++)
 cout<<A[i]<<endl;
 for(i=0;i<n;i++)
 cout<<B[i]<<endl; 
}
