import  matplotlib.pyplot as plt
language = ['C', 'C++', 'Java', 'Python']
students = [28, 34, 26, 40]
plt.title("BAR GRAPH")
plt.xlabel('X : axis')
plt.ylabel('Y : axis')
plt.bar(language, students)
plt.show()