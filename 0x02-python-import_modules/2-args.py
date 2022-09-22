#!/usr/bin/python3
if __name__ == "__main__":
    from sys import argv

    a = len(argv) - 1
    if a == 0:
        print("{} arguments.".format(a))
    elif a == 1:
        print("{} argument:".format(a))
        print("{}: {}".format(a, argv[1]))
    else:
        print("{} arguments:".format(a))
        for i in range(1, len(argv)):
            print("{}: {}".format(i, argv[i]))
