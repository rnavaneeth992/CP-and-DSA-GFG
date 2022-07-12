string convertToRoman(int n) {
        // code here
        int a[13]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
        string b[13]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        string s="";
        int i;
        for(i=0;i<13;i++)
        {
            while(n>=a[i])
            {
                s=s+b[i];
                n=n-a[i];
            }
        }
        return s;
    }
