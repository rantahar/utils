#!/usr/bin/env python3
# Run python code from the command line. Mainly used as a calculator.

import numpy as np
import sys
import os

code = ' '.join(sys.argv[1:])
print(code)

print(eval(code))
