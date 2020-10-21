#!/bin/python3

import math
import os
import random
import re
import sys

temp = int(input().strip())
for i in range(temp):
    n , k = map(int , input().split())
    if ((k-1) | k) <= n:
        print(k -1)
    else:
        print(k-2) 
