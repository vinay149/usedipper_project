n1=input()
if(n1==0):
	print "O-|-OOOO"
while(n1):
	n=n1%10;
	if n==0:
		print "O-|-OOOO"
	elif n==1:
		print "O-|O-OOO"
	elif n==2:
		print "O-|OO-OO"
	elif n==3:
		print "O-|OOO-O"
	elif n==4:
		print "O-|OOOO-"
	elif n==5:
		print "-O|-OOOO"
	elif n==6:
		print "-O|O-OOO"
	elif n==7:
		print "-O|OO-OO"
	elif n==8:
		print "-O|OOO-O"
	elif n==9:
		print "-O|OOOO-"
	n1=n1/10

