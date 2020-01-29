#include<stdio.h>
main()
{
	int t[100];
	int n,i,j,x;
	
	printf("donnez la taille du tableau : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("donnez le nombre de t[%d] : ",i);
		scanf("%d",&t[i]);
		
	}
	i=0;
	j=n-1;

	while(i<j)
	{x=t[i];
	t[i]=t[j];
	t[j]=x;
	i=i+1;
	j=j-1;
	}

	printf("inversement du tableau est :\n");

	for(i=0;i<n;i++)
	{printf("t[%d]=%d\n",i,t[i]);
	}

}
