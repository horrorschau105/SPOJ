int main()
{
    char str[100100];
    
    while(cin>>str)
    {
          int count=1,l;
          l=strlen(str);
          for(int i=0;i<l;i++)
          {
                  if(str[i]==str[i+1])
                        count++;
                  else if(count>3)
                  {
                       cout<<count<<"!"<<str[i];
                       count=1;
                  }
                  else
                  {
                      while(count--)
                           cout<<str[i];
                      count=1;
                  }
          }
          cout<<endl;
    }
    return 0;
}
