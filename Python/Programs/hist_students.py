import numpy as np
import matplotlib.pyplot as plt

data = np.array([135, 140, 140, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155])

# Use the Sturges' rule to determine the number of bins
n_bins = int(np.log2(len(data)) + 1)

plt.hist(data, bins=n_bins)
plt.xlabel('Height of student(m)')
plt.ylabel('Number of students')
plt.title('Histogram of student heights')
plt.show()
