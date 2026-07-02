def main():
    n = int(input())
    row = n+2
    column = (n*2)-1
    mid = n-1
    print((" " * (n-1)) + "*")
    for i in range(1, n):
        print(((" " * (mid - i)) + "*") + ((" " * (i-1)) + "*") + ((" " * (i-1)) + "*"))
    for j in range(2):
        print((" " * (n-1)) + "*")
main()
