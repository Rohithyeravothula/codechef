import tokenize, token
s="{'test':'123','hehe'}"
for i in tokenize.generate_tokens(iter([s]).next):
	print token.tok_name[i[0]]