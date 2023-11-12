def num2(x):
    if x>1:
        print(x)
        num1(x)
    else:
        print("stop")
def num1(x):
      if x>1:
          print(x)
          num2(x)
      else:
         print("stop")
x = 3
num2(x)
