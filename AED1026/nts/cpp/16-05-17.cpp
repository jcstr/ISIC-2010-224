/* proof of concept from the lecture of today */

int f(int i, int j) 
{
	if (i < j) {
		swap(i, j);
	}

	if (i == j) {
		return 0;
	}	

	return (i - 1) * (i - 2) / 2 + j - 1;
}
