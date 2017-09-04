from math import fabs as Abs

def f(x):
	return (x**3) - (5*x) - 10

def aprox(a, b, fa, fb):
	return a - ((fa * (b - a)) / (fb - fa))

def error(old_c, new_c):
	return Abs(((new_c - old_c) / new_c) * 100)

def regla(a, b, maxiteraciones, iteraciones):
	
	a = float(a)
	b = float(b)
	c = aprox(a, b, f(a), f(b))

	if (f(a) * f(c)) > 0: 
		a = c
		fa = f(a)					
	else:
		b = c
		fb = f(b)
	
	aux = aprox(a, b, f(a), f(b))
	
	error_rango = error(c, aux)
	c = aux
	fc = f(c)
	
	if error_rango < 0.01: 
		return [c, iteraciones]
	else: 
		return regla(a, b, maxiteraciones, iteraciones + 1)

r = regla(0, 7, 1000, 0)

if (r is not None):
	print("\t* Se emplearon " + str(1000 - r[1]) + " iteraciones\t")
	print("\t* Raíz = " + str(r[0]) + "\t")							
	print("\t* f("+str(r[0])+") = " + str(f(r[0])) + "\t")
	
