int height(int N){
int i=0;
for(i=0;i<1000;i++)
{
if(((i*(i+1))/2)>N)
break;
}
return i-1;
}
