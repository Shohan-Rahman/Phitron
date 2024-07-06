for(int i=1;i<n;i++)
    {
        if(min>a[i])
        {
            int tmp=a[i];
            a[i]=min;
            min=tmp;
        }
    }