import re

N = int(input().strip())
l=[]
for i in range(N):
    firstName,emailID = input().strip().split(' ')
    firstName,emailID = [str(firstName),str(emailID)]
    if re.search('@gmail\.com$',emailID):
        l.append(firstName)
print(*sorted(l),sep='\n')
