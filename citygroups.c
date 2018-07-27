#include<stdio.h>
#include<stdio.h>
#include<malloc.h>

int main()
{
int cities, groups,groupSize,city,queries,cityA, cityB,cityAGroup,cityBGroup,;

scanf("%ld%ld",&cities,&groups);
int *a=(int *)malloc(sizeof(int)*n);

for(int i=0; i<groups; i++) {

scanf("%d",&groupSize);
for(int j=0; j<groupSize; j++) {
scanf("%d",&city);
citiesIdentifier[city-1] = i;
}
}

scanf("%d",&queries);


for(int i=0; i<queries; i++) {

scanf("%d%d",&cityA,&cityB)
cityAGroup = citiesIdentifier[cityA-1];
cityBGroup = citiesIdentifier[cityB-1];

distance = cityAGroup - cityBGroup;
if(distance < 0) distance *= -1;
if(distance<(groups-distance))
printf("%d\n",distance);
else
printf("%d\n",groups-distance);

}

return 0;
}