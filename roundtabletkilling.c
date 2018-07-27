#include<stdio.h>

int main(){
int n,k,x,i,j,count,killer,ar[1000],kills;
scanf("%d%d%d",&n,&k,&x);
count=n;
i=x-1;

for(j=0;j<n;j++){
ar[j]=j+1;
}

while(count>0){
killer=ar[i];
if(count==1){
break;
}
 kills=ar[i]%k;
i+=1;

while(kills && count!=1){
i=i%n;
if(ar[i]>0){

ar[i]=-1;
kills-=1;
count-=1;
i+=1;
}
else{
i+=1;
}
}
i=i%n;
if(ar[i]==-1){
while(ar[i]==-1){
i+=1;
i=i%n;
}
}
}
printf("%d",killer);
return 0;
}