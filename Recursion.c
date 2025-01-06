Suggestion 1
void fun1(int n) {
    if(n>0) {
        printf("%d ", n);
        fun1(n-1);
    }
}
void fun2(int n) {
    if(n>0) {
        fun2(n-1);
        printf("%d ", n);
    }
}