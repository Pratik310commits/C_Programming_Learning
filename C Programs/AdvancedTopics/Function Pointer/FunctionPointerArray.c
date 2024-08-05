# include <stdio.h>
void dbl(int *) ;
void tple(int *) ;
void qdpl(int *) ;

int main()
{
    int  num = 2, i;
    void (*fPtr[])(int *) = {dbl, tple, qdpl} ;
    for(i = 0; i < 3; i++ )
    {
        fPtr[i](&num) ;
        printf("%u\n", num) ;
    }
    return 0;
}
 
void dbl (int *n)  
{
    printf("(%s)", __FUNCTION__);
    *n = *n * *n ;
}
 
void tple (int *n)  
{
    printf("(%s)", __FUNCTION__);
    *n = *n * *n * *n ;
}
 
void qdpl (int *n)  
{
    printf("(%s)", __FUNCTION__);
    *n = *n * *n * *n * *n ;
}

/* 
// return_type (*function_name)(input param1 type)
// return_type (*function_name[size1][size2])(input param1 type)
// 
// 
 */