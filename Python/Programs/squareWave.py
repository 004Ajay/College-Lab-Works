import matplotlib.pyplot as plt
import numpy as np
# values of x & y are made using trial & error method
x = [0, 0, 1, 1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6] 
y = [0, 1, 1, 0, -1, -1, 1, 1, -1, -1, 1, 1, 0, 0]
plt.plot(x, y)
plt.title('Square Wave')
plt.xlabel('X : axis')
plt.ylabel('Y : axis')
plt.show()

"""
# ANOTHER WAY TO PRINT SQ-WAVE USING LIBRARY FUNCTIONS
import matplotlib.pyplot as plot
import numpy as np
from scipy import signal

t = np.linspace(0, 1, 1000, endpoint = True)
plot.plot(t, signal.square(2 * np.pi * 5 * t))
plt.xlabel('X : axis')
plt.ylabel('Y : axis')
plot.title('Square Wave')
plot.show()
"""