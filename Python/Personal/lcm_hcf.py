# a x b = LCM(a, b) * GCD (a, b)
# LCM(a, b) = (a x b) / GCD(a, b)

def gcd(a,b):
	return b if a == 0 else gcd(b % a, a)
	
def lcm(a,b):
	return (a // gcd(a,b))* b

a = 12
b = 32

print(f'GCD({a}, {b}) = {gcd(a, b)}') # ans = 4
print(f'LCM({a}, {b}) = {lcm(a, b)}') # ans = 96