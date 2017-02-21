# include <stdio.h>
# include <string.h>


char s[1010], buff[1010] ;


#define mul(s, x)\
{\
    for (cc = 0, len = strlen(s), j = len-1 ; j >= 0 ; j--)\
        cc = (s[j]-'0') * (x) + cc ,\
        s[j] = cc%10 + '0' ,\
        cc/=10 ;\
    if (cc)\
        sprintf (buff, "%d", cc),\
        strcat(buff, s),\
        strcpy(s, buff);\
}


int main ()
{
	int n, m, i, j, nCase = 1, cc, len ;
	while (~scanf ("%d%d", &m, &n) && (m || n))
	{
		if (m < n) strcpy(s, "0") ;
		else {
			strcpy(s, "1") ;
			for (i = 1 ; i <= (m + n) ; i++) if (i != m + 1)
					mul(s, i) ;
			if (n != 0) mul (s, m - n + 1) ;
		}
		printf ("Test #%d:\n%s\n", nCase++, s) ;
	}
	return 0 ;
}