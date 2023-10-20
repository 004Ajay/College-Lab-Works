# CLASSIFYING PERSONAL INCOME 

import pandas as pd # To work with dataframes
from sklearn.model_selection import train_test_split # To partition the data
from sklearn.neighbors import KNeighborsClassifier # importing the library of KNN
from sklearn.metrics import accuracy_score,confusion_matrix # Importing performance metrics - accuracy score & confusion matrix

data = pd.read_csv('income.csv', na_values=[" ?"]) # Importing data

data.isnull().sum() # Data pre-processing

missing = data[data.isnull().any(axis = 1)] # axis=1 => to consider at least one column value is missing in a row

""" Points to note:
1. Missing values in Jobtype    = 1809
2. Missing values in Occupation = 1816 
3. There are 1809 rows where two specific 
   columns i.e. occupation & JobType have missing values
4. (1816-1809) = 7 => You still have occupation unfilled for 
   these 7 rows. Because, jobtype is Never worked
"""
data2 = data.dropna(axis = 0)

# Reindexing the salary status names to 0,1
data2['SalStat']=data2['SalStat'].map({' less than or equal to 50,000':0,' greater than 50,000':1})
print(data2['SalStat'])

new_data = pd.get_dummies(data2, drop_first=True)

# Storing the column names 
columns_list = list(new_data.columns)
print(columns_list)

# Separating the input names from data
features = list(set(columns_list)-set(['SalStat']))
print(features)

# Storing the output values in y
y = new_data['SalStat'].values
print(y)

# Storing the values from input features
x = new_data[features].values
print(x)

# Splitting the data into train and test
train_x, test_x, train_y, test_y = train_test_split(x, y, test_size = 0.3, random_state = 0)

"""  KNN  """
# Storing the K nearest neighbors classifier
KNN_classifier = KNeighborsClassifier(n_neighbors = 5)  

# Fitting the values for X and Y
KNN_classifier.fit(train_x, train_y) 

# Predicting the test values with model
prediction = KNN_classifier.predict(test_x)

# Performance metric check
confusionMmatrix = confusion_matrix(test_y, prediction)
print(confusionMmatrix)

# Calculating the accuracy
accuracy_score = accuracy_score(test_y, prediction)
print(accuracy_score)

print('Misclassified samples: %d' % (test_y != prediction).sum())

"""  Effect of K value on classifier  """
Misclassified_sample = []
# Calculating error for K values between 1 and 20
for i in range(1, 20):  
    knn = KNeighborsClassifier(n_neighbors = i)
    knn.fit(train_x, train_y)
    pred_i = knn.predict(test_x)
    Misclassified_sample.append((test_y != pred_i).sum())
print(Misclassified_sample)

# END OF SCRIPT