#include<stdio.h>
#include<math.h>
double min(int x,int y,int p1,int p2);
double minimum(double arr[],int n);
int x;
int y=0,temp;
int main()
{
	int i,j,k,l,m,n,t;
	double dist1=0,dist2=0,dist;
	scanf("%d",&t);
	double ans[t];
	for(j=0;j<t;j++)
	{
		dist1=0;
		dist2=0;
		scanf("%d %d %d %d %d",&x,&y,&n,&m,&k);
		int pt1[2*n];
		int pt2[2*m];
		int pt3[2*k];
		int x1,y1,x2,y2,temp1,temp2;
		double minimum1,minimum2;
		for(i=0;i<2*n;i++)
		{
			scanf("%d",&pt1[i]);
		}
		for(i=0;i<2*m;i++)
		{
			scanf("%d",&pt2[i]);
		}
		for(i=0;i<2*k;i++)
		{
			scanf("%d",&pt3[i]);
		}
		double min1[n];
		double min2[m];
		double min3[k];
		for(i=0;i<2*n;i+=2)
		{
			min1[i/2]=min(x,y,pt1[i],pt1[i+1]);
		}
		for(i=0;i<2*m;i+=2)
		{
			min2[i/2]=min(x,y,pt2[i],pt2[i+1]);	
		}

		minimum1=minimum(min1,n);
		x1=pt1[2*temp];
		y1=pt1[(2*temp)+1];
		minimum2=minimum(min2,m);
		x2=pt2[2*temp];
		y2=pt2[(2*temp)+1];
		

		dist1+=minimum1;
		for(i=0;i<2*m;i+=2)
		{
			min2[i/2]=min(x1,y1,pt2[i],pt2[i+1]);
		}	
		minimum1=minimum(min2,m);
		x=pt2[2*temp];
		y=pt2[(2*temp)+1];
		dist1+=minimum1;
		
		
		dist2+=minimum2;
		for(i=0;i<2*n;i+=2)
		{
			min1[i/2]=min(x2,y2,pt1[i],pt1[i+1]);
		}
		minimum2=minimum(min1,m);
		temp1=pt1[2*temp];
		temp2=pt1[(2*temp)+1];
		dist2+=minimum2;
		
		if(dist2 < dist1)
		{
			x=temp1;
			y=temp2;
			dist=dist2;
		}
		else
			dist = dist1;

		for(i=0;i<2*k;i+=2)
		{
			min3[i/2]=min(x,y,pt3[i],pt3[i+1]);
		}
		minimum1=minimum(min3,k);
		dist+=minimum1;
		ans[j]=dist;
	}
	for(i=0;i<t;i++)
	{
		printf("%.10f\n",ans[i]);
	}
}
double min(int x,int y,int p1,int p2)
{
	return(sqrt(((p1-x)*(p1-x))+((p2-y)*(p2-y))));
}
double minimum(double arr[],int n)
{
	int i;
	double min=arr[0],count=0;
	for(i=0;i<n;i++)
	{
		if(arr[i] < min)
		{
			min=arr[i];
			count++;
		}
	}
	temp=count;
	return min;
}