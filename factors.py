#!/usr/bin/python3
def main():
    fh = open(sys.argv[1], "r")

    read = fh.readlines()

    for line in read:
        line = line.strip("\n")
        f1, f2 = factors(int(line))
        print(f"{line}={f2}*{f1}")


def factors(num):
    if num % 2 == 0:
        return 2, num // 2
    for i in range(3, num, 2):
        if num % i == 0:
            return i, num // i


if __name__ == "__main__":
    import sys

    main()
