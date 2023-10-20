import  matplotlib.pyplot as plt
x = [1,2,3,4,5,6]
# For Normal graph
plt.plot(x)
plt.title("Normal Graph")
plt.xlabel('X : axis')
plt.ylabel('Y : axis')
plt.grid()
plt.show()
plt.figure()
# For stem graph
plt.stem(x)
plt.title("Stem Graph")
plt.xlabel("X - axis")
plt.ylabel("Y- axis")
plt.show()