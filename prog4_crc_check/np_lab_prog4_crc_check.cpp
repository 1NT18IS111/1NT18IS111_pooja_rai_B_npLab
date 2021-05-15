
#include<bits/stdc++.h>
using namespace std;
int main()
{
int i,j,k,l;
int fs;
cout<<"\n enter no of bits in dividend";
cin>>fs;    
int f[20];     
cout<<"\nenter dividend";
for(i=0;i<fs;i++)
{
cin>>f[i];
}
int gs;
cout<<"\nenter no of bits in divisor";
cin>>gs;   
int g[20];   
cout<<"\n Enter divisor";
for(i=0;i<gs;i++)
{
cin>>g[i];
}
cout<<"\n Sender Side:";
cout<<"\nDividend Polynomial\n";
for(i=0;i<fs;i++)
{
cout<<f[i];
}
cout<<"\nDivisor Polynomial\n";
for(i=0;i<gs;i++)
{
cout<<g[i];
} 
int rs=gs-1;
cout<<"\n Number of 0's to be appended:\n "<<rs;
for (i=fs;i<fs+rs;i++)
{
f[i]=0;
}
int temp[20];
for(i=0;i<20;i++)
{
temp[i]=f[i];
}
cout<<"\n Dividend after appending 0's :\n";
for(i=0; i<fs+rs;i++)
{
cout<<temp[i];
}   
 for(i=0;i<fs;i++)
{
 j=0;
 k=i;
   
 if (temp[k]>=g[j])
  {
 for(j=0,k=i;j<gs;j++,k++)
  {
if((temp[k]==1 && g[j]==1) || (temp[k]==0 && g[j]==0))
{
temp[k]=0;
}
else
 {
 temp[k]=1;
 }
}
}
} 
 int crc[15];
for(i=0,j=fs;i<rs;i++,j++)
  {
crc[i]=temp[j];
  } 
cout<<"\n Remainder bits: \n";
 for(i=0;i<rs;i++)
  {
cout<<crc[i];
 }int m=0;
  for(i=0;i<rs;i++)
  {
if(crc[i]==0)
m++;
}
if(m==rs)
cout<<"\n error not detected";
else
cout<<"\n error detected";
cout<<"\nCodeword after adding crc redundant bits";
int tf[15];
for(i=0;i<fs;i++)
{
tf[i]=f[i];
}
for(i=fs,j=0;i<fs+rs;i++,j++)
{
 tf[i]=crc[j];
}
for(i=0;i<fs+rs;i++)
{
cout<<tf[i];
}

if(m!=rs)
{
    cout<<"\nat the receiver side\n";
    for(i=0;i<20;i++)
{
temp[i]=tf[i];
}
     for(i=0;i<fs;i++)
{
 j=0;
 k=i;
   
 if (temp[k]>=g[j])
  {
 for(j=0,k=i;j<gs;j++,k++)
  {
if((temp[k]==1 && g[j]==1) || (temp[k]==0 && g[j]==0))
{
temp[k]=0;
}
else
 {
 temp[k]=1;
 }
}
}
} 
 int crc[15];
for(i=0,j=fs;i<rs;i++,j++)
  {
crc[i]=temp[j];
  } 
cout<<"\n Remainder bits: \n";
 for(i=0;i<rs;i++)
  {
cout<<crc[i];
 }int m=0;
  for(i=0;i<rs;i++)
  {
if(crc[i]==0)
m++;

cout<<"\nCodeword after adding crc redundant bits";
int tg[15];
for(i=0;i<fs;i++)
{
tg[i]=tf[i];
}
for(i=fs,j=0;i<fs+rs;i++,j++)
{
 tg[i]=crc[j];
}
for(i=0;i<fs+rs;i++)
{
cout<<tg[i];
}
}
}
}