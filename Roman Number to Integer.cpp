int romanToDecimal(string &str) {
        // code here
        vector<int> r;
        int t,i;
        for(i=0;i<str.length();i++)
        {
            if(str[i]=='I')
            {
                r.push_back(1);
            }
            else if(str[i]=='V')
            {
                r.push_back(5);
            }
            else if(str[i]=='X')
            {
                r.push_back(10);
            }
            else if(str[i]=='L')
            {
                r.push_back(50);
            }
            else if(str[i]=='C')
            {
                r.push_back(100);
            }
            else if(str[i]=='D')
            {
                r.push_back(500);
            }
            else if(str[i]=='M')
            {
                r.push_back(1000);
            }
        }
        int num1=r[r.size()-1];
        for(i=r.size()-2;i>=0;i=i-1)
        {
            if(r[i]>=r[i+1])
            {
                num1=num1+r[i];
            }
            else
            {
                num1=num1-r[i];
            }
        }
        return num1;
    }
