class Fraction {
	private :

		int numer;
		int denominator;

	public :

		Fraction(int numer, int denominator) {
			this -> numer = numer;
			this -> denominator = denominator;
		}

		void print() {
			cout << this -> numer << " / " << denominator << endl;
		}


		void simplify() {
			int gcd = 1;
			int j = min(this -> numer, this -> denominator);
			for(int i = 1; i <= j; i++) {
				if(this -> numer % i == 0 && this -> denominator % i == 0) {
					gcd = i;
				}
			}
			this -> numer = this -> numer / gcd;
			this -> denominator = this -> denominator / gcd;
		}

		void add(Fraction f2) {
			int lcm = denominator * f2.denominator;
			int x = lcm / denominator;
			int y = lcm / f2.denominator;

			int num = x * numer + (y * f2.numer);

			numer = num;
			denominator = lcm;

			simplify();	

		}
};
