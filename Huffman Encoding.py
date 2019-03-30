n = int(input())
dic = {}
for i in range(n):
  a, b = input().split(" ")
  dic.update({a:b})
b = ""
string = str(input())
for i in string:
  b+=(dic[i])

print(b)
