#!/usr/bin/env python

from subprocess import call

def main():
    args = ['./ex10'] + ['blah' for i in range(1000000)] 
    call(args)
    return

if __name__ == "__main__":
    main()
