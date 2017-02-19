// otro ejemplo de inline
// ejemplo usando logica

# include <cstdio>

inline bool imply(bool a, bool b) { return !a || b; }
inline bool biimp(bool a, bool b) { return imply(a,b) && imply(b,a); }


inline bool exp1( bool p, bool q, bool r) { return imply(p,q) && r; } // (!p || q) && r; }
inline bool exp2( bool p, bool q, bool r) { return imply(p || q, r); } // !(p || q) || r; }
inline bool exp3( bool p, bool q, bool r) { return biimp(p, q & r); } // imply(p,q && r) && imply(q && r, q); //(!p (q && r)) && (!(q&& r) || p); }

inline const char *bname(bool p) { return p ? "V" : "F"; }

int main()
{
/*
	bool p, q, r;
	
	scanf("%i%i%i", &p, &q, &r);
	printf("Exp 1: %s\n", bname(exp1(p,q,r)));
	printf("Exp 2: %s\n", bname(exp2(p,q,r)));
	printf("Exp 3: %s\n", bname(exp3(p,q,r)));
*/
// nuevo ejemplo

	for (int i = 0; i <= 1; i++) {
		for (int j = 0; j <=1; j++) {
			for (int k = 0; k <= 1; k++) {
		
		printf("%s %s %s ", bname(i), bname(j), bname(k)); 

		printf("%s |", bname(q && r)); // cambiar por i j k
		printf("%s |", bname(!(q&r)));
		printf("%s |", bname(imply((q && r), p);
		printf("%s |", bname(!p));
		printf("%s |", bname(imply(p,q && r)));
		printf("%s\n", bname(biimp(p,q && r)));		

		}
	}
}
 
  return 0;
}
