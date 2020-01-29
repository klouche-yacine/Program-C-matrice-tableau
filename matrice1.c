#include<stdio.h>
main()
{int M[10][10];
int n,m,p,r,i,j;


printf("donnez le nombre de lignes de votre matrice : ");
scanf("%d",&n);
printf("donnez le nombre de colone de votre matrice : ");
scanf("%d",&m);
p=0;
r=0;

for(i=0;i<n;i++)
   {for(j=0;j<m;j++)
       {printf("donnez la valeur de M[%d][%d] :",i,j);
         scanf("%d",&M[i][j]);
              if(M[i][j]%2==0)
              {p=p+1;
		       }
		       else {r=r+1;
			   }

}
   }
   printf("le nombre des nombres pair est %d\n",p);
   printf("le nombre des nombres impair est %d",r);
}
