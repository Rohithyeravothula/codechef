int read_int()
{
    register int noRead=0,isneg=0;
    register char p=gtc;
    for(;p<48 || p>57;p=gtc){if(p=='-') isneg=1;}
    while(p>47 && p<58){ noRead = (noRead << 3) + (noRead << 1) + (p - '0');p=gtc;}
    if(isneg) noRead = -noRead;
    return noRead;
}

inline double getDouble()
{
	char c;
	c = gc();
	int t = 0;
	while(c<='9' && c>='0')
	{
		t=t*10+c-'0';
		c = gc();
	}
	int d=0,i=1;
	if(c=='.')
	{
		c = gc();
		while(c<='9' && c>='0')
		{
			i*=10;
			d=d*10+c-'0';
			c = gc();

		}
	}

	 return (double)t + ((double)d)/i;
}
