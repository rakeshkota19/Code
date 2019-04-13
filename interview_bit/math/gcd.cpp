int Solution::gcd(int A, int B) {
    if(B==0) return A;
    A = A%B;
    gcd(B,A);
}