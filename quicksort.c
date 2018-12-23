void quicksort(int a[], int left, int right);
void rquicksort(int a[], int left, int right);
int med3(int x, int y, int z);
void swap(int *i1, int *i2);

void quicksort(int a[], int left, int right) {
	if (left < right) {
		int i = left, j = right;
		int pivot = med3(a[i], a[i + (j - i) / 2], a[j]);

		while (1) {
			while (a[i] < pivot) {
				i++;
			}
			while (pivot < a[j]) {
				j--;
			}
			if (i >= j) {
				break;
			}
			
			swap(&a[i], &a[j]);

			i++;
			j--;
		}
		quicksort(a, left, i - 1);
		quicksort(a, j + 1, right);
	}
}

void rquicksort(int a[], int left, int right) {
	if (left < right) {
		int i = left, j = right;
		int pivot = med3(a[i], a[i + (j - i) / 2], a[j]);

		while (1) {
			while (a[i] > pivot) {
				i++;
			}
			while (pivot > a[j]) {
				j--;
			}
			if (i >= j) {
				break;
			}
			
			swap(&a[i], &a[j]);

			i++;
			j--;
		}
		rquicksort(a, left, i - 1);
		rquicksort(a, j + 1, right);
	}
}

int med3(int x, int y, int z) {
/* x, y, z の中間値を返す */
	if (x < y) {
		if (y < z) {
			return y;
		} else if (z < x) {
			return x;
		} else {
			return z;
		}
	} else {
		if (z < y) {
			return y;
		} else if (x < z) {
			return x;
		} else {
			return z;
		}
	}
}

void swap(int *i1, int *i2) {
	int wk;

	wk = *i1;
	*i1 = *i2;
	*i2 = wk;
}
