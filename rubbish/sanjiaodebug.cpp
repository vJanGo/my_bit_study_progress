#include<stdio.h>
#include<math.h>
float a[100][2];
int main()
{
	int time,sam,j,k,l;
	scanf("%d",&time);
	while(time)
	{
		scanf("%d",&sam);
		
		float s,max=0;
		for(j=0;j<sam;j++)
		{
			scanf("%f%f",&a[j][0],&a[j][1]);
		}/*把三角形的顶点都存在数组中*/
		for(j=0;j<sam-2;j++)
		    for(k=j+1;k<sam-1;k++)
		        for(l=k+1;l<sam;l++)
		            {
		            	s=(float)abs((a[j][0]*a[k][1]-a[j][0]*a[l][1]+a[k][0]*a[l][1]-a[k][0]*a[j][1]+a[l][0]*a[j][1]-a[k][0]*a[k][1]))/2.0;/*求面积*/
		            	if(s>max) max=s;
					}
	printf("%.1f\n",max);
	time--;
	}
	return 0;
}