def main():
    n = int(input()) # 5
    i = 0
    mid = n-1 # 4
    while i < n + 2: # i < 7 (เเถวว)
        j = 0
        while j < n * 2 - 1: # j < 9 (คอลัมน์)
            if (j == mid) or (j == mid - i) or (j == mid + i):
                print("*", end="")
            else:
                print(" ", end="")
            j = j + 1
        i = i + 1
        print()
main()