def ch(n):
	x=1
	s=1
	while(s<=n):
		#print s
		if s!=n:
			s=s*x
			x=x+1
		else:
			return 1
	return 0
print ch(24),ch(25)