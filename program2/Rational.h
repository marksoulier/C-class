class Rational {
    private:
        int current_n, current_d;
        int gcf(int num_one, int num_two);
    public:
        Rational(int numerator, int denominator);
        void add(int n, int d);
        void sub(int n, int d);
        void mul(int n, int d);
        void div(int n, int d);
        void print_number();
};