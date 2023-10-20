import matplotlib.pyplot as plt
import pandas as pd

df = pd.read_csv('csvFile.csv') # Opening CSV File

OverallMean = df['Mark'].mean() # Mean of whole Dataset
print("Overall Mean mark: ", round(OverallMean, 4), "\n")

# Mean Line Plotting
X_Axis = df['Sl No']
Y_Axis = [OverallMean] * len(X_Axis)
plt.plot(X_Axis, Y_Axis, color='green', linestyle='dotted', label='Mean Line')

# ------------------------------------------------------------------------------------------------------------------------- #

# MALE DATA MANIPULATION
maleData = df.loc[df['Gender'] == 'm'] # Separating Male's Data
maleMean = maleData['Mark'].mean() # Male's mean mark
maleLowestMark = maleData['Mark'].min() # Male's min mark
maleHighestMark = maleData['Mark'].max() # Male's max mark

# Printing Male's mark Details
print(f"Male's Mean mark: {round(maleMean, 4)}\nMale's Highest mark: {maleHighestMark}\nMale's Lowest mark: {maleLowestMark}\n")

# Male max mark plotting
maleHighers = df.loc[(df['Mark'] == maleHighestMark) & ( df['Gender'] == 'm')] # Male's max marks for graph plotting
plt.scatter(maleHighers['Sl No'], maleHighers['Mark'], marker='x', facecolor='green', label="Male's Highest Marks") # Scatter Plotting

# Male min mark plotting
maleLowers = df.loc[(df['Mark'] == maleLowestMark) & ( df['Gender'] == 'm')] # Male's min marks for graph plotting
plt.scatter(maleLowers['Sl No'], maleLowers['Mark'], marker='.', facecolor='red', label="Male's Lowest Mark") # Scatter Plotting

# ------------------------------------------------------------------------------------------------------------------------- #
 
# FEMALE DATA MANIPULATION
femaleData = df.loc[df['Gender'] == 'f'] # Separating Female's Data
femaleMean = femaleData['Mark'].mean() # Female's mean mark
femaleLowestMark = femaleData['Mark'].min() # Female's min mark
femaleHighestMark = femaleData['Mark'].max() # Female's max mark

# Printing Female's mark Details
print(f"Female's Mean mark: {femaleMean}\nFemale's Highest mark: {femaleHighestMark}\nFemale's Lowest mark: {femaleLowestMark}\n")

# Female's max mark plotting
femaleHighers = df.loc[(df['Mark'] == femaleHighestMark) & ( df['Gender'] == 'f')] # Female's max marks for graph plotting
plt.scatter(femaleHighers['Sl No'], femaleHighers['Mark'], marker='x', facecolor='blue', label="Female's Highest Marks") # Scatter Plotting

# Female's min mark plotting
femaleLowers = df.loc[(df['Mark'] == femaleLowestMark) & ( df['Gender'] == 'f')] # Female's min marks for graph plotting
plt.scatter(femaleLowers['Sl No'], femaleLowers['Mark'], marker='o', facecolor='orange', label="Female's Lowest Mark") # Scatter Plotting

# ------------------------------------------------------------------------------------------------------------------------- #

plt.xlabel("Serial Number")
plt.ylabel("Marks")

# Key Box
plt.legend(bbox_to_anchor = (1.5 , 1.03))

plt.show() # Displaying the Graph

# RESULT
print("\nTherefore, both Mathematically & Graphically")
print('\033[1m' + 'Females are better performers.' + '\033[0m') if femaleMean > maleMean else print('\033[1m' + 'Males are better performers.' + '\033[0m')