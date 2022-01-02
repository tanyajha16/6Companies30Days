
string encode(string src)
{     
  //Your code here 
  int n=src.length();
  string str="";
  int c;
  int count=0;
  int i;
  for( i=0;i<n-1;i++)
  {
      if(src[i]==src[i+1])
        count++;
      else
      {
          c=count+1;
          str+=src[i]+to_string(c);
          count=0;
      }
  }
  c=count+1;
  str+=src[i]+to_string(c);
  return str;
}     

 
