def calc(a,b):
  somador = 0
  for i in range(a+1,b,1):
    if i%2 != 0:
      somador += i
  print(somador)

num = int(input())
for _ in range(num):
  a,b = list(map(int, input().split(" ")))
  if b > a:
    calc(a,b)
  else:
    calc(b,a)
