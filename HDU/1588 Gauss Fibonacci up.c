 #include <stdio.h>

long long int k,b,n,M;

typedef struct Matrix{

    long long int data[3][3];

}Matrix;
Matrix A,E,Zero;
typedef struct SuperMat{

    Matrix data[3][3];

}SuperMat;
SuperMat MA,ME;
Matrix Mul(Matrix X,Matrix Y)

{

    Matrix A;
    int i, j, k;
    for ( i = 0; i < 2; i++){

        for ( j = 0; j < 2; j++){

            A.data[i][j] = 0;

            for ( k = 0; k < 2; k++){

                A.data[i][j]+=X.data[i][k]*Y.data[k][j];

                A.data[i][j]%=M;

            }

        }

    }

    return A;

}

Matrix Sub(Matrix X,Matrix Y)

{

    Matrix A;
    int i, j;
    for ( i = 0; i < 2; i++){

        for ( j = 0; j < 2; j++){

            A.data[i][j] = X.data[i][j]-Y.data[i][j];

            A.data[i][j]%=M;

        }

    }

    return A;

}

Matrix Add(Matrix X,Matrix Y)

{

    Matrix A;
 	int i, j;
    for (  i = 0; i < 2; i++){

        for (  j = 0; j < 2; j++){

            A.data[i][j] = X.data[i][j]+Y.data[i][j];

            A.data[i][j]%=M;

        }

    }

    return A;

}

Matrix MulMul(int x,Matrix A)

{

    Matrix X,Y,Z;

    X = A;

    Y = E;

    if (x == 0) return Y;

    while (x!=1){

        if (x&1){

            x--;

            Y = Mul(Y,X);

        }

        else

        {

            x>>=1;

            X = Mul(X,X);

        }

    }

    return Mul(X,Y);

}

SuperMat SuperMul(SuperMat X,SuperMat Y)

{

    SuperMat A;
 int i, j, k;
    for ( i = 0; i < 2; i++){

        for ( j = 0; j < 2; j++){

            A.data[i][j] = Zero;

            for ( k = 0; k < 2; k++)

                A.data[i][j] = Add(A.data[i][j],Mul(X.data[i][k],Y.data[k][j]));

        }

    }

    return A;

}

SuperMat SuperMulMul(int x)

{

    SuperMat X,Y,Z;

    X = MA;

    Y = ME;

    while (x!=1){

        if (x&1){

            x--;

            Y = SuperMul(Y,X);

        }

        else

        {

            x>>=1;

            X = SuperMul(X,X);

        }

    }

    return SuperMul(X,Y);

}

int main()

{

    A.data[0][0] = A.data[0][1] = A.data[1][0] = 1;A.data[1][1] = 0;

    E.data[0][0] = E.data[1][1] = 1; E.data[0][1] = E.data[1][0] = 0;

    ME.data[0][0] = ME.data[1][1] = E;

    ME.data[0][1] = ME.data[1][0] = Zero;

    Zero.data[0][0] = Zero.data[0][1] = Zero.data[1][0] = Zero.data[1][1] = 0;

    while (scanf("%d%d%d%d",&k,&b,&n,&M)!=EOF){

        Matrix Fb = MulMul(b,A);

        Matrix K = MulMul(k,A);

        MA.data[0][0] = K;

        MA.data[0][1] = MA.data[1][1] = E;

        MA.data[1][0] = Zero;

        SuperMat Q = SuperMulMul(n);

        Matrix Z = Q.data[0][1];

        Matrix R = Mul(Fb,Z);

        printf("%I64d\n",R.data[1][0]);

 

    }

    return 0;

}