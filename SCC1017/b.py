def sign(a, b):
	return a * b > 0

def bisection(xl, xr, tol):
	xmid = (xr + xl) / 2
	error = abs(xl - xr)

	n = 1
	NMAX = 54
	while n <= NMAX:
		c = (a + b) / 2
		if f(c) == 0 or (b - a) / 2 < TOL:
			print(c)

		n = n + 1
		if sign(f(c)) == sign(f(a)):
			a = c
		else:
			b = c

		return xmid

def f(x):
	return -26 + 85*x - 91*x**2 +44*x**3 - 8*x**4 + x**5

x = bisectf(f, 0, 1)
print x, f(x)

