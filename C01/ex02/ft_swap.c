void ft_swap(int *a, int *b) {
	int *c;
    *a = 4;
    *b = 2;
    
    c = a;
    *a = *b;
    *b = *c;
}


int main() {
	int a;
    int b;
    
	ft_swap(&a, &b);
    write(1, a, 1);
  	return 0;
}