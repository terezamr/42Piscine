void ft_div_mod(int a, int b, int *div, int *mod) {
    *div = a / b;
    *mod = a % b;
}


int main() {
	int a;
    int b;
    int *div;
    int *mod;
    
	ft_div_mod(10, 3, *div, *mod);
    write(1, div, 1);
  	return 0;
}