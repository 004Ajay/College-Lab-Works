# Python program to calculate area of different geometric shapes

import time # For making delay

def getInp():
    lst = ['Triangle', 'Circle' ,'Semi Circle' ,'Square' ,'Rectangle' ,'Parallelogram' ,'Rhombus' ,'Trapezium']
    print("\nAvailable Shapes: ", ', '.join(lst))

    inp = input("\nType shape name: ").title()
    if inp in lst:
        return lst.index(inp)
    else:
        time.sleep(0.5) # For a short delay
        print("Shape not found.\nTry Again.\n")
        getInp()

def Triangle():
    print('\nTriangle seleceted')
    b, h = list(map(float,input("Enter base & height: ").split()))
    print(f"Area of Triangle: 0.5 * Base * Height\n{0.5} * {b} * {h} = {round((0.5* b * h), 4)}")

def Circle():
    print('\nCircle seleceted')
    r = float(input("Enter radius: "))
    print(f"Area of Circle: π * Radius * Radius\n{3.14159} * {r} * {r} = {round((3.14159 * r * r), 4)}")

def SemiCircle():
    print('\nSemi Circle seleceted')
    r = float(input("Enter radius: "))
    print(f"Area of Semi-Circle: 0.5 * π * Radius * Radius\n{0.5} * {3.14159} * {r} * {r} = {round((0.5 * 3.14159 * r * r), 4)}")

def Square():
    print('\nSquare seleceted')
    s = float(input("Enter length of 1 side: "))
    print(f"Area of Square: Side * Side\n{s} * {s} = {s * s}")

def Rectangle():
    print('\nRectangle seleceted')
    l, b = list(map(float,input("Enter length & breadth: ").split()))
    print(f"Area of Rectangle: Length * Breadth\n{l} * {b} = {l * b}")

def Parallelogram():
    print('\nParallelogram seleceted')
    b, h = list(map(float,input("Enter base & height: ").split()))
    print(f"Area of Parallelogram: Base * Height\n{b} * {h} = {b * h}")

def Rhombus():
    print('\nRhombus seleceted')
    d1, d2 = list(map(float,input("Enter length of diagonals: ").split()))
    print(f"Area of Rhombus: (Length of diagonal 1 * diagonal 2) * 0.5\n{d1} * {d2} = {(d1 * d2) * 0.5}")

def Trapezium():
    print('\nTrapezium seleceted')
    l1, l2 = list(map(float,input("Enter length of parallel sides: ").split()))
    h = float(input("Enter height: "))
    print(f"Area of Trapezium: [0.5 * (Side 1 + Side 2)] * Height\n{0.5} * {l1 + l2} * {h} = {(0.5 * (l1 + l2)) * h}")

def main():
    print("\nArea Calculator of Geometric Shapes")
    while True:
        num = getInp()

        if num == 0:
            Triangle()
        elif num == 1:
            Circle()
        elif num == 2:
            SemiCircle()
        elif num == 3:
            Square()
        elif num == 4:
            Rectangle()
        elif num == 5:
            Parallelogram()
        elif num == 6:
            Rhombus()
        elif num == 7:
            Trapezium()
        else:
            print("Input is out of range.\nTry again\n")
            num = getInp()

        if input("More calculations? (y/n): ") == 'n':
            break    

if __name__ == "__main__": # Calling main function
    main()